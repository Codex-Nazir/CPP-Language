#include<iostream>             //if statement
using namespace std;

int main()
{
	int a;
	cout << "Enter the number: ";
	cin >> a;
	if (a < 0) {
		a = -a;
	}
	cout << "a : " << a;
	return 0;
}