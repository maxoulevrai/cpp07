#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template<typename T>
class Array {
	private:
		T			*_data;
		std::size_t	_size;
	public:
		Array();
		Array(unsigned int n);
		Array &operator=(const Array &other);
		Array(const Array &other);
		~Array();

		std::size_t	size(void);
};

#endif