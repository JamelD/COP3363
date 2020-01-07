/*
Name: Jamel Douglas
Date: 10/29/2018
Section: 7
Assignment: Homework 5  
Due Date: 11/6/18
About this project: Arrays, editing anf getting infromation from arrays
Assumptions: User enters a correct menu selection

All work below has been performed by Jamel Douglas
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Funcion Declarations
void PrintArray (const int array[], const int size);
void FillArray(int[], const int , int , int);
void Insert(int[], const int, const int, const int);
void Delete(int[], const int, int);
void Reverse(int[], const int);
int MaxOdd(int[], const int);
int MaxEven(int[], const int);
int Sum(int[], const int);
void Menu();

int main(){
	char input; //Menu selection
	const int size = 15; //size of array
	int max, min, index, insert, remove; //variables for editing array
	int array[size] = {0,0};
	
	srand(time(0)); //initialize random number generation
	
	do{
		Menu();
		cout << "Enter your menu selection: ";
		cin >> input;
		
		//Input error checking, correct menue entry
		while(input != 'P' && input != 'p' && input != 'F' && input != 'f' && input != 'I' && input != 'i' 
				&& input != 'D' && input != 'd' && input != 'R' && input != 'r' && input != 'X' 
				&& input != 'x' && input != 'M' && input != 'm' && input != 'Q' && input != 'q'
				&& input != 'E' && input != 'e' && input != 'S' && input != 's'){
				//I am aware that a switch stament is clean and easier to do, but i already started this.......
			cout << "That is not a valid menu Selection! \nPlease enter a correct selection: ";
			cin >> input;
		}
		
		if(input == 'P' || input == 'p'){
			PrintArray(array, size);
			
		}else if(input == 'F' || input == 'f'){
			cout << "What is the minimum random value?: ";
			cin >> min;
			cout << "What is the maximum random value?: ";
			cin >> max;
			
			//error checking, max value is larger tha min
			while(max < min){
				cout << endl << "The Minimum value cannot be greater than the Max Value" << endl;
				cout << "Min Value: ";
				cin >> min;
				cout << "Max Value: ";
				cin >> max;
			}
			
			FillArray(array, size, min, max);
			
		}else if(input == 'I' || input == 'i'){
			index = 0;
			
			cout << "Enter value to insert: ";
			cin >> insert;
			cout << "Enter index at which to insert: ";
			cin >> index;
			
			//error checking, index values start at 0 and end at size -1
			while(index > size || index < 0){
				cout << "Remember, Arrays start at 0" << endl << "Index: ";
				cin >> index;
			
			}
			Insert(array, size, insert, index);
			
		}else if(input == 'D' || input == 'd'){
			cout << "Enter index of item to delete: ";
			cin >> remove;
			
			//error checking, index values start at 0 and end at size -1
			while(remove > size || remove < 0){
				cout << "Remember, Arrays start at 0" << endl << "Delete: ";
				cin >> remove;
			
			}
			Delete(array, size, remove);
			
		}else if(input == 'R' || input == 'r'){
			Reverse(array, size);
			
		}else if(input == 'X' || input == 'x'){
			cout << "The Maximum odd value is " << MaxOdd(array, size);
			
		}else if(input == 'E' || input == 'e'){
			cout << "The Maximum even value is " << MaxEven(array, size);
			
		}else if(input == 'S' || input == 's'){
			cout << "The Sum of the array values is " << Sum(array, size);
			
		}else if(input == 'M' || input == 'm'){
			Menu();
			
		}else{
			PrintArray(array, size);
			cout << endl << endl;
			break;
			
		}
		
	}while(input != 'Q' || input != 'q');
	
	return 0;
}

void PrintArray(const int array[], const int size){
   cout << "\nThe array:\n { ";
   for(int i = 0; i < size-1; i++){
      cout << array[i] << ", ";
    }
   cout << array[size-1] << " }\n";
}

void FillArray(int arrayNew[], const int size, int min, int max){
	for (int i = 0; i < size; i++){
		arrayNew[i] = (rand() % max + min);
	}
	
	return;
}

void Insert(int arrayNew[], const int size, const int input, const int index){
	for(int i = index; i < size; i++){
		arrayNew[i] = arrayNew[i + 1];
	}
	arrayNew[index] = input;
	
	return;
}

void Delete(int arrayNew[], const int size, int index){	
	for(int i = index; i < size - 1; i++){
		arrayNew[i] = arrayNew[i + 1];
	}
	arrayNew[size-1] = 0;
	
	
	return;
}

void Reverse(int arrayNew[], const int size){
	int swap = 0, swap1 = 0, middle, index;
	if(size % 2 == 1){
		middle = (size / 2) + 1;
	}else if(size % 2 == 0){
		middle = (size / 2);
	}else{
		
	}
	index = size - 1;
	for(int i = 0; i < middle; i++){
		//stores value in varible
		swap = arrayNew[i]; 
		swap1 = arrayNew[index - i];
		
		//swaps values and inserts into array
		arrayNew[i] = swap1;
		arrayNew[index - i] = swap;
		
	}
	
	return;
}

int MaxOdd(int arrayNew[], const int size){
	int odd = arrayNew[0];
	
	for(int i = 0; i < size; i++){
		if(arrayNew[i] % 2 != 0){
			if(arrayNew[i] > odd){
				odd = arrayNew[i];
				continue;
			}
		}	
	}
	
	return odd;
}
//extra function, finds Max Even Value
int MaxEven(int arrayNew[], const int size){
	int even = arrayNew[0];
	
	for(int i = 0; i < size; i++){
		if(arrayNew[i] % 2 == 0){
			if(arrayNew[i] > even){
				even = arrayNew[i];
				continue;
			}
		}	
	}
	
	return even;
}
//extra function, finds sum
int Sum(int arrayNew[], const int size){
	int sum = 0;
	
	for(int i = 0; i < size; i++){
		sum = sum + arrayNew[i];
	}
	
	return sum;
}

void Menu(){
	cout << endl << endl << "** Given features **" << endl;
	cout << "P : Print the array contents" << endl << endl;
	cout << "** Function Tests **" << endl;
	cout << "F : Fill the array with random values" << endl;
	cout << "I : Insert" << endl;
	cout << "D : Delete" << endl;
	cout << "R : Reverse" << endl;
	cout << "X : Max Odd Value" << endl;
	cout << "E* : Max Even Value" << endl;
	cout << "S* : Sum of array values" << endl << endl << endl;
	cout << "M : Print this Menu" << endl;
	cout << "Q : Quit this program" << endl << endl << endl;
	
	return;
}

