#include <fstream>
#include <iostream>


int main(int argc, char const *argv[])
{
	if (argc != 4)
		return 1;
	std::string filename = argv[1];
	std::string to_find = argv[2];
	std::string replaced = argv[3];
	std::string line;
	size_t		old_find;
	
	std::ifstream read(filename.c_str());
	if(read.bad())
        return (0);
	std::ofstream outfile((filename + ".replace").c_str());
	if(outfile.bad())
        return (read.close(), 0);

	while(std::getline(read, line))
	{
		old_find = 0;

		while (line.find(to_find, old_find) != std::string::npos)
		{
			outfile << line.substr(old_find, line.find(to_find, old_find)) << replaced;	
			old_find = line.find(to_find, old_find) + to_find.size();
		}
		outfile << line.substr(old_find) << std::endl;
	}
	read.close();
	outfile.close();
	return 0;
}
