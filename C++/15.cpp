#include<iostream>
using namespace std;

int main() {
	//Program  to check whether the number is odd or even
	int n1, e;
	cout << "Enter any number: " << endl;
	cin >> n1;

	if ((n1 % 2) == 0)
		cout << n1 << " is Even";
	else
		cout << n1 << " is Odd";
	
	return 0;
}