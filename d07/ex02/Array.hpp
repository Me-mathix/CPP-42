#pragma once
# include <iostream>
template <typename T>
class Array
{
	private:
		T	*theArray;
		size_t len;
	public:
		Array<T>()
		{
			theArray = NULL;
			len = 0;
		};
		Array<T>(size_t arrayLen)
		{
			theArray = new T[arrayLen];
			len = arrayLen;
		};
		Array(const Array& ref)
		{
			theArray = NULL;
			len = 0;
			*this = ref;
		};
		~Array()
		{
			delete [] theArray;
		};

		Array&	operator=(const Array& ref)
		{
			delete [] theArray;
			theArray = new T[ref.size()];
			for (size_t i = 0; i < ref.size(); i++)
			{
				theArray[i] = ref[i];
			}
			return *this;
		};

		const T&	operator[](size_t index) const {
			if (index >= this->len)
				throw std::out_of_range("Array acces out of range.");
			return this->theArray[index];
		};

		T&	operator[](size_t index) {
			if (index >= this->len)
				throw std::out_of_range("Array acces out of range.");
			return this->theArray[index];
		};

		size_t size() const
		{
			return len;
		};
};
