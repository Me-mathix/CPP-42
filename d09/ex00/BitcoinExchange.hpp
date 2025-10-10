#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <map>
# include <vector>


class BitcoinExchange
{
private:
	std::map<std::string, float> _exchange;
	public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& ref);
	~BitcoinExchange();
	
	BitcoinExchange&	operator=(const BitcoinExchange& ref);
	void processInput(const char *filename);
};

#endif