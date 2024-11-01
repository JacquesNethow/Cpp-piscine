#include "Serializer.hpp"

int main(void)
{
    Data        data;
    uintptr_t   serialized;
    Data        *data_ptr_before;
    Data        *data_ptr_after;

    data.score = 42;
    data_ptr_before = &data;
	
    serialized = Serializer::serialize(&data);
    data_ptr_after = Serializer::deserialize(serialized);
    
    std::cout << "Data: " << data_ptr_after->score << std::endl
    	<< "Original address: " << data_ptr_before << std::endl
 		<< "Deserialized address: " << data_ptr_after << std::endl;

    return (0);
}