#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main(){

/*
	cout << setw(20) << setfill('&') << "This Is" << endl;

	int num = 255;

	cout << std::showbase << std::uppercase << std::showpos;
	cout << std::dec << num << endl;
	cout << std::hex << num << endl;
	cout << std::oct << num << endl;

	double fnum = 123.987654321;
	// 6 digit is standard

	double fnum2 = 123456789.987654321;
	
	cout << "fnum is " << fnum << endl;
	cout << "fnum2 is " << fnum2 << endl;

	cout << std::setprecision(9);

	cout <<  "fnum is setprecision(9) " << fnum << endl;
	cout <<  "fnum2 is setprecision(9) " << fnum2 << endl;


	cout << std::fixed;

	cout <<  "fnum is fixed(6digit counting in decimal) " << fnum << endl;
	cout <<  "fnum2 is fixed(6digit counting in decimal) " << fnum2 << endl;
*/

//	fstream in_file("./test.txt", std::ios::in);
//	it is introduced in section 19

	ifstream in_file("./test.txt");
	string line = "";
	char c;

	if(!in_file){
		std::cerr << "File open error" << endl;
		return 1;
	}else{
		cout << "First is while, eof(), line" << endl;
		while(!in_file.eof()){
			getline(in_file, line);	// read a line
			cout << line << endl;
		}
		cout << "\n\n\nSecond is character using get()" << endl;

// David thinks that cursor is located at the end of file after iterate the first while loop. So, it doesn't show anything when executing the second while loop using character. So I should close the file and open it again before doing the second thing.
// ===============================================================
		in_file.close();
		ifstream in_file("./test.txt", std::ios::in);
// ===============================================================

		while(in_file.get(c)){
			cout << c;
		}
		cout << endl << endl;
	}
	in_file.close();
	
	cout << "line after complete if-loop is : \n" << line << endl; 
	

	return 0;

}
