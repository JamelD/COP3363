/*
Name: Jamel Douglas
Date: 9/6/2018
Section: 7
Assignment: Homework 4 
Due Date: 10/21/18
About this project: Monty hall problem 
Assumptions: User will enter in a valid door choice when asked if they want to switch
				Only numbers (not characters) will be entered by the user

All work below has been performed by Jamel Douglas
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//function prototypes
void printDoors(); //displays dooe ACII art
void stats(int wins, int losses);//displays stats
void menu(); //displays menu
int winDoor(); //Picks winning Door
int randLooseDoor(); //Picks a loosing door if user selects wining door

int main(){
	//User Input variable
	int select = 0;
	//door selection and choice variables
	int door, door_choice, door_choice2, door_L; 
	//Stat Keeping variable
	int win = 0, loss = 0; 
	
	srand(time(0));//initializing random number generation
	cout << endl << endl << "Welcome to the Monty Hall Let's Make a Deal Simulator!" << endl;
	do{
		menu();
		cout << "Choice: ";
		cin >> select;
		while(select < 1 || select > 4){
			cout << "Invalid option, please retry > ";
			cin >> select;
			
		}
		if(select == 1){
			door = winDoor(); // randomly selects wining door
			door_L = randLooseDoor(); // selects door to open
			cout << "Pick a Door, 1, 2, or 3" << endl;
			printDoors();
			cout << endl << "Choice > ";
			cin >> door_choice;
			cout << "You chose door #" << door_choice << endl;
			cout << "I'll now open a door for you randomly that you didn't choose!";
			cout << endl;
			if(door == 1){
				if(door_choice == 1){
					if(door_L = 0){
						cout << "Opening door #2 and it's a GOAT!"; //open 2
						cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
						cout << endl <<"Would you like door #1 or #3? >";
						cin >> door_choice2;
						if(door_choice2 == 1){
							cout << "Opening door #1....." << endl;
							cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
							win = win + 1;
						}else if(door_choice2 ==3){
							cout << "Opening door #3....." << endl;
							cout << endl <<"baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
							loss = loss + 1;
						}else{
							continue;
						}
						
					}else{
						cout << "Opening door #3 and it's a GOAT!";//open 3
						cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
						cout << endl << "Would you like door #1 or #2? > ";
						cin >> door_choice2;
						if(door_choice2 == 1){
							cout << "Opening door #1....." << endl;
							cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
							win = win + 1;
						}else if(door_choice2 == 2){
							cout << "Opening door #2....." << endl;
							cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
							loss = loss + 1;
						}else{
							continue;	
						}
						
					}
					
				}else if(door_choice == 2){
					cout << "Opening door #3 and it's a GOAT!";//open door 3
					cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
					cout << endl << "Would you like door #1 or #2? > ";
					cin >> door_choice2;
					if(door_choice2 == 1){
						cout << "Opening door #1....." << endl;
						cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
						win = win + 1;
					}else if(door_choice2 == 2){
						cout << "Opening door #2....." << endl;
						cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
						loss = loss + 1;
					}else{
						continue;
					}
					
			 	}else if(door_choice == 3){
					cout << "Opening door #2 and it's a GOAT!";//open door 2
					cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
					cout << endl << "Would you like door #1 or #3? > ";
					cin >> door_choice2;
					if(door_choice2 == 1){
						cout << "Opening door #1....." << endl;
						cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
						win = win + 1;
					}else if (door_choice2 == 2){
						cout << "Opening door #2....." << endl;
						cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
						loss = loss + 1;
					}else{
						continue;
					} 
					
				}else{
					continue;
					
				}
			
			}else if(door == 2){
				if(door_choice == 1){
					cout << "Opening door #3 and it's a GOAT!";//open 3
					cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
					cout << endl << "Would you like door #1 or #2? > ";
					cin >> door_choice2;
					if(door_choice2 == 2){
						cout << "Opening door #2....." << endl;
						cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
						win = win + 1;
					}else if(door_choice2 == 1){
						cout << "Opening door #1....." << endl;
						cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
						loss = loss + 1;
					}else{
						continue;
					}
					
				}else if(door_choice == 2){
					if(door_L = 0){
						cout << "Opening door #1 and it's a GOAT!";//open 1
						cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
						cout << endl << "Would you like door #2 or #3? > ";
						cin >> door_choice2;
						if(door_choice2 == 2){
							cout << "Opening door #2....." << endl;
							cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
							win = win + 1;
						}else if(door_choice2 == 3){
							cout << "Opening door #3....." << endl;
							cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
							loss = loss + 1;
						}else{
							continue;
						}
						
					}else{
						cout << "Opening door #3 and it's a GOAT!";//open 3
						cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
						cout << endl << "Would you like door #1 or #2? > ";
						cin >> door_choice2;
						if(door_choice2 == 2){
							cout << "Opening door #2....." << endl;
							cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
							win = win + 1;
						}else if(door_choice2 == 1){
							cout << "Opening door #1....." << endl;
							cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
							loss = loss + 1;
						}else{
							continue;
						}
						
					}
					
				}else if(door_choice == 3){
					cout << "Opening door #1 and it's a GOAT!";//open 1
					cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
					cout << endl << "Would you like door #2 or #3? > ";
					cin >> door_choice2;
					if(door_choice2 == 2){
						cout << "Opening door #2....." << endl;
						cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
						win = win + 1;
					}else if(door_choice2 == 3){
						cout << "Opening door #3....." << endl;
						cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
						loss = loss + 1;
					}else{
						continue;
					}
					
				}else{
					continue;
					
				}
				
			}else if(door ==3){
				if(door_choice == 1){
					cout << "Opening door #2 and it's a GOAT!";//open 2
					cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
					cout << endl << "Would you like door #1 or #3? > ";
					cin >> door_choice2;
					if(door_choice2 == 3){
						cout << "Opening door #3....." << endl;
						cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
						win = win + 1;
					}else if(door_choice2 == 1){
						cout << "Opening door #1....." << endl;
						cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
						loss = loss + 1;
					}else{
						continue;
					}
					
				}else if(door_choice == 2){
					cout << "Opening door #1 and it's a GOAT!1";//open 1
					cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
					cout << endl << "Would you like door #2 or #3? > ";
					cin >> door_choice2;
					if(door_choice2 == 3){
						cout << "Opening door #3....." << endl;
						cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
						win = win + 1;
					}else if(door_choice2 == 2){
						cout << "Opening door #2....." << endl;
						cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
						loss = loss + 1;
					}else{
						continue;
					}
					
				}else if(door_choice == 3){
					if(door_L = 0){
						cout << "Opening door #1 and it's a GOAT!";//open 1
						cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
						cout << endl << "Would you like door #2 or #3? > ";
						cin >> door_choice2;
						if(door_choice2 == 3){
							cout << "Opening door #3....." << endl;
							cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
							win = win + 1;
						}else if(door_choice2 == 2){
							cout << "Opening door #2....." << endl;
							cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
							loss = loss + 1;
						}else{
							continue;
						}
						
					}else{
						cout << "Opening door #2 and it's a GOAT!";//open 2
						cout << endl << "Now, I'll be a kind host and give you the chance to switch your door!";
						cout << endl << "Would you like door #1 or #3? > ";
						cin >> door_choice2;
						if(door_choice2 == 3){
							cout << "Opening door #3....." << endl;
							cout << endl << "it's a BRAND NEW CAR!!!! YOU WIN!!!!" << endl;
							win = win + 1;
						}else if (door_choice2 == 1){
							cout << "Opening door #1....." << endl;
							cout << endl << "baaaaaaaaaaaaa.... it's a GOAT!!!! You LOSE!" << endl;
							loss = loss + 1;
						}else{
							continue;
						}
						
					}
					
				}else{
					continue;
					
				}
			
			}else{
				continue;
				
			}
			
		}else if(select == 2){
			if(win == 0 && loss == 0){
				cout << endl << "No stats to display, 0 games played" << endl;
			}else{
				stats(win, loss);
				
			}
		}else if(select == 3){
			win = 0;
			loss = 0;
			cout << endl << "... Statistics Reset!" << endl;
			
		}else if(select == 4){
			cout << endl << "Goodbye!" << endl << endl ;
			break;
			
		}else{
			continue;
			
			}	
		
	}while(select != 4);
	
   return 0;
}

void printDoors(){
		cout << endl;
		cout << "---------    ---------    ---------- \n";
        cout << "|       |    |  ____ |    |  _____ | \n";
        cout << "|   |   |    |     | |    |      | | \n";
        cout << "|   |   |    |  ___| |    |   ___| | \n";
        cout << "|   |   |    | |     |    |      | | \n";
        cout << "|   |   |    | |____ |    |  ____| | \n";
        cout << "---------    ---------    ---------- \n"; 

        return;
}

void menu(){
	
	cout << endl;
	cout << "Choose one of the following:" << endl;
	cout << "1 - Play Game" << endl;
	cout << "2 - View Stats" << endl;
	cout << "3 - Reset Stats" << endl;
	cout << "4 - Quit Game" << endl;
	
	return;
}

void stats(int wins, int losses){
	//varsiables for stat calculations
	double total_games;
	double win_percent, loss_percent;
	
	//Stats calculations
	total_games = wins + losses;
	win_percent = wins / total_games;
	loss_percent = losses / total_games;
	
	//Stats output
	cout << endl << "---------<{[Stats]}>---------" << endl;
	cout << "Results after " << total_games << " games: " << endl;
	cout << "Wins: " << wins;
	cout << "\t\tWin %: " << win_percent * 100 << "%" << endl;
	cout << "Losses: " << losses;
	cout << "\tLoss %: " << loss_percent * 100 << "%" << endl;		
	
	return;
	
}

int winDoor(){
	int rand_door;
	rand_door = rand() % 3 + 1;
	return rand_door;
	
}

//randomly chooses loosing door to open if user selects correct door the first time
int randLooseDoor(){ 
	int rand_Ldoor;
	rand_Ldoor = rand() % 3 + 1;
	return rand_Ldoor;
}