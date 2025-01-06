//keywords used in strings
//strcpy().....it used to replace the string using copy items

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char str1[100] = "C++ Programming language";
	char str2[100] = "ABC";
	strcpy_s(str2, str1);
	cout << "String is: " << str2;

	return 0;
}