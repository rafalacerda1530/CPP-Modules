#include "serialize.hpp"

uintptr_t serialize(Data *ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return(reinterpret_cast<Data *>(raw));
}

int main(void){
	uintptr_t raw;
	Data data;
	Data* dataPtr;

	data.num = 42;
	std::cout << "Data Address " << &data << std::endl;

	raw = serialize(&data);
	std::cout << "Serialize Data: " << raw << std::endl;

	dataPtr = deserialize(raw);
	std::cout << "Deserialization data: " << dataPtr << std::endl;
	return ( 0 );
}