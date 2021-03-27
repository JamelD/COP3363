# COP3363 - Intro to Programming in C++

## Jamel Douglas

### Assignment 3: Practice with Loops & Functions

#### Objectives
These assignment consist of writing code that involves practice utilizing loops and writing and calling functions.

#### Tasks
- Write a function called OrderTotal that takes in four integer parameters representing the number of krabby patties, the number of drinks, the number of fries, and the number of pizzas in a customer's order. The function should return the total order cost based on the price of each item presented in the menu. NO user input or output to the screen should occur in this function. The function should simply calculate the order total based on the counts of each item and return this value as a double.
 
- Write a function called menu that takes in no parameters and returns no value. This function is only responsible for printing the following menu to the screen:

~~~
----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00
~~~

- To test these functions, and help facilitate your program, write a main() routine (in the same file) that enters a loop and starts by presenting the customer with the menu (by calling the appropriate function). Allow the customer to specify what they want off the menu. The customer should enter 1,2,3,or 4 to order an item, or 0 to exit. If they enter any other value here (besides 0-->4) print an error message. If they enter a valid menu item, ask how many of that item they'd like to order. FORCE the user to enter a correct valid value here (0 or more is valid, negative amounts of items are not). See the sample runs below for more details.

When the customer is done ordering, print the counts of each item they ordered as well as their order total (by calling the appropriate function to help you calculate the order cost).

Sample Run 1:
(user input underlined)
```
Welcome to the Krusty Krab!

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 2
How many: 1

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 4
How many: 1

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 0

Your order:
1 barnacle fries.
1 krusty krab pizzas.

Your total is $6.50
Enjoy the food!
```

Sample Run 2:
(user input underlined)
```
Welcome to the Krusty Krab!

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 8
That isn't on the menu! Try again.

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 2
How many: -5
You can't order a negative amount of food!
Try Again: -7
You can't order a negative amount of food!
Try Again: -9
You can't order a negative amount of food!
Try Again: 1

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 0

Your order:
1 barnacle fries.

Your total is $1.50
Enjoy the food!
```

Sample Run 3:
(user input underlined)
```
Welcome to the Krusty Krab!

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 0
Guess you aren't hungry.
Sample Run 4:
(user input underlined)
Welcome to the Krusty Krab!

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 1
How many: 3

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 1
How many: 2

----------- Menu -----------
1. Krabby Patty ...... $3.50
2. Barnicle Fries .... $1.50
3. Kelp Shake ........ $1.00
4. Krusty Krab Pizza . $5.00

What would you like? (Enter 0 to finish order!): 0

Your order:
5 krabby patties.

Your total is $17.50
Enjoy the food!
```

#### General Requirements
- No global variables, other than constants
- There should be only one return statement from each function (this includes main() )
- If the use of functions is required, the tasks must be performed with the functions specified (not just with a single main() routine)
- In this assignment, main() should involve CALLING the functions
- Note that there is NO keyboard-input/screen-output specified in the orderTotal function (i.e. "return" does not mean "print")
- All input and output must be done with streams
- You may use the iostream , iomanip , and cmath libraries (the ones that have been discussed in class)
- Use the appropriate header
- When you write source code, it should be readable and well-documented. See the style guidelines
- Your program should only use standard ANSI header files (make sure to follow the directions exactly on the handout for creating Visual C++ projects, so that Windows-specific headers like stdafx.h and conio.h are not placed into your file)
