#include "Brain.hpp"

Brain::Brain()
{	
	std::string ideas[3] = {
		"eat",
		"sleep",
		"play",
	};
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas[i%3]; 
	}
	std::cout << "[Brain] " << "create!!" << std::endl;
}

Brain::Brain(const Brain& ref)
{
	*this=ref;
	std::cout << "[Brain] " << "copy!!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] " << "delete!!" << std::endl;
}

Brain&	Brain::operator=(const Brain& ref)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = ref.ideas[i];
	}
	std::cout << "[Brain] " << "operator=!!" << std::endl;
	return (*this);
}

void Brain::displayIdeas( void )
{
	std::cout << this->ideas[0] << std::endl;
	std::cout << this->ideas[1] << std::endl;
	std::cout << this->ideas[2] << std::endl;
}