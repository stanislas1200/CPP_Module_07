
template <class T>
Array<T>::Array() : array(NULL), _size(0) {}

template <class T>
Array<T>::Array(Array const &src) : array(NULL), _size(0) {
	*this = src;
}

template <class T>
Array<T>::~Array() {
	if (this->array)
		delete [] this->array;
}

template <class T>
Array<T> &Array<T>::operator=(Array const &src) {
	if (this != &src) {
		if (this->array)
			delete [] this->array;
		this->array = new T[src._size];
		this->_size = src._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = src.array[i];
	}
	return *this;
}

template <class T>
Array<T>::Array(unsigned int n) : array(new T[n]), _size(n) {}

template <class T>
T &Array<T>::operator[](unsigned int i) {
	if (i >= this->_size)
		throw Array<T>::OutOfRangeException();
	return this->array[i];
}

template <class T>
unsigned int Array<T>::size() const {
	return this->_size;
}

template <class T>
const char *Array<T>::OutOfRangeException::what() const throw() {
	return "Out of range";
}