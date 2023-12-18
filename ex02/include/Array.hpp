#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class  T>
class Array
{
	private:
		T *array;
		unsigned int _size;
	public:
		Array();
		Array(Array const &src);
		~Array();
		Array &operator=(Array const &src);

		Array(unsigned int n);
		
		T &operator[](unsigned int i);
		unsigned int size() const;
		class OutOfRangeException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

# include "./Array.tpp"

#endif