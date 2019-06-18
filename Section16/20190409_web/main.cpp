#include <iostream>
#include <cstdio>
#include <cstring>



class Mystring
{
	char* buf;
	
	void error(const char* s)
	{
		std::cerr<< "Error:  " << s << std::endl;
		throw 0;
	}

public:
// constructs this object from a c-string s (s is an array of char terminated by ‘\0’)
// parameter, s, defaults to the empty string “”
// write and use strdup() to implment this constructor, 
// it allocates a new array, then uses strcpy() to copy chars from array s to the new array

	explicit Mystring (const char* s="")
	{
		char *destination = strdup(s);
		strcpy(destination, s);
		std::cout << "s is:   " << s << std::endl;
		std::cout << "*s is:   " << (void*)s << std::endl;
		std::cout << "destination is:   " << destination << std::endl;
		std::cout << "*destination is:   " << (void *)destination << std::endl;
	}

// copy constructor for a MyString, must make a deep copy of
// s for this.  You can use strdup() you wrote
	Mystring (const Mystring& original)
	{
		char *destination2 = strdup(original.s);
	}

// assigns this MyString from MyString s, MUST DO DEEP ASSIGNMENT
// remember, both this and s have been previously constructed
// so they each have storage pointed to by buf
	Mystring & operator = ( const Mystring & s )
	{
// TBD	
	}

// return a reference to the char at position index, 0 is the first element and so on
// index must be in bounds (see method above)
	char & operator [] ( const int index )
	{
    // TBD
	}

	int length() const
	{
     // TBD
	}

// returns the index of the first occurance of c in this MyString
// indices range from 0 to length()-1
// returns -1 if the character c is not in this MyString
	int indexOf( char c ) const
	{
// TBD
	}

// returns the index of the first occurance of pat in this MyString
// indices range from 0 to length()-1
// returns -1 if the character string pat is not in this MyString
// write and use strstr() to implement this function
	int indexOf( const string & pat ) const
	{
// TBD
	}

// True if the two MyStrings contain the same chars in same position
// e.g, "abc"=="abc" returns true
// write and use strcmp() to implement this function
	bool operator == ( const MyString & s ) const
	{
     // TBD
	}

// concatenates this and s to make a new MyString
// e.g., "abc"+"def" returns "abcdef"
// write and use str2dup() to implement this function, it should allocate a new array then call strcpy() and strcat()
	MyString operator + ( const MyString & s ) const
	{
     // TBD
	}

// concatenates s onto end of this
// e.g., s = "abc"; s+="def" now s is "abcdef"
// use str2dup()
	MyString & operator += ( const MyString & s )
	{
// TBD
	}

// returns another MyString that is the reverse of this MyString
// e.g., s = "abc"; s.reverse() returns "cba"
// write strrev(char *dest, char *src) like strcpy but copies the reverse of src into dest, then use it
	MyString reverse() const
	{
// TBD
	}

// prints out this MyString to the ostream out
	void print( ostream & out ) const
	{
// TBD
	}

// reads a word from the istream in and this MyString
// becomes the same as the characters in that word
// use getline() to implement read()
	void read( istream & in )
	{
// TBD
	}

// destruct a MyString, must free up any storage allocated within MyString
	~MyString()
	{
    // TBD
	}
};



// blank for distinguishment clearly
// blank for distinguishment clearly
// blank for distinguishment clearly
// blank for distinguishment clearly
// these two I/O methods are complete as long as you define print and read methods correctly
inline ostream & operator << ( ostream & out, const MyString & str )
{
	str.print(out);
	return out;
}

inline istream & operator >> ( istream & in, MyString & str )
{
     str.read(in);
     return in;
}

// TBD: Write all these testing functions and add more of your own
// follow my example and write a function to test each method.
// Name each of these functions so they clearly indicate what they are testing

MyString copyConstructorTest(MyString l)
{
     return l;
}

void testReverse()
{
     ifstream in("input.txt");
     MyString l;

     while ( in >> l )
     {
             cout << copyConstructorTest(l)
                     << " " << l.length() << " "
                     << l.reverse() << endl;
     }
}


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



//	char s[]="";
//	std::cout << *s << std::endl;
//	std::cout << s << std::endl;
//	std::cout << &s << std::endl;
//	
//	char source[] = "test string copy with strcpy()";// TBD
//	strcpy(*s, source);
//	std::cout << *source << std::endl;
//	std::cout << *source << std::endl;
//	std::cout << *source << std::endl;
//	std::cout << *source << std::endl;
//	std::cout << *source << std::endl;
//	std::cout << source << std::endl;
//	std::cout << source << std::endl;
//	std::cout << source << std::endl;
//	std::cout << &source << std::endl;
//
//	std::cout << *s << std::endl;
//	std::cout << s << std::endl;
//	std::cout << &s << std::endl;

//	char p[] = "hello";
//    std::cout<<*p<<'\n';             // h
//	std::cout<<p[2]<<'\n';             // h	
//    std::cout<<(void*)p<<'\n';       //
//	std::cout<<p<<'\n' << '\n' << '\n';              // hello
//
//    char c = 'a';
//    char *pa = &c;
//    std::cout<<*pa<<'\n';            // a
//	std::cout<<(void*)pa<<'\n';      // 
//	std::cout<<&pa<<'\n';             //
//	std::cout<<pa<<'\n';             //
//
//    int i = 2;
//    int *pi = &i;               
//    std::cout<<*pi<<'\n';            // 2
//	std::cout<<(void*)pi<<'\n';             // 
//    std::cout<<pi<<'\n';             // 0x22fefc
//


//#include <iostream>
//#include <cstring>
//#include <exception>
//#include <new>
//#define ALLOC(N) (char*) new char[sizeof(char)*(N)]
//#define DELETE(P) delete[] ((char*)(P))
//
//class String {
//public:
//    // conversions: to C-like type char 
//    operator const char*() const { return _str; }
//
//    explicit String(const char* s = (char*)0) {
//        if (s) {
//            try {
//                if (!(_str = new char[strlen(s) + 1])) {
//                    std::bad_alloc ba;
//                    throw ba;
//                }
//                strcpy(_str, s);
//            } catch (std::exception e) {
//                std::cout << e.what() << std::endl;
//            }
//        } else {
//            _str = new char[1];
//            *_str = 0;
//        }
//    }
//
//    /*String (const String& obj) : _str(NULL) {
//        if (obj._str) {
//            this->_str = new char[strlen(obj._str) + 1];
//            strcpy(_str, obj._str);
//        } 
//    }*/
//
//
//    String (const String& obj) : _str(new char[obj.len() + 1]) {
//        strcpy(_str, obj._str);
//    }
//
//    virtual ~String() {
//        delete [] ((char*) _str);
//        _str = NULL;
//    }
//
//    bool operator != (const String& obj) {
//        if (this != &obj) return true;
//        else return false;
//    }
//
//    String& operator = (const String& rhs) {
//        if (this != &rhs) /* self assignment check */ {
//            this->~String(); // delete[] _str; 
//            if (strlen(rhs._str)) {
//                _str = new char[strlen(rhs._str) + 1];
//                strcpy(_str, rhs._str);
//            }
//        }
//        return *this;
//    }
//
//    String& operator = (const char* rhs) {
//        this->~String();
//        if (strlen(rhs)) {
//            _str = new char[strlen(rhs) + 1];
//            strcpy(_str, rhs);
//        }
//        return *this;
//    }
//
//   String& operator += (const String& str) {
//      // char *temp = new char[strlen(this->str) + strlen(obj.str) ? strlen(obj.str) : 0 + 1];
//     /*  if (str) {
//          char *temp = new char[strlen(str)];
//          strcpy(temp, str);
//      delete [] ((char *) str);
//          str = new char[strlen(this->str) + strlen(obj.str) ? strlen(obj.str) : 0 + 1];
//      strcpy(str, temp);
//      if (strlen(obj.str)) strcat(str, obj.str);
//       } else {
//          str = new char[strlen(obj.str) ? strlen(obj.str) : 0 + 1];
//      if (strlen(obj.str)) strcpy(str, obj.str);
//       }*/
//       return *this;
//   }
//
//
//    String& operator + (const String& obj) {
//        return operator += (obj);
//    }
//
//    int strlen(const char *s) {
//        if (!s) return 0;
//        const char *tmp = s;
//        while (*s) s++;
//        return s - tmp;
//    }
//
//    void strcpy(char *dest, const char *src) {
//        while ((*dest++ = *src++));
//    }
//
//    size_t len() const {
//        return strlen(this->_str);
//    }
//
//    char* retString() const { return _str; }
//
//private:
//    char* _str;
//};
//
//
//int main() {
//    String obj1("World");
//    //   String obj2("Ibrahim");
//    String obj2(obj1);
//    //   obj1 +=" ";
//    //obj1 += obj2;
//    std::cout << obj1.retString() << std::endl;
//    std::cout << obj2.retString() << std::endl;