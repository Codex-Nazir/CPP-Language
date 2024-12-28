//while loop (Entry Controlled loop)

#include<iostream>
using namespace std;

int main() {
	int n, fact=1,i=1;
	cout << "Enter the number : ";
	cin >> n;
	while (i <= n) {
		fact = fact * i;
		i++;
	}
	cout << "Factorial of " << n << " is " << fact;

	return 0;
}