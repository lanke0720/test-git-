#include <iostream>
#include <boost/lexical_cast.hpp>
using namespace std;

template <class T>
class AutoPtr
{
public:
	AutoPtr(T* ptr = NULL)
		:_ptr(ptr)
	{}

	AutoPtr(AutoPtr<T>& ap)
	{
		_ptr = ap._ptr;
		ap._ptr = NULL;
	}

	AutoPtr<T>& operator= (AutoPtr<T>& ap)
	{
		if (this != &ap)
		{
			delete this->_ptr;
			this->_ptr = ap._ptr;
			ap._ptr = NULL;
		}
		return *this;
	}

	~AutoPtr()
	{
		if (this->_ptr)
		{
			delete _ptr;
			_ptr = NULL;
		}
	}

	T* operator->()
	{
		return this->_ptr;
	}
	T& operator*()
	{
		return *(this->_ptr);
	}
private:
	T* _ptr;
};

int main()
{
	AutoPtr<int> p(new int(1));

	return 0;
}

