# COP3363 - Intro to Programming in C++

## Jamel Douglas

### Assignment 5: Array Practice
> ***Note:*** This homework description may be missing information. See note in main README.md<!--[README.md](/README.md "The main README.md file") -->

#### Objectives
- To gain practice with arrays and common array algorithms, as well as the use of array parameters in functions.

#### Tasks 
This assignment will consist of writing several functions that manipulate arrays or access data from arrays, as well as a test program that will allow interactive testing of the array functions.

##### Part 1: Functions
In this assignment, you are required to write at least the following TWO (2) functions in addition to main() that take in and utilize the array in your program.
You may have more functions in your code if you choose.
A sample CALL is given for each function. NONE of these 3 functions you write should use keyboard input (cin) or print output to the screen (cout). All of that happens elsewhere.

###### Delete
Write a function called Delete that takes in three parameters:
- an integer array
- the current size of the array
- the index of the item to delete

This function should delete the value at the given index. The remaining items in the array will need to shift over to fill the "empty" slot. The last item in the array (now vacant) should be set to 0. If the given index is out of bounds for the array, abort the function without deleting anything. This function does not return a value. Note that this does not change the "current size" of our array. Sample call:
  ```
  // Suppose the array "list" is {2, 4, 6, 8, 10, 12} //size is 6

  Delete(list, 6, 2);	// delete the value at index 2.

  // "list" is now {2, 4, 8, 10, 12, 0} //size still 6
  ```

###### Reverse
Write a function called Reverse that takes in two parameters:
- an integer array
- the current size of the array

This function should reverse the order of the array's contents. No returned value. Sample call:
  ```
  // Suppose the array "list" is {2, 4, 6, 8, 10, 12}

  Reverse(list, 6);	// Reverse the array "list"

  // "list" is now {12, 10, 8, 6, 4, 2}
  ```
Want a challenge?: Try to do this WITHOUT creating an additional "helper" array...

Note that none of the two required functions above you'll write above do any keyboard input or screen output.

##### Part 2: Test your Functions and do other fun stuffs with your main() function [NEEDS TO BE MODIFIED]
To help you test and get you started, I've provided you with a STARTER FILE which you SHOULD use to start. Fill in your code into this starter file. The starter file already contains the PrintArray function. You may call this provided function anywhere you need to print the array's contents.
Write a main() function that creates an array of size MAX (a global constant given in the starter file). Since this is a constant, it can be changed for testing different sizes of arrays easily. Use this constant whenever referring to the array's MAX size from main() (instead of using a hard-coded literal value), and use the MIN constant whenever you need that value throughout your code.

FIRST, upon beginning your program, the program should go into a menu loop, presenting the user with the following menu:
```
** Given Features **
P : Print the array contents

** Function Tests **
I : Insert
D : Delete
R : Reverse
X : Max Odd Value
E* : Max Even Value
S* : Sum of array values


M : Print this Menu
Q : Quit this program
	
Enter your menu selection:
```

Your loop should print the above menu, and read in the users response. You're welcome to print the menu contents in whatever order you choose if you don't like my ordering. You can print the menu once in the beginning of the program for the user, or before each selection, or as often as you like, so long as your program is user friendly. You're welcome to add a menu option that "reprints the menu" as well if you choose.

- P: should just invoke the already given function: PrintArray and should print the array based on the current size of your array in use.

- F: should fill up the array with random values. User selects minimum and maximum values that are randomly inserted into array.
- I: Prompt the user for the new value to be inserted, then the index to in which to change. Replace the array at the appropriate index with the new value if the requested index is valid. If it is invalid, do not make any changes to the array and print an error message.
- D: Prompt the user to type the index to be deleted. Pass this information to your Delete function appropriately.
- R: No extra input required. Just call your Reverse function appropriately.
- X: Print largest odd value in array like so when this option is selected:
  + The Maximum odd value is *valuehere*
- E: Print largest even value in array like so when this option is selected:
  + The Maximum even value is *valuehere*
- S:  Print sum of array contents like so when this option is selected:
  + The Sum of the array values is *valuehere*
- M: Print selction menu
- Q: should exit the menu loop and allow the program to end. Make sure to print out the final array before quitting the program

Hint: A good way to implement a menu loop is a switch statement (for processing a menu selection) inside of a do-while loop (for repeating the menu selection process).
 

#### General Requirements
- ***No global variables*** Except the two constants provided ;)
- The required array tasks must be performed with the functions specified (not just with a single main() routine). Note that your 3 required functions should not have any cout/cin statements in them. You can have additional functions if you like, however make sure to have the 3 required ones, and that your required functions adhere to the specs.
- You may not change the provided function or starter file in any way (PrintArray)
- You will need the iostream library. You may also use iomanip, ctime, cstdlib and/or cctype if you like. (No other libraries).
- As always, your source code must be readable and appropriately documented

#### Compiling and Running
Make sure your code compiles with g++ before you submit. You can use any IDE to develop if you choose, but we will be grading using the compiler g++.