#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void printValue(const T& value)
{
	std::cout << value << " ";
}

template <typename T, typename F>
void iter(T *array, const std::size_t size, F fct)
{
	for (std::size_t i = 0; i < size; ++i)
		fct(array[i]);
}

#endif