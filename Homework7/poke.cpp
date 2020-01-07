/*
Name: Jamel Douglas
Date: 9/6/2018
Section: 7
Assignment:  
Due Date: 
About this project: 
Assumptions:

All work below has been performed by Jamel Douglas
*/

#include <iostream>		//Input-Output Stream
#include <iomanip> 	//Input-Output Manipulation
#include <ctime>		//C Time library
//#include <cmath>		//C Math Library
#include <cstring> 	//C String Library
#include <cstdlib>	//C Std Library
#include <string>		//String Object Library
#include <fstream> 		//file Stream objects Library
using namespace std;

void Menu(); //menu function
void Hunt(int&, int&, int&, int, struct Pokemon*); //function for game
void Stats(struct Pokemon*, int size); //displays stats
void PrintInv(const int, const int, const int);//displays inventory
//void PrintByType(struct Pokemon*, int size);

struct Pokemon{ //struct to use to store data in later
	int Num;
	string Name;
	string Type;
	int Percent;
	int Caught;
	int Seen;
};

int main(){
	
	char selection;
	int size; //hold size from file
	int pokeball = 10, greatball = 10, ultraball = 10; 	//vars for pokeballs
	string file; 		//var to take in name of input file
	char trainer[30]; 	//string for trainer name
	ifstream fileName; 	//Input file stream object
	
	cout << endl << "Enter the name of the file to open > ";
	cin >> file;	//take in the name of the file to read
	cout << endl;
	
	fileName.open(file.c_str());	//open the file
	
	//File error checking
	while(!fileName){	
		cout << "That file does not exist!" << endl;
		cout << "Enter the name of the file to open > ";
		cin >> file;
		fileName.open(file.c_str());
		cout << endl;
	}
	
	fileName >> size; //first input from file, size of array
	
	Pokemon *pokedex = new Pokemon[size]; //dynamic array of strucs
	 
	for(int i = 0; i < size; i++){	//store data from file into array of strucs
		fileName >> pokedex[i].Num;
		fileName >> pokedex[i].Name;
		fileName >> pokedex[i].Type;
		fileName >> pokedex[i].Percent;
		pokedex[i].Caught = 0;
		pokedex[i].Seen = 0;
	}
	
	cout << "What's your name, trainer? > "; 
	cin.ignore(); //clearing input buffer
	cin.getline(trainer, 30);
	cout << endl;
	cout << "Welcome, " << trainer << ", to the COP3363 Safari Zone!" << endl;
	cout << "You'll have 30 chances to catch Pokemon, make them count!" << endl;
	cout << "The game will end once you run out of balls or if you choose to quit early" << endl;
	cout << endl;
	
	do{
		Menu();
		cout << "Selection > ";
		cin >> selection; 
		
		//eror checking for invalid menu entries
		while(selection != '1' && selection != '2' && selection != '3' 
				&& selection != 'q' && selection != 'Q'){
			cout << "That is not a valid menu selecion!" << endl;
			cout << "Selection > ";
			cin >> selection; 
		}
		
		//user Selection
		if(selection == '1'){
			//Hunting mode
			Hunt(pokeball, greatball, ultraball, size, pokedex);
		}else if(selection == '2'){
			//stats mode
			Stats(pokedex, size);
		}else if(selection == '3'){
			//Displays Inventory
			PrintInv(pokeball, greatball, ultraball);
		}else if(selection == 'q' || selection == 'Q'){
			cout << "Final Stats: "  << endl << endl;
			Stats(pokedex, size);
			break;
		}
		
		if(pokeball == 0 && greatball == 0 && ultraball == 0){
		cout << "You ran out of balls to throw! Game Over!" << endl;
		Stats(pokedex, size);
		cout << "Quitting!" << endl << endl;
		exit(0);
		}
		
	}while(selection != 'q' || selection != 'Q');
	
	delete [] pokedex;	//deleta dynamic array of struct
	fileName.close(); 	//close the file
	
	return 0;
}

//Selection menu
void Menu(){ 
	cout << "1 - Hunt for a Pokemon!" << endl;
	cout << "2 - Pokedex Statistics." << endl;
	cout << "3 - Print Inventory." << endl;
	//cout << "4 - List Pokemon By Type" << endl;
	cout << "Q - Quit" << endl;
	
	return;
}

//Game + Hunting code.
void Hunt(int& pokeball, int& greatball, int& ultraball, int size, Pokemon * pokedex){
	int select; 
	int pokemon_Num;
	int chance = 0, catchp = 0;
	
	srand(time(0)); //initializing random number generation
	pokemon_Num = ((rand() % size) + 1) - 1; //randomly selects a pokemon from file
	
	cout << endl;
	cout << "a wild " << pokedex[pokemon_Num].Name << " has appeared" << endl;
	// << "Type: " << pokedex[pokemon_Num].Type << endl;
	
	cout << endl;
	cout << "Choose a ball to throw:" << endl;
	cout << "1 - Poke Ball   (You have: " << pokeball << ")" << endl;
	cout << "2 - Great Ball  (You have: " << greatball << ")" << endl;
	cout << "3 - Ultra Ball  (You have: " << ultraball << ")" << endl;
	
	cout << "Selection > ";
	cin >> select;

	//error checking must be in one loop for this part
		while(pokeball == 0 && select == 1 || greatball == 0 && select == 2 
			|| ultraball == 0 && select == 3 || select != 1 && select != 2 && select != 3){
			
			if(pokeball == 0 && select == 1 || greatball == 0 && select == 2 
				|| ultraball == 0 && select == 3){
				
				cout << "You're out of those balls, use another type!" << endl;
				cout << "Selection > ";
				cin >> select;
				cout << endl;
			}
			if(select != 1 && select != 2 && select != 3){
				cout << "Thats not a valid selection. Try agian!" << endl;
				cout << "Selection > ";
				cin >> select;
				
			}
		}
	
	//User Selection
	switch(select){
		case 1:
			if(pokeball != 0){
				cout << endl;
				cout << "Threw a Poke Ball!" << endl;
				pokeball = pokeball - 1;
				
				catchp = pokedex[pokemon_Num].Percent;
				chance = ((rand() % 100) + 1);
				
				if(chance > 1 && chance < catchp){
					//catch
					pokedex[pokemon_Num].Seen++;
					pokedex[pokemon_Num].Caught++;
					cout << "Congratulations! You caught " << pokedex[pokemon_Num].Name << "!";
					cout << endl << endl;
				}else{
					//fail
					pokedex[pokemon_Num].Seen++;
					cout << pokedex[pokemon_Num].Name << " ran away. :-(" << endl << endl; 
				}
			}
			break;
		case 2:
			if(greatball != 0){
				cout << endl;
				cout << "Threw a Great Ball!" << endl << endl;
				greatball = greatball - 1;
				
				catchp = pokedex[pokemon_Num].Percent + 20;
				chance = ((rand() % 100) + 1);
				//20% increase on catch percent
				
				if(chance > 1 && chance < catchp){
					//catch
					pokedex[pokemon_Num].Seen++;
					pokedex[pokemon_Num].Caught++;
					cout << "Congratulations! You caught " << pokedex[pokemon_Num].Name << "!";
					cout << endl << endl;
				}else{
					//fail to catch
					pokedex[pokemon_Num].Seen++;
					cout << pokedex[pokemon_Num].Name << " ran away. :-(" << endl << endl; 
				}
			}
			break;
		case 3:
			if(ultraball != 0){
				cout << endl;
				cout << "Threw a Ultra Ball!" << endl << endl;
				ultraball = ultraball - 1;
				
				catchp = pokedex[pokemon_Num].Percent + 40;
				chance = ((rand() % 100) + 1);
				//40% increase on catch percent
				
				if(chance > 1 && chance < catchp){
					//catch
					pokedex[pokemon_Num].Seen++;
					pokedex[pokemon_Num].Caught++;
					cout << "Congratulations! You caught " << pokedex[pokemon_Num].Name << "!";
					cout << endl << endl;
				}else{
					//fail
					pokedex[pokemon_Num].Seen++;
					cout << pokedex[pokemon_Num].Name << " ran away. :-(" << endl << endl; 
				}
			}
			break;
		default:
			break;
	}
	
	return;
}

//code to shows stats
void Stats(Pokemon * pokedex, int size){ 
	int caught;
	double rate= 0.0, seen; //vars for calulation of stats
	
	//OUTPUT FORMATTING, colums of info
	cout << "POKEDEX:" << endl;
	for(int i = 0; i < size; i++){
		cout << left << "No: " << pokedex[i].Num << "\t";
		cout << left << setw(15) << pokedex[i].Name;
		cout << right << "Seen: " << pokedex[i].Seen << "  ";
		cout << right << " Caught: " << pokedex[i].Caught << endl;
		
	}
	//replace data from location of variables
	seen = 0; caught = 0;
	//loop to pull seen and catch stats out of array and put into vars for stat calc.
	for(int i = 0; i < size; i++){
		if(pokedex[i].Seen > 0){
			seen = seen + pokedex[i].Seen;
		}
		if(pokedex[i].Caught > 0){
			caught = caught + pokedex[i].Caught;
		}
	}
	if(seen > 0){
		rate = (caught / seen) * 100;
	}
	cout << endl;
	cout << "Total Pokemon Caught: " << caught << endl;
	cout << "Total Pokemon Seen: " << seen << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Overall Catch Rate: " << rate;
	cout << "%" << endl << endl;
	
	return;
}

//code for prining invintory
void PrintInv(const int pokeball, const int greatball, const int ultraball){
	cout << endl << "You Have: " << endl;
	if(pokeball != 0){
		cout << pokeball << " Pokeballs" << endl;
	}
	if(greatball != 0){
		cout << greatball << " Great Balls" << endl;
	}
	if(ultraball != 0){
		cout << ultraball << " Ultra Balls" << endl;
	}
	cout << endl;
	return;
}