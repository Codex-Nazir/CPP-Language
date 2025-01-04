//Some common keywords used for string 
//2) strcat()   ..... this used for combining two strings

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char str1[100] = "C++ Programming language:";
	char str2[50] = " Beginners to Advance";
	strcat_s(str1, str2);
	cout << str1;
	return 0;
}