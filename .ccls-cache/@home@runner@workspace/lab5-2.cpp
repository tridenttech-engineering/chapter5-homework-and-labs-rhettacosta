//lab5-2.cpp - displays the total amount due
//Created/revised by Rhett Acosta 2/18/25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double amtOwed = 0.0;
	const double discount_rate = 0.1;
	const double ship_chg1 = 0.99;
	const double ship_chg2 = 4.99;
	char member = ' ';

	//declare input
	cout << "Ammount owed before discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier Club Member (Y/N): ";
	cin >> member;

	//declare condition
	if (toupper(member) == 'Y')
		amtOwed-=(amtOwed * discount_rate);
	//end if
	if (amtOwed >= 100.0)
		amtOwed += ship_chg1;
		else
			amtOwed += ship_chg2;
	//end if

	//display final amount
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: $" << amtOwed << endl;
	

	return 0;
}	//end of main function