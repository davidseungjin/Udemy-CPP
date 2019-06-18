#include <iostream>
#include <string>

using namespace std;

//class demo
//{
//	int x, y, z;
//public:
//	demo()
//	{
//		cout << "this is default constructor. A constructor is a special member function whose task is to initialize objects of its class" << endl;
//		x=111, y=222, z=333;
//	}
//	demo (int a)
//	{
//	x = a;
//	}
//	void getdata (int a, int b, int c)
//	{
//		x=a;
//		y=b;
//		z=c;
//	}
////	demo (demo &d)
////	{
////		x=d.x;
////		y=d.y;
////		z=d.z;
////		cout << "Copy Constructor Run Successfully" << endl;
////	}
//
//	void display();
//	void operator -();
//
//	~demo()
//	{
//		cout << "Destructor is called" << endl;
//	}
//
//};
//
//void demo::display()
//{
//	cout << "X = " << x << "\t Y = " << y << "\tZ = " << z << endl;
//}
//
//void demo::operator -()
//{
//	x= -x;
//	y= -y;
//	z= -z;
//}
//
//int main()
//{
//	demo obj1, obj2, obj3(11111);
//	demo obj4(obj1);
////	cout << "obj5 below" << endl;
////	demo obj5(demo &dummy);
////	cout << "obj5 above, display function for obj5 below" << endl;
////	obj5.display();
////	cout << "obj5 display func above" << endl;
//	obj1.getdata(10,20,30);
//	obj1.display();
//	-obj1;
//	obj1.display();
//	obj2.display();
//	obj3.display();
//	-obj3;
//	obj3.display();
//	cout << "obj4 ? " << endl;
//	obj4.display();
//	return 0;
//}
//
//
int main()
{
	char s[] = "asdf";
	int i;
	for (i=0; s[i] != '\0'; i++)
	{
		cout << s[i] << endl;
	}
	char* buf;
	buf= new char[i+1];
	strcpy(buf, "David");
	
	cout << i << endl;
	cout << (void*)s << endl;	
	cout << s << endl;
	
	cout << (void*)buf << endl;
	cout << buf << endl;
	
	int j;
	for (j=0; j < strlen(buf) ; j++)
	{
		cout << buf[j] << endl;
	}
	
	return 0;
}