#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main(){
	ifstream in_file;
	string line;
	int num;
	double total;

	in_file.open("./test2.txt");
	if(!in_file){
		cerr << "Problem opening file" << endl;
		return 1;
	}
	int i = 0;
	while(!in_file.eof()){
		in_file >> line >> num >> total;	
	// instead of two lines above, while(in_file >> line >> num >> total){
	// will work same because the statements means "while (true) { do"
 

		
		cout << setw(10) << left << line
		 << setw(10) << num
		 << setw(10) << total
		 << endl;
		cout << i << endl;
		i += 1;
	}
	in_file.close();
	
	return 0;
}
  
