#include<iostream>
using namespace std;

int main()
{
	const float pi = 3.14;
	float rad, area;
	cout << "This is a program of finding the area of circlr : ?"<<endl;
	cout << "Enter the radius:" ;
	cin >> rad;
	area = pi * rad * rad;
	cout << "area of cicle : " << area;
	return 0;
}