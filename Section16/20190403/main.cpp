#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int> p1{
		new int(100)
		};
	cout << *p1 << endl;
	*p1 = 200;
	cout << *p1 << endl;
	return 0;
}
