/// @file is_uniform_random_bit_generator.hpp
/// @brief Checks if the given type is `std::uniform_random_bit_generator`

#ifndef IS_UNIFORM_RANDOM_BIT_GENERATOR_H_
#define IS_UNIFORM_RANDOM_BIT_GENERATOR_H_


#include <random>


namespace is_uniform_random_bit_generator
{


/// @brief Checks if the given type is `std::uniform_random_bit_generator`
/// @tparam G A type that should satisfy the `std::uniform_random_bit_generator` concept
/// @return `true` if `G` is `std::uniform_random_bit_generator`.
/// @note C++20 must be required for this function to work
/// @note https://cpprefjp.github.io/reference/random/uniform_random_bit_generator.html
template<std::uniform_random_bit_generator G>
static constexpr bool IsUniformRandomBitGenerator(void)
{
    return true;
}


/// @brief Checks if the given type is `std::uniform_random_bit_generator`
/// @tparam G A type that should satisfy the `std::uniform_random_bit_generator` concept
/// @return `false` if `G` is NOT `std::uniform_random_bit_generator`.
/// @note C++20 must be required for this function to work
/// @note https://cpprefjp.github.io/reference/random/uniform_random_bit_generator.html
template<typename G>
static constexpr bool IsUniformRandomBitGenerator(void)
{
    return false;
}


} // namespace is_uniform_random_bit_generator


#endif /* IS_UNIFORM_RANDOM_BIT_GENERATOR_H_ */
