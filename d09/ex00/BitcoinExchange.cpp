#include "BitcoinExchange.hpp"
#include <cstdlib>

std::vector<std::string> split(std::string str, std::string del)
{
	std::vector<std::string> splited;
	std::string tmp;
	while (str.find(del) != std::string::npos)
	{
		tmp = str.substr(0, str.find(del));
		splited.push_back(tmp);
		str.erase(0, str.find(del) + del.size());
	}
	splited.push_back(str);
	return splited;	
}

bool isPositiveNumber(std::string str)
{
	if (str.empty())
		return false;

	bool has_a_dot = false;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == '.')
		{
			if (has_a_dot)
				return false;
			has_a_dot = !has_a_dot;
		}
		else if (!isdigit(str[i]))
		{
			return false;
		}
	}
	return (std::atof(str.c_str()) >= 0);
}

bool isValidDate(std::string date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	std::vector<std::string> parts = split(date, "-");
	if (parts.size() != 3)
		return false;

	int year = std::atoi(parts[0].c_str());
	int month = std::atoi(parts[1].c_str());
	int day = std::atoi(parts[2].c_str());

	if (month < 1 || month > 12 || day < 1)
		return false;
	int daysInMonth[] = {31, 28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day > daysInMonth[month - 1])
		return false;
	return true;
}


BitcoinExchange::BitcoinExchange()
{
	std::ifstream file;
	std::string line;
	file.open("data.csv");
	if (!file.is_open())
		throw std::runtime_error("could not open database file");

	getline(file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Error : First line in data.csv need to start by 'date,exchange_rate'");
	while (getline(file, line))
	{
		if (line.empty())
			continue;
		std::vector<std::string> pre_map = split(line, ",");

		if (pre_map.size() != 2)
			throw std::runtime_error("line wrongly formatted");
		if (!isValidDate(pre_map[0]))
			throw std::runtime_error("contain an invalid number");
		if (!isPositiveNumber(pre_map[1]))
		{
			throw std::runtime_error("contain an invalid date" + pre_map[1]);
		}
		_exchange[pre_map[0]] = std::atof(pre_map[1].c_str());
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& ref)
{
	*this=ref;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& ref)
{
	if (this != &ref)
		_exchange = ref._exchange;
	return (*this);
}

void BitcoinExchange::processInput(const char *filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
		throw std::runtime_error("could not open input file");

	std::string line;
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cerr << "Error : First line in " << filename << " need to start by 'date | value'" << std::endl;
		return ;
	}
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;

		std::vector<std::string> pre_map = split(line, " | ");

		if (!isValidDate(pre_map[0]))
		{
			std::cerr << "Error: bad input => " << pre_map[0] << std::endl;
			continue;
		}
		if (!isPositiveNumber(pre_map[1]))
		{
			std::cerr << "Error: bad number => " << pre_map[1] << std::endl;
			continue;
		}

		float btc = std::atof(pre_map[1].c_str());
		if (btc < 0 || btc > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}
		float rate;
		std::map<std::string, float>::iterator it = _exchange.lower_bound(pre_map[0]);

		if (it->first == pre_map[0])
		rate = it->second;
		else if (it == _exchange.begin())
		{
			std::cerr << "No earlier date available in database" << std::endl;
			continue;
		}
		else
		{
			--it;
			rate = it->second;
		}
		std::cout << pre_map[0] << " => " << btc << " = " << btc * rate << std::endl;
	}
}