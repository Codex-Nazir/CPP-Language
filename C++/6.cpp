#include<iostream>
using namespace std;

int main()
{
	int a, b, result;

	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	result = a + b;
	cout << "a + b: " <<result << endl;

	result = a - b;
	cout << "a - b: " <<result<< endl;

	result = a / b;
	cout << "a/b: " <<result<< endl;

	result = a / b;
	cout << "a*b: " <<result<< endl;

	result = a % b;
	cout << "a%b: " <<result<< endl;
    
	return 0;
}