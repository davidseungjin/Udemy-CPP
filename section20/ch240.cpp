include<iostream>

template<class T>
T max(T a, T b){
	return (a > b) ? a : b;
}


int main(){

	int a = 10;
	int b = 20;

	std::cout << max<int>(a, b) << std::endl;

	string x = "abc";
	string y = "acb";

	std::cout << max<string>(a,

	return 0;
}
