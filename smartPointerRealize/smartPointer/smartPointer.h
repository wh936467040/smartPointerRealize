#include "iostream"
#include "string"
using namespace std;

template<class T>
class smartPointer
{
public:
	T * p;
	smartPointer(T * t){ p = t;};
	~smartPointer()
	{
		if( p != NULL) delete(p);
	};

	
	T * operator ->(){
		if(p != NULL )
			return p;
	};

	// operator . * ,+, - , ++ , -- and so on;
};


class test
{
public:
	int a;
	test(int t) { a = t;};
	~test() {cout << "a:" << a << " and free" << endl;};
};