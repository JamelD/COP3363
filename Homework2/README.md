# COP3330 - Object Oriented Programming in C++

## Jamel Douglas

### Assignment 2: COP3363 Grade Calculator

#### Objectives
This assignment will consist of writing a program that gives practice with basic selection statements (if,else,switch), as well as further practice with basic I/O, and output formatting.
Real world application, this program will help you calculate your overall course grade at the end of the class if done correctly :)

#### Tasks
Write a program that does the following in order:

- Displays a welcome message to the user, and then asks them for the following information in order:
- Homework grades for homeworks 1-7, recitation grades for recitations 1-6, test 1, test 2, and final exam. (See sample runs). This will feel a little tedious with a lot of cout, cin, cout, cin, but it's necessary here, for now.
- Then, ask the user if they earned any extra credit. They should enter y for yes, or n for no. Allow BOTH UPPERCASE and LOWERCASE Y/y or N/n here. If the user enters an invalid character, the program should end. If the user enters a valid character and it's y for yes, ask them for how many extra credit points they've earned and add it to their overall homework points. If no, don't prompt user for ex. credit points and no extra credit is added to the overall homework points.
- The following formulas should help with your calculations:

```
Homework Average = ((Add All Hws, recitations, and ex credit))/820) * 100

Test Average = ((Midterm I * 17.5) + (Midterm II * 17.5) + (final * 25)) / 60

Course Average = ((Midterm I * .175) + (Midterm II * .175) + (final * .25) + (Homework Avg * .40))
```

- Calculate and display the user's homework average, their test average, and their final course percentage. Print these values out to two decimal places. 
- When printing the test average, if their test average falls below 69% (the required test average to pass the course), print message below after the average to alert the user. (See sample runs).

~~~
***Test average requirement not met***
~~~


- Use either a switch statement or an if/else if block to determine what letter grade the user earned based on their final course grade percentage. See the course syllabus for the letter grade breakdowns. To meet the minimum requirements for this assignment, you don't have to handle + or - letter grades. Just printing the letter is fine. You can though, if you want to.
- Error Checking: You may ASSUME that the user will enter valid homework scores, recitation grades (which are always 20,10 or 0) and test grades, however, you need to check for an invalid character entry on their extra credit input. If the user enters something other than Y, y, N, n, print an error message (See sample run 3) and do not continue on with the rest of the displaying of the grades. Just allow the program to abort (meaning, structure your code so that the program naturally flows to return 0; at the end of main().

Sample Runs
Below are some sample runs so you can see how your program should behave. Your formatting should match mine, EXACTLY. This means, spacing, prompts, wording, everything. (user input is underlined, to distinguish it from output)

Sample run 1
```
Welcome to the Grade Calculator!

HOMEWORK GRADES -->99 95 100 105 65 97 100

RECITATION GRADES -->20 20 10 0 20 20

TEST GRADES --> 
Midterm I: 95
Midterm II: 85
Final: 100

Is there any extra credit to add in? (Y or N) --> N

Homework Average: 91.59%
Test Average: 94.17%
Course Average: 93.13%
Course Grade: A
```

Sample Run 2
```
Welcome to the Grade Calculator!

HOMEWORK GRADES -->88 98 95 76 100 87 95

RECITATION GRADES -->20 20 20 20 20 20

TEST GRADES --> 
Midterm I: 51
Midterm II: 66
Final: 68

Is there any extra credit to add in? (Y or N) --> Y
How many extra credit points should be added? --> 10

Homework Average: 93.78%
Test Average: 62.46%  ***Test average requirement not met***
Course Average: 74.99%
Course Grade: C
```

Sample Run 3
```
Welcome to the Grade Calculator!

HOMEWORK GRADES -->50 70 75 85 100 0 105

RECITATION GRADES -->10 10 20 20 0 0

TEST GRADES --> 
Midterm I: 50
Midterm II: 65
Final: 95

Is there any extra credit to add in? (Y or N) --> X

Invalid option, exiting program.
```

#### General Requirements
- No global variables
- You may ONLY have ONE return statement in your code (At the end of main) and no exit statements can be used. This means you'll need to structure your code so it naturally hits the last line of main() which should be return 0;
- All input and output must be done with streams, using the library iostream
- You may only use the iostream and/or iomanip libraries (you do not need any others for these tasks)
- When you write source code, make sure it is clear, readable, and well-documented (see the style guide).
- Include the appropriate HEADER at the top of your file
