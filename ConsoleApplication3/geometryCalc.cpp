// Geometric calculations by Mark Lasker
// Jan 18 2018

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<iomanip>
#include <locale>
using namespace std;


int main()
{
	double cmInput, sqArea, circArea;						// Declare variables to store input and calculations; did not declare volumes as further rounding
	const double PI = 3.14159;


	cout << "~Geometry formulas by Mark Lasker~\n";
	cout << "Enter length in centimeters\n";

	

		cin >> cmInput;

		sqArea = pow((cmInput / 100), 2);					// Divide cmInput by 100 to convert to meters
		circArea = (pow((cmInput / 200), 2)) * PI;			// Dividing cmInput by 200 converts it to M (100m/1m) and halves it to convert to radius for circle equation

		cout << setprecision(2) << fixed;                  // Line 28 and 29 format output to remove scientific notation and fix decimals to two places
		cout.imbue(locale(""));							   // imbue locale function adds commas to numeric output for readability

		cout << "You have entered " << cmInput << " or " << cmInput / 100 << " m.\n";									//Lines 31-38 echo input and display functions that calculate geometric
		cout << "The area of a square with a length of " << cmInput << " is " << sqArea << " sq m.\n";					// areas and volumes
		cout << "The area of a circle with a diameter of " << cmInput << " is " << circArea << " sq m.\n";
		cout << "The difference between the area of the square and circle is: " << sqArea - circArea << " sq m.\n\n";

		cout << "Cube volume rounded down is " << pow((floor(cmInput) / 100), 3) << " cubic m.\n";
		cout << "Cube volume rounded up is " << pow((ceil(cmInput) / 100), 3) << " cubic m.\n";

    return 0;
}

