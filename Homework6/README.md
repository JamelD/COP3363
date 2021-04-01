# COP3363 - Intro to Programming in C++

## Jamel Douglas

### Assignment 6: String Fun
> ***Note:*** This homework description may be missing information. See note in main README.md<!--[README.md](/README.md "The main README.md file") -->

#### Objectives
- This assignment will involve practice with either C-style strings or string objects, as well as some of the libraries that involve manipulations on characters (like cctype) and strings (cstring/string).

#### Tasks
You may choose to complete this assignment using either string objects or cstrings.

##### Guidelines:
Write a program that performs the following steps:
- On start, Prompt the user to enter a sentence, and let them type it in. This will be any numbers of words/characters/spaces, with the newline (when the user presses the the enter key) indicating the end of the string. CString info: You may assume the sentence string that the user enters will be no more than 100 characters long, so you can declare your array accordingly.

<!-- Based on the user's entered sentence, and the word, print out the following stats regarding the sentence:
- the number of punctuation characters in the sentence
- the number of vowels in the sentence (including both upper and lowercase vowels).
- the number of words in the sentence (counting spaces here can help.)... A word here is defined "as any set of any characters containing no whitespace."
- a table of word lengths (a word can be between 1 and 20 characters long). See sample runs.
- a message if the user entered WORD was part of the SENTENCE they entered or not. It must be an exact match (character case matters here). Note that for this task, you are NOT PERMITTED to use the string library function "find". You need to build your own segment of code that checks to see if the user entered word is a substring (is contained within) of the sentence they entered. -->

##### Functions
YOU are the programmer now. So, decide which functions you'd like to build to complete your program. The only rule is that you must have at least two functions that serve a valid use in your program. You can name your functions however you'd like. It's up to YOU to figure out what parameters the functions you write should take in, and what you'd like them to return, if anything. You're welcome to write any additional functions (more than 2) to complete the required tasks in your program.

#### General Requirements
- No global variables, except where specified
- You may use any of these libaries:
    + iostream
    + iomanip
    + cctype
    + cstring
    + string
      > **NOTE**: you cannot use any of the FIND functions inside this library!
- Readable and well-documented source code
- Functions must have BOTH a declaration and definition, as always

#### Compiling and Running
Make sure your code compiles with g++ before you submit. You can use any IDE to develop if you choose, but we will be grading using the compiler g++.