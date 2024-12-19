#include "Serializer.hpp"

int main() {
    Data data;  // Create a Data object with an initial value

    std::cout << "Original pointer address: " << &data << std::endl;

    // Serialize the pointer
    uintptr_t raw = Serializer::serialize(&data);

    std::cout << "Serialized pointer address: " << raw << std::endl;


    // Deserialize the pointer
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << "Deserialized pointer address: " << deserializedData << std::endl;
    std::cout << "Original and deserialized pointers are equal: " 
              << (&data == deserializedData ? "Yes" : "No") << std::endl;

    return 0;
}