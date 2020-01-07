/*
Name: Jamel Douglas
Date: 9/27/2018
Section: 7
Assignment: Homework 3
Due Date: October 1st 
About this project: Program that displays menu 
					and takes customers order
Assumptions:

All work below has been performed by Jamel Douglas
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Funcion Declarations
double OrderTotal(int numPatty, int numFries, int numShake, int numPizza);
void menu();

//Functions
int main(){
	const int krabbyPatty =	1, barnnicleFries = 2; //selection constants
	const int kelpShake = 3, krustyPizza = 4, exit = 0;//selection constants
	
	int pattyTotal = 0, friesTotal = 0, shakeTotal = 0, pizzaTotal = 0; //total counters
	
	int input, input2; //input variables
	
	cout << endl << endl << "Welcome to the Krusty Krab!" << endl << endl;
	cout << fixed << showpoint << setprecision(2); //keeps numbers to 2 decimals
	do{
		menu(); // displays menu
		cout << "What would you like? (Enter 0 to finish order!): ";
		cin >> input;

		if(input == krabbyPatty){
			input2 = 0;
			cout << "How many: ";
			cin >> input2;
			cout << endl;
			while(input2 < 0){ //loops if user enters negative amount
				cout << "You can't order a negative amount of food!" << endl;
				cout << "Try again: ";
				cin >> input2;
				cout << endl;
			}
			pattyTotal = pattyTotal + input2;
			
		}else if(input == barnnicleFries){
			input2 = 0;
			cout << "How many: ";
			cin >> input2;
			cout << endl;
			while(input2 < 0){
				cout << "You can't order a negative amount of food!" << endl;
				cout << "Try again: ";
				cin >> input2;
				cout << endl;
			}			
			friesTotal = friesTotal + input2;
			
		}else if(input == kelpShake){
			input2 = 0;
			cout << "How many: ";
			cin >> input2;
			cout << endl;
			while(input2 < 0){
				cout << "You can't order a negative amount of food!" << endl;
				cout << "Try again: ";
				cin >> input2;
				cout << endl;
			}			
			shakeTotal = shakeTotal + input2;
			
		}else if(input == krustyPizza){
			input2 = 0;
			cout << "How many: ";
			cin >> input2;
			cout << endl;	
			while(input2 < 0){
				cout << "You can't order a negative amount of food!" << endl;
				cout << "Try again: ";
				cin >> input2;
				cout << endl;
			}			
			pizzaTotal = pizzaTotal + input2;
			
		}else if(input == exit){
			break;
		
		}else{
			cout << endl << "Thats not on the menu! Try again." << endl << endl;
			continue;
		}
	
	}while(input =! exit);
	
	if(pattyTotal > 0 || friesTotal > 0 || shakeTotal > 0 || pizzaTotal > 0){ //only displays if user orders food
		cout << endl << "Your order:" << endl;
		if(pattyTotal > 0) //only display item if user has ordered it
			cout << pattyTotal << " Krabby Patties" << endl;		
		if(friesTotal > 0)
			cout << friesTotal << " Barnicle Fries" << endl;
		if(shakeTotal > 0)
			cout << shakeTotal << " Kelp Shakes" << endl;
		if(pizzaTotal > 0)
			cout << pizzaTotal << " Krusty Krab Pizzas" << endl;
		cout << endl << "Your total is $"; 
		cout << OrderTotal(pattyTotal, friesTotal, shakeTotal, pizzaTotal); //calculates total
		cout << endl << "Enjoy the food!" << endl << endl;
	}else{
		cout << "Guess you aren't hungry." << endl << endl;
	}
	
	
	return 0;
}

double OrderTotal(int numPatty, int numFries, int numShake, int numPizza){
	
	const double patty = 3.50, fries = 1.50, shake = 1.00, pizza = 5.00;
	double total;
	total = (patty * numPatty) + (fries * numFries) + (shake * numShake) + (pizza * numPizza);
	
	return total;
}

void menu(){
	
	cout << "----------- Menu -----------" << endl;
	cout << "1. Krabby Patty ...... $3.50" << endl;
	cout << "2. Barnicle Fries .... $1.50" << endl;
	cout << "3. Kelp Shake ........ $1.00" << endl;
	cout << "4. Krusty Krab Pizza . $5.00" << endl;
	cout << endl ;
}
