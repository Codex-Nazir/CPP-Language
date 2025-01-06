//different keywords used in strings (to compare two string each other)
//strcmp().....

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char str1[100] = "ABC";
	char str2[50] = "MNO";
	int result;
	result = strcmp(str1, str2);
	cout << "Result: " << result;

	return 0;
}