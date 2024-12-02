#include <random>
#include <cstdlib>
#include "../is_uniform_random_bit_generator.hpp"


/// @brief This class is required to not function as a `std::uniform_random_bit_generator`.
class non_uniform_random_bit_generator
{
    /* NOTHING IS DEFINED HERE */
};


int main(void)
{
    using namespace is_uniform_random_bit_generator;


    if ( !IsUniformRandomBitGenerator<std::mt19937>() )
    {
        return EXIT_FAILURE;
    }


    if ( IsUniformRandomBitGenerator<non_uniform_random_bit_generator>() )
    {
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
