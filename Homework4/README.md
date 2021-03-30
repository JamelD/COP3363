# COP3363 - Intro to Programming in C++

## Jamel Douglas

### Assignment 4: Monty Hall Problem
> ***Note:*** This homework description may be missing information. See note in main README.md<!--[README.md](/README.md "The main README.md file") -->

#### Objectives 
- This assignment will consist of writing a couple functions and allowing the student to gain practice and understanding of random number generation, and general coding skills dealing with functions, loops, and conditionals

#### Tasks
This program presents the user with a menu, on which includes options for the user to play a round of the game, for the user to view statistics and for the user to reset statistics.

Start with THIS STARTER FILE. I've provided you all with a starter layout to help facilite starting your program. I've also provided you with the function declaration and definition for the printRules function for you. You'll just need to call it when appropriate.
In main():
    Seed your random number generator
    Enter a loop that: [1]prints the menu and obtains the menu entry from the user (calling your menu() function will help here). [2] Determines what the entry was based on the menu, and calls the appropriate function, and [3] repeats this process until the user quits the game by choosing 0.
    MENU OPTION 1: Calls the winDoor and randLooseDoor functions to select the winning doors. Then the user can make their selections.
    MENU OPTION 2: Call your stats function, passing in your total number of wins and losses.
    MENU OPTION 3: Reset wins and losses back to 0.
     MENU OPTION 0: Exits program.
Notice, the gameplay of each game happens in the appropriate functions for those games. The stats function takes care of all the statistics printing. main() is really only responsible for setting up the menu loop that determines which functions to call.

Required Functions:
1. Write a function called *menu*: This function should not take in any parameters. It should present the user with the following menu:

    ```
    Choose one of the following:
    1 - Play Game
    2 - View Stats
    3 - Reset Stats
    4 - Quit Game
    ```
    The user can select any of the options. If they select a number besides 1,2,3,or 4, print an error message and force them to re-enter until they enter a valid value (You'll need a loop to force a valid entry). When the user gives a valid menu entry, the function should return it back to main() so main() can access what this value was Note, you do not need to account for a bad character entry here, only bad integer entries. See the sample runs below for exactly how your program should behave.


2. Write a function called *winDoor*. This function takes in no values, and returns an integer. The function takes care of part of the gameplay: Generates a random number between 1 and 3. This number represents the winning door. The then function returns the generated number back to main().

3. Write a function called *randLooseDoor*. This function takes in no values, and returns an integer. The function takes care of part of the gameplay: Generates a random number between 1 and 3. This number represents a random losing door to open if the user first selects the wining door. The then function returns the generated number back to main().


4. Write a function called *printDoors*. This function takes in no values, and returns nothing. The function prints out ASCII art that represents the 3 door a user could select.

5. Write a function called *stats* that takes in two integer parameters representing the total number of wins and losses that the user has. This function should print the total number of wins, losses, and the winning % to the screen. This function should NOT return a value

You must have these 4 functions explained above in your program in addition to main() to earn points for these tasks. You're allowed to create any additional functions if you choose.

#### General Requirements
- The required tasks must be performed with the functions specified (not just with a single main() routine)
    + You must have both a function declaration and definition for your functions you write besides main()
    + Note that this exercise requires the writing of functions, and a main routine that uses those functions.
    + Each function should do exactly the task specified. NO more no less.
- NO global variables!
- When you write source code, it should be readable and well-documented. See the style guidelines. The appropriate header should be used.

#### Compiling and Running
Make sure your code compiles with g++ before you submit. You can use any IDE to develop if you choose, but we will be grading using the compiler g++.