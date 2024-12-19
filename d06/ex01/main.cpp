#include "Serializer.hpp"

int main() {
	Data data;
	
	std::cout << "Original pointer address: " << &data << std::endl;

	uintptr_t raw = Serializer::serialize(&data);

	std::cout << "Serialized pointer address: " << raw << std::endl;


	Data* deserializedData = Serializer::deserialize(raw);

	std::cout << "Deserialized pointer address: " << deserializedData << std::endl;
	return 0;
}