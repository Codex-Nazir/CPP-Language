#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter two number: " << endl;
	cin >> a >> b;
	if (a > b)
		cout << a << " is greater: ";
	else if (b > a)
		cout << b << " is greater: ";
	else
		cout << a << " is equal to: " << b; 

	return 0;
}