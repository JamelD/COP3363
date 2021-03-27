# COP3330 - Object Oriented Programming in C++

## Jamel Douglas

### Assignment 1: Ticket System

#### Objectives
- To practice with writing a small C++ main() program, along with compiling and running it
- To practice with basic C++ input/output features, along with some simple decimal formatting
- To practice with basic arithmetic operators in C++

#### Tasks
As a successful programmer, the FSU Football department has asked you to create a small program that will calculate the amount of money that a fan owes for tickets to a game. There are three categories of tickets: adult, children, and senior.

Create a program (Filename: ticketsys.cpp) that will calculate the amount of money a fan owes (plus tax) for their tickets based on the given prices for each ticket category.
- Welcome the user using the same welcome message as seen below in the sample runs. Assume the ticket prices for each category are:
Adult tickets are $28.50, Child (9 and under) tickets are $12.50, and Senior (55+) tickets are $16.50. Declare three const double variables to store these ticket price values for use in your program.
- As you can see in the sample execution below, you should ask the user for the amount of adult, child, and senior tickets they want to purchase (as integers), in that order. You should have three variables declared which store this information. Prompt the user for these values exactly as I've done below.
- Calculate and then display (to two decimal places) the total amount of $ owed (before tax). To do this, it may help to calculate the amount owed per category seperately (in their own variables), then add these values together to get the total (before tax). Consider what will happen if the user enters 0 for the number of tickets for a category. Perhaps it would be beneficial to initialize variables you will use to store the total cost for adults, total cost for child, and total cost for senior tickets to 0.0.
- Assume that the tax is 7%. Store this in your program as a const double and use it in your calculations to find and display the tax (to two decimal places) based on the total cost of the tickets.
- Finally, add the tax to the total and display the final total (including tax) to the user (printed out to two decmial places)
- You may assume that the user will enter valid integer values when prompted for the number of tickets per category. They will not enter incorrect types, or negative values.

#### General Requirements
- No global variables (variables outside of main() )
- All input and output must be done with streams, using the library iostream
- You may only use the iostream and iomanip libraries (you do not need any others for these tasks)
- When you write source code, it should be readable and well-documented (comments).
- Style Guidelines for Programs - This WILL be a graded factor of ALL assignments.
- Include this HEADER at the top of your source code file.
- Write your program so that the output looks EXACTLY like the sample execution shown below (this means same wording, spacing, special characters including the $ and --> you see in the sample below, and formatting of numbers). NOTE these are only three sample runs. You can use this to ensure you're doing your math correctly, but also do test with other user entered values as well. Aka, you should not hard code any of these values in your program, the program you write should figure out the solution based on any user entered values. Every other value to be printed should be contained inside a variable.
- Note: The underlining in the sample execution below is used to illustrate what the user is typing in -- obviously the underlining will not appear on the console.

A sample run: (user input underlined)
~~~
***FSU Football Ticket Calculator***
Please enter the number of:
        Adults
        Children(up to age 9)
        Seniors(55+)
Adults --> 2
Children --> 2
Seniors --> 1
-------------------------------
TOTAL (before tax) = $98.50
Tax = $6.90
TOTAL COST (after tax) = $105.39  //special note, if you get 105.40 here, it is OK. Decimal rounding issue.

Thanks for using the ticket system!
~~~

Another sample run: (user input underlined)
~~~
***FSU Football Ticket Calculator***
Please enter the number of:
        Adults
        Children(up to age 9)
        Seniors(55+)
Adults --> 2
Children --> 0
Seniors --> 0
-------------------------------
TOTAL (before tax) = $57.00
Tax = $3.99
TOTAL COST (after tax) = $60.99

Thanks for using the ticket system!
~~~

Another sample run: (user input underlined)
~~~
***FSU Football Ticket Calculator***
Please enter the number of:
        Adults
        Children(up to age 9)
        Seniors(55+)
Adults --> 0
Children --> 0
Seniors --> 0
-------------------------------
TOTAL (before tax) = $0.00
Tax = $0.00
TOTAL COST (after tax) = $0.00

Thanks for using the ticket system!
~~~

#### Compiling and Running
Make sure your code compiles with g++ before you submit. You can use any IDE to develop if you choose, but we will be grading using the compiler g++.