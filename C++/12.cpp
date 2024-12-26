//if....else if ladder
/*0-1000 = 10% discount, 1001-2000 = 20% discount, 2001-3000 = 30% discount,
3001-4000 = 35% discount, more than 4000 = 40% discount*/
#include<iostream>
using namespace std;

int main()
{
	float amount, discount, total_discount;
	cout << "Enter the amount : ";
	cin >> amount;
	if (amount <= 1000)
		discount = 10;
	else if (amount <= 2000)
		discount = 20;
	else if (amount <= 3000)
		discount = 30;
	else if (amount <= 4000)
		discount = 35;
	else
		discount = 40;
	total_discount = (amount * discount) / 100;
	cout << "You got rupees : " << total_discount << " Discount";

	cout << "Enter to exit...";

	return 0;
}