//hw5-12.cpp - displays the total owed
//Created/revised by Rhett Acosta 2/18/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double item1 = 0.0;
	double item2 = 0.0;
	double total_amt = 0.0;

	//declare input
	cout << "Enter price of item 1: ";
	cin >> item1;
	cout << "Enter price of item 2: ";
	cin >> item2;

	//declare condition
	if (item1 < item2)
		total_amt = item2 + (item1 / 2);

	if (item2 < item1)
		total_amt = item1 + (item2 / 2);

	if (item1 == item2)
		total_amt = item1 + (item2 / 2);

	//display final amount
	cout << fixed << setprecision(2);
	cout << "Total amount owed: $" << total_amt << endl;
	

	return 0;
}	//end of main function