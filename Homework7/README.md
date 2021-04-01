# COP3330_FSU
My submissions for COP3330 (Zhao) at FSU
http://www.cs.fsu.edu/~vastola/hw/hw7poke.html

# COP3363 - Intro to Programming in C++

## Jamel Douglas

### Assignment 7: Pokedex
> ***Note:*** This homework description may be missing information. See note in main README.md<!--[README.md](/README.md "The main README.md file") -->

#### Objectives
- To gain experience with using an array of structures, as well as with dynamic allocation of an array. This program provides further practice in file input, strings (either c-strings or string objects, programmer's choice), function building, if statements/switch, loops, and general code task problem solving and layout.

#### Tasks 

Professor Oak has this database full of pokemon infomation that he has researched over the years.  He requests a progam that will inteface with his database for pokemon trainers. This assignment will simulate the loading, manipulation, and exporting of a pokemon "database" (pokedex) which will be a collection of pokemon information that comes from a .txt file.

##### Input File Format
- The first line of the input file will be a single integer number -- this value tells how many movies are in this movie database text file. There's no guarantee how many records will be in a file that the user opens, so you must create your dynamic array of structs only AFTER reading in this first integer value.
- After this first line, each line following represents one movie entry with data in the following format on each line:
	+ Num PokemonName 	Type CatchPercentage
	+ More specifically, each of the movie data lines contain:
		* Pokemon Number
		* a space
		* Pokemon Name
		* a space
		* Pokemon Type
		* a space
		* Pokemon Catch Percentage
		* a newline

You may assume that any given movie files are in the correct format, and that any files we test with your program will also be of the same, above, correct format. You can also assume there there is no trailing whitespace in the file, and that the types and limits will be as described above. Finally, you can assume the file will at least contain one pokemon (there will be no files we use to test your program that contain zero pokemon)

You SHOULD test on many different files that have a different number of records in the file.
DO NOT ever open your input file in "notepad" (windows utility). This will cause your file to have different newline chars used, and cause issues while trying to read in the file. Make sure to test your program with a few different movie text files. If your assignment only works with one sample movie file/one size, you'll lose 50 points.

##### Program Details
Your program's overall goal is to prompt the user for the name of a file so that the program will load the data in a pokemon database file (a pokedex) in to your program, and then work with that database. We are going to store our pokedex in an ARRAY of STRUCTURES. Specifically, an array of structures of type Pokemon (an array of Pokemon! :) ).

Create a structure type called Pokemon. Each object of type Movies should contain fields for the following:
- Pokemon number (an integer)
- Pokemon name (a string or c-string)
- Pokemon type (a string or c-string)
- Pokemon catch percentage (an integer)
- Number of Pokemon caught (an integer)
- Number of Pokemon seen (an integer)

Enter a menu loop that prints the following menu and allows the user to choose from the following options (they should enter the corresponding value to choose):
```
1 - Hunt For a Pokemon
2 - Pokedex Statistics
3 - Print Invenroty
Q - Quit
Selection > 
```

You can print this menu each time the user makes a selection, or just once at the beginning of your program (you can add a "view menu again" option to the menu if you want!). Note that since the user can eiter digits or letters as a part of their menu entry, you'll need to consider the best type of variable to read these menu choices in to.

MENU OPTION 1: Hunt for Pokemon
When this option is selected, it should select randomy a pokemon for the user to hunt. The user can use various types of pokeballs to catch the pokemon. The probability of the user catching the pokemon is based on the pokemons catch percentage and whatever type of pokeball the use.

MENU OPTION 2: Pokedex Statistics
This option when selected should print statistics based on the pokedex. It should list out how many pokemon the user has seen, how many pokemon the user has caught, and the users catch percentage.
	
MENU OPTION 3: Print Inventory
When the user selects this option, it prints out the contents of their inventory. This is how the user checks to see how many pokeballs they have.

##### Other hints and to-knows:
Make sure to clean up any remaining dynamically allocated space before ending the program

Make sure to close any input files before ending the program

<!-- If you choose to use c-strings, you can assume a max size of 20 for the genre, 100 for the title, and 10 for the rating. -->

You need to "error check": the user's menu choice, the user's y/n entry on loading a movie file when one is loaded already, and also on the filename that the user specifies that they'd like to open. You may assume the user complies everywhere else.

the .ignore() function may be handy to you:
	
	cin.ignore(100,'\n'); //this ignores up to 100 or up to \n on the KEYBOARD
	cin.ignore(); //ignores the next 1 character entered by the user
	cin.ignore(10); // ignores the next 10 characters entered by the user

	Replace "cin" with the name of an ifstream object
	to instead ignore characters from within the file,
	if you find that helps. 

##### Functions
You'll notice that there were no specified functions that your program must have. It is YOUR JOB as the PROGRAMMER to come up with useful functions for your code. This will be a graded factor of your program, how well you utilize and build functions for yourself

#### General Requirements
- No global variables, other than constants
- You may use any of these libraries:
    + iostream
    + iomanip
    + fstream
    + cctype
    + cstdlib
    + cstring
    + string
- HINT: Be careful if you change the example input file. If you have trailing whitespace at the end of a text file your program attempts to read you could encounter off by one errors. You SHOULD test your program on multiple input files (all of the required format of course)
- Write your source code so that it is readable and well-documented
- Part of assessing readability and style will be how well you break your program into appropriate functions.

#### Compiling and Running
Make sure your code compiles with g++ before you submit. You can use any IDE to develop if you choose, but we will be grading using the compiler g++.