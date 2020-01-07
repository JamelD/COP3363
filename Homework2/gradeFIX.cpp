/*
Name: Jamel Douglas
Date: 9/13/2018
Section: 7
Assignment: Homework 2 - Grade Calculator
Due Date: 9/21/2018
About this project: Program to help me calculate my overall course grade
Assumptions: User will enter valid scores

All work below has been performed by Jamel Douglas
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Intigers for homework grdes
	int h1, h2, h3, h4, h5, h6, h7;
	
	//input-output for homework grades
	cout << endl << endl << "Welcome to the Grade Calculator!" << endl << endl;
	cout << "HOMEWORK GRADES -->" << endl;
	cout << "Homework 1: ";
	cin >> h1;
	cout << "Homework 2: ";
	cin >> h2;
	cout << "Homework 3: ";
	cin >> h3;
	cout << "Homework 4: ";
	cin >> h4;
	cout << "Homework 5: ";
	cin >> h5;
	cout << "Homework 6: ";
	cin >> h6;
	cout << "Homework 7: ";
	cin >> h7;
	
	//Integers for recitation grades
	int r1, r2, r3, r4, r5;
	
	//input-output for recitation grades
	cout << endl << "RECITATION GRADES -->" << endl;
	cout << "Recitation 1: ";
	cin >> r1;
	cout << "Recitation 2: ";
	cin >> r2;
	cout << "Recitation 3: ";
	cin >> r3;
	cout << "Recitation 4: ";
	cin >> r4;
	cout << "Recitation 5: ";
	cin >> r5;
	
	//Integers for Test Grades
	int mid1, mid2, t_final;
	
	//input-output for Test Grades
	cout << endl << "TEST GRADES -->" << endl;
	cout << "Midterm I: ";
	cin >> mid1;
	cout << "Midterm II: ";
	cin >> mid2;
	cout << "Final: ";
	cin >> t_final;
	cout << endl;
	//Extra Credit variable
	int ex;
	char yes_no;
	double hAvg = 0, tAvg = 0, cAvg = 0;
	double hhh = 0, rrr = 0, ttt = 0, sss = 0; 
	//hhh and sss calculate total homework; rrr and ttt calculate total recitation
	
	
	//input-output for extra credit
	cout << "Is there any extra credit to add in? (Y or N) --> ";
	cin  >> yes_no;
	if(yes_no == 'Y' || yes_no == 'y'){
		//Asks user for extra credit
		cout << "How many extra credit points should be added? --> ";
		cin >> ex;
		
		//calculations
		hhh = (h1 + h2 + h3 + h4 + h5 + h6 + h7);
		rrr = (r1 + r2 + r3 + r4 + r5 + ex);
		hAvg = (((hhh + rrr) / 820) * 100);
		tAvg = (((mid1 * 17.5) + (mid2 * 17.5) + (t_final * 25)) / 60);
		cAvg = ((mid1 * .175) + (mid2 * .175) + (t_final * .25) + (hAvg * .40));
		
		//input-output
		cout << fixed << showpoint << setprecision(2) << endl << endl;
		cout << "Homework Average: " << hAvg << "%" << endl;
		cout << "Test Average: " << tAvg << "%" << endl;
		cout << "Course Average: " << cAvg << "%" << endl;
		if(cAvg >= 90){
			cout << "Course Grade: A" << endl << endl;
		}
		else if(cAvg >= 80 && cAvg <= 89){
			cout << "Course Grade: B" << endl << endl;
		}
		else if(cAvg >= 70 && cAvg <= 79){
			cout << "Course Grade: C" << endl << endl;
		}
		else if(cAvg >= 60 && cAvg <= 69){
			cout << "Course Grade: D" << endl << endl;
		}
		else{
			cout << "Course Grade: F" << endl << endl;
		}
	}
	else if(yes_no == 'N' || yes_no == 'n'){
		//calculations
		sss = (h1 + h2 + h3 + h4 + h5 + h6 + h7);
		ttt = (r1 + r2 + r3 + r4 + r5);
		hAvg = (((sss + ttt) / 820) * 100);
		tAvg = (((mid1 * 17.5) + (mid2 * 17.5) + (t_final * 25)) / 60);
		cAvg = ((mid1 * .175) + (mid2 * .175) + (t_final * .25) + (hAvg * .40));
		
		//input-output
		cout << fixed << showpoint << setprecision(2) << endl << endl;
		cout << "Homework Average: " << hAvg << "%" << endl;
		cout << "Test Average: " << tAvg << "%" << endl;
		cout << "Course Average: " << cAvg << "%" << endl;
		if(cAvg >= 90){
			cout << "Course Grade: A" << endl << endl;
		}
		else if(cAvg >= 80 && cAvg <= 89){
			cout << "Course Grade: B" << endl << endl;
		}
		else if(cAvg >= 70 && cAvg <= 79){
			cout << "Course Grade: C" << endl << endl;
		}
		else if(cAvg >= 60 && cAvg <= 69){
			cout << "Course Grade: D" << endl << endl;
		}
		else{
			cout << "Course Grade: F" << endl << endl;
		}
	}
	else{
		cout << endl << "Invalid option, exiting program" << endl << endl;
	}
	

	
	
	
	return 0;
}
