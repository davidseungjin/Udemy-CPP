// Section 17
// Unique Pointers 
#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

using namespace std;

int main() {
//   Test *t1 = new Test {1000};
//   delete t1;
//   std::unique_ptr<Test> t1 {new Test{100}};
//   std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
//   
//   std::unique_ptr<Test> t3;
//   t3 = std::move(t1);
//   if (!t1) 
//       std::cout << "t1 is nullptr" << std::endl;
       
       std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
	   std::unique_ptr<Account> a2 = std::make_unique<Checking_Account>("Larry", 3000);
       std::cout << *a1 << std::endl;
       std::cout << *a2 << std::endl;
	   a1->deposit(5000);
	   std::cout << "How much money does Larry deposited?" << endl;
	   int num2;
	   std::cin >> num2;
	   a2->deposit(num2);
       std::cout << *a1 << std::endl;
		std::cout << *a2 << std::endl;
//
//       std::vector<std::unique_ptr<Account>> accounts;
//
//       accounts.push_back( make_unique<Checking_Account>("James", 1000));
//       accounts.push_back( make_unique<Savings_Account>("Billy", 4000, 5.2));
//       accounts.push_back( make_unique<Trust_Account>("Bobby", 5000, 4.5));
//
//        for (const auto &acc: accounts)
//            std::cout << *acc << std::endl;
       return 0;
}

