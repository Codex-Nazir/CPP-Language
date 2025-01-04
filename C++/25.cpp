//Some common used keywords for string 
// 1) substr().....this used to print particular word

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	string str1 = "C++ Programming language";
	string str2;
	str2 = str1.substr(4, 11);
	cout << "Substring : " << str2;

	return 0;
}