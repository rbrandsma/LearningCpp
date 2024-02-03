#include <iostream>

using namespace std;

int main()
{
	double sales = 95000;
	const double stateTaxPercent = 0.04;
	const double countyTaxPercent = 0.02;

	double stateTax = sales * stateTaxPercent;
	double countyTax = sales * countyTaxPercent;
	double netSales = sales - (stateTax + countyTax);


	cout << "Total Sales: " << sales << endl
		<< "Total State Tax: " << stateTax << endl
		<< "Total County Tax: " << countyTax << endl
		<< "Total Net Sales: " << netSales << endl;

	cout << "Enter a Temp in F: ";
	double userVal;
	cin >> userVal;
	double tempInCelcius = ((userVal - 32) * 5) / 9;
	cout << "Temp in C: " << tempInCelcius;



	return 0;
}