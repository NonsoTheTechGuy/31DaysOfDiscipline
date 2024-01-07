# 31DaysOfDiscipline
This is a Self Discipline Routine that helps me to maintain consistency in my programming journey.
STRINGS IN C
A String is an array of char variables. 
A Char holds values that ranges from 0 through 255. The C-Language features various functions designed to test or manipulate individual characters. These functions are all defined in the ctype.h header file. 
To use the CTYPE functions, the ctype.h header file must be included in your source code I.e 
#include <ctype.h>
CTYPE functions can be classified into 2 categories; 
* Testing
* Manipulation 

Some testing functions include 
isalpha(), islower(), isdigit(), isnumber(), isupper(), isupper(), etc 

CTYPE Conversion functions includes toascii(), tolower(), toupper(). 
where “is” is used for testing, while “to” is used for comparison. 

Some String functions include strcmp(), strncmp(), strcasecmp(), strncasecmp(), strcat(), strncat(), strchr(), strrchr(), strstr(), strnstr(), strcpy(), strncpy(), strlen() etc 
Note: All string functions requires the string.h header files to be included with the source code. I.e
#include <string.h>

The string comparison function returns an int value based on the result of the comparison. 
It returns 0 when the strings are equal(success) or a higher or lower int value(-1 , 1)error.
The most popular output function in C is the printf()

FORMATTING IN C
%f is used to output a float number.
%c is used to output a character.
%s is used to output a string.
%lu is used to output an unsigned long.
%I or %d is used to output an integer or a decimal number. etc.
%w.pf  where “w” sets the maximum width of the entire number, “p” see the precision.
