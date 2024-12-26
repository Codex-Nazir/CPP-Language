#include<iostream>
using namespace std;

int main()
{
	int a = 10, b = 20, result;
	cout << "a: " << a++ << endl; //preincrement
	cout << "b: " << b-- << endl; //predecrement
	cout << "a: " << a << endl << "b: " << b<<endl;

	result = a++ + b++;
	cout << "Results: " << result << endl;
	return 0;
}