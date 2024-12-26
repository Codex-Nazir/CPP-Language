#include<iostream>
using namespace std;

int main()
{
	int l, w, result;
	const float pi = 3.14;
	float rad, result1;
	cout << "enter the radius of circle: " ;
	cin >> rad;
	result1 = 2 * pi * rad;
	cout << "circumference of circle: " << result1 << endl;

	cout << "For finding the perimeter of rectangle now enter the length: ";
	cin >> l;
	cout << "enter the width: ";
	cin >> w;
	result = 2 * (l + w);
	cout << "perimeter of rectangle: " << result;
	return 0;
}