/*
Name: Jamel Douglas
Date: 9/6/2018
Section: 7
Assignment: Assignment #1 - Ticket System
Due Date: 9/12/18 11:59:59pm
About this project: FSU football department need a program to calculate and disply
					the cost of tickets for football games.
Assumptions: Ticket Price, 7% sales tax, Ti

All work below has been performed by Jamel Douglas
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{	
	//Rounds to 2 decimal points
	cout << fixed << showpoint << setprecision(2); 
	
	//Ticket Prices
	const double adult = 28.50;
	const double child = 12.50; 
	const double senior = 16.50; 
	const double tax = 0.07;
	
	//Variavles to store input data
	int numAdult, numChild, numSenior;
	
	//Caculation variables (declaration)
	double subTotal = 0; 	//cost of tickets w/o tax
	double taxTotal = 0; 	//total tax
	double totalFinal = 0; 	//Total Cost
	
	//Output and Input code
	cout << endl << "***FSU Football Ticket Calculator***";
	cout << endl << "Please enter the number of: \n \t Adults \n \t Children(up to age 9) \n \t Seniors(55+)";
	cout << endl << "Adults -->  ";
	cin >> numAdult;
	cout << "Children -->  ";
	cin >> numChild;
	cout << "Seniors -->  ";
	cin >> numSenior;
	
	//Caculation variables (initialized)
	subTotal = ((adult * numAdult) + (child * numChild) + (senior * numSenior));
	taxTotal = (subTotal * tax);
	totalFinal = (subTotal + taxTotal);
	
	//Output and Input code
	cout << endl << "-------------------------------";
	cout << endl << "TOTAL (before tax) = $" << subTotal;
	cout << endl << "Tax = $" << taxTotal;
	cout << endl << "TOTAL COST (after tax) = $" << totalFinal << endl << endl;
	cout << "Thanks for using the ticket system!" << endl << endl;
	
	
	return 0;
}
