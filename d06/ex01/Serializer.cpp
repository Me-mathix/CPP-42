#include <iostream>

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "[Serializer] " << "create!!" << std::endl;
}

Serializer::Serializer(const Serializer& ref)
{
	*this=ref;
	std::cout << "[Serializer] " << "copy!!" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "[Serializer] " << "delete!!" << std::endl;
}

Serializer&	Serializer::operator=(const Serializer& ref)
{
	(void) ref;
	std::cout << "[Serializer] " << "operator=!!" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}