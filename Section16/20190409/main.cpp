#include <iostream>
#include <fstream>// for doing file I/O
using namespace std;


class Mystring
{
	char *buf;
	void error(const char *s)
	{
		cerr << "Error: " << s << endl;
		throw 0;
	}

	
};



int main()
{
     // This try/catch will catch any exception thrown by MyString::error()
     // while calling test functions.
     try {
          testReverse();
         // put more test function calls here written just above
     }
     catch (int i) {
         cout << "Got an exception: " << i << endl;
     }
     cerr << "Net memory allocated at program end: " << NumAllocations << endl;
     cerr << "(should be zero! positive = memory leak, negative = duplicate delete)\n";
     return 0;
}
