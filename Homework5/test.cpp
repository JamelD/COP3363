/* Starter file for assignment 5
 * Two functions are provided.  You will write the 5 specified functions,
 * as well as a menu program to test the functions.
 *
 * Header goes here. 
 */



#include <iostream>
using namespace std;

/*Given Function prototypes*/
void PrintArray (const int array[], const int size);

/* Add your own function prototypes here */


int main()
{
   /* We'll set the test size to 15.  Use this constant in your calls
    *  instead of the literal 15.  Then, by changing this line, you can
    *  easily test arrays of different sizes. */
   const int size = 15;
   int array[size] = {2,3,4,6,5,7,8,9,1,10,10};

   /* Declare your array of size SIZE*/
	PrintArray(array, size);

   /*Loop that presents user with menu options and calls appropriate Array functions*/
   /*Note: you can assume the user will call Fill Array function first so that the array has data in it to begin*/
  







   return 0;
}					// end main()


/* Add in the definitions of your own 5 functions HERE */








/* Definition of PrintArray below DO NOT CHANGE!*/

//PrintArray Function
//This function prints the contents of any interger array of any size seperated by commas
void PrintArray(const int array[], const int size)
{
   cout << "\nThe array:\n { ";
   for (int i = 0; i < size-1; i++)	// for loop, prints each item (not last due to comma handling)
      cout << array[i] << ", ";

   cout << array[size-1] << " }\n";	// prints last item , sans comma
}



