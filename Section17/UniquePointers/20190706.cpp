#include<iostream>
#include<memory>
#include<vector>

using namespace std;

class Test{
private:
	int data;
public:
	Test():data(0){cout<<"Test constructor " << data << endl;}
	Test(int data):data(data){cout << "Test constructor " << data << endl;}
	int get_data() const{return data;}
	~Test(){cout << "Test destructor " << data << endl;}
};

int main(){
	Test t1;
	Test t2;
	Test t3(10);

	Test *t4 = new Test(1000);
	Test *t5 = new Test(2000);
	Test *t6 = new Test(3000);
	// In this case, no destructors are called automatically, so it needs delete.

	//std::unique_ptr<Test> t7{new Test(5000)};
	//	std::unique_ptr<Test> t8 = make_unique<Test>(6000);
	
//	cout << t1 << endl;
//	cout << t2 << endl;
//	cout << t3 << endl;
//	cout << t4 << endl;
//	cout << t5 << endl;
//	cout << t6 << endl;

	return 0;
}

