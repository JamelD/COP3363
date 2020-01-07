/*
Name: Jamel Douglas
Date: 11/7/2018
Section: 7
Assignment: Homework 6 - String Manipulator 
Due Date: 11/20/2018
About this project: Takes in a string and does various things with it
Assumptions: user will enter in only numbers for menu choice

All work below has been performed by Jamel Douglas
*/

#include <iostream>		//Input-Output Stream
#include <cctype>
//#include <iomanip> 	//Input-Output Manipulation
#include <ctime>		//C Time library
//#include <cmath>		//C Math Library
#include <cstring> 		//C String Library
#include <string>		//C++ string object library
#include <cstdlib>		//C Std Library
using namespace std;

void menu();
void PrintString(char* str);
void Upper(char* str);
void Lower(char* str);
void Stats(char* str);

int main(){
	int select, size, character,; //vars for selection and for Clear/resize array
	char str[100]; //C-String
	int strLength = strlen(str); //C-String Length
	char remove, replace;
	

	srand(time(0)); //initialize random number generation
	
	cout << "To get started, enter anything you'd like, then hit enter:" << endl;
	cin.getline(str, 100); //string, gets input till newline character
	cout << endl;
	menu();
	do{
		cout << "Selection -----> ";
		cin >> select;
		
		//FAILED ERROR CHECKING
		/*select = cin.peek();
		if(select >= 0 && select <= 8){
			cout << "Selection -----> ";
			cin >> select;
		}else{
			cout << "That is not a valid menu selection" << endl;
			cin >> select;
			/*while(isdigit(select) == 0){
				cout << "Selection -----> ";
				cin >> select;
			}
		}
		
		while(isdigit(select) == 0){
			while(select >= 0 && select <= 8){
				cout << "Selection -----> ";
				cin >> select;
			}
		}*/
		
		switch(select){
			case 1: //print string
				PrintString(str);
				break;
			case 2: //Make all letters in array uppercase
				Upper(str);
				break;
			case 3: //Make all letters in array lowercase
				Lower(str);
				break;
			case 4: //Replace characters
				cout << "Replace all of these characters: ";
				cin >> remove;
				cout << "To these characters: ";
				cin >> replace;
				for(int i = 0; i <= strlen(str); i++){
					if(str[i] == remove){
						str[i] = replace;
					}
				}
				break;
			case 5: //String Stats
				Stats(str);
				break;
			case 6: //NewString
				for(int i = 0; i < 100; i++){
					str[i] = '\0';
				}
				cout << "Enter a new string: ";
				cin.ignore(); //clear input stream
				cin.getline(str, 100); //ends at newline character
				break;
			case 7: //Randomize. Random characters and length
				//str.clear();
				size = ((rand() % 50) + 1);
				
				for(int j = 0; j < 100; j++){ // replaces all characters in array with NULL
					str[j] = '\0';
				}
				for(int i = 0; i < size; i++){
					character = (rand() % 122) + 32;
					if(character == 92){
						character = (rand() % 122) + 32;
						str[i] = static_cast<char>(character); //casts number to character
					}else{
						str[i] = static_cast<char>(character);						
					}
				}
				cout << "The string is now: ";
				for(int j = 0; j <= strlen(str); j++){
					cout << str[j];
				}
				cout << endl;
				//sometimes this glitches and places string on muliple lines
				break;
			case 8: //print menu
				cout << endl;
				menu();
				break;
			case 0: //quit
				cout << "Bye!" << endl << endl;
				break;
			default:
				cout << "That is not a valid menu choice!\n";
				break;
		}
	}while(select != 0);
	
	
	return 0;
}

void menu(){ // menu :P
	cout << "String Manipulator Options Menu" << endl;
	cout << "-------------------------------" << endl;
	cout << "1 - Print the current string" << endl;
	cout << "2 - Make the string all Uppercase" << endl;
	cout << "3 - Make the string all Lowercase" << endl;
	cout << "4 - Replace a character" << endl;
	cout << "5 - Show string statistics" << endl;
	cout << "6 - Enter a new string" << endl;
	cout << "7 - Jazz things up... (You'll lose your current string!)" << endl;
	cout << "8 - Show this menu" << endl;
	cout << "0 - Quit" << endl;
	return;
}
void PrintString(char* str){ //prints out string
	cout << "Current String: ";
	for(int i = 0; i <= strlen(str); i++){
		cout << str[i];
	}
	cout << endl << endl;
	return;
}
void Upper(char* str){ //replaces all lowercase to uppercase 
	for(int i = 0; i <= strlen(str); i++){
		str[i] = toupper(str[i]);
	}
}
void Lower(char* str){ //replaces all uppercase to lowercase
	for(int i = 0; i <= strlen(str); i++){
		str[i] = tolower(str[i]);
	}
}
void Stats(char* str){ //Calculates and Prints stats of string
	int letters = 0, punctuation = 0, digits = 0, whitespace = 0;
	for(int i = 0; i <= strlen(str); i++){
		if(isalpha(str[i]) != 0){
			letters++;
		}
		if(ispunct(str[i]) != 0){
			punctuation++;
		}
		if(isdigit(str[i]) != 0){
			digits++;
		}
		if(isspace(str[i]) != 0){
			whitespace++;
		}
	}
	cout << "Letters: " << letters << endl;
	cout << "Punctuation: " << punctuation << endl;
	cout << "Digits: " << digits << endl;
	cout << "Whitespace: " << whitespace << endl;
	cout << "Total: " << whitespace + digits + punctuation + letters << endl << endl;
}