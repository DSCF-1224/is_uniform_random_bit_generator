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


    if ( !AsBoolean<std::mt19937>() )
    {
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
