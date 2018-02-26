# include "stdafx.h"
# include <iostream>
using  namespace std; 
#include<iomanip>


int main()
{
	double x = 1.23456789;

	cout << fixed;

	cout << setprecision(5) << x << endl;

	cout.precision(3);

	cout << x << endl;

	cout << x << endl;

	return 0;
}