//if else statement with nore examples

#include<iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age : ";
	cin >> age;
	if (age >= 18) {
		cout << "you are eligible to vote ";
	}
	else {
		cout << "You are not eligible to vote ";
	}
	cout << "Press Enter... to exit";
	return 0;

}