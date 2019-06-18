#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "input ?" << endl;
	getline(cin, s);
	cout << "your input is ... " << s << endl;
	cout << "Memory location used for the string is " << &s << endl;

	return 0;
}
