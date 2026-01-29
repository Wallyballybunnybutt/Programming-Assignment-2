# Programming-Assignment-2

Problem statement:
This program is an extension of the original binary.c program that converts an unsigned integer to its binary representation using recursion.
The task is to turn the binary.c function into a to_base_n function that will convert any base between 2 and 16. This program has to accept two input 
numbers while not having a base outside of the numbers given, and display an invalid number if otherwise. It also must use correct prefixes for octal (0) and hexadecimal (0x). 


Describe the solution:
In the original code, the base only had two printed solutions, either '1' or '0'. The remainder is now calculated with n % base instead of n % 2.
I added a character string to map the remainders to the correct bases up to 16. The main function had to be updated to take in two arguments from the user. It's also had to be updated to not take a base outside of 2-16. It also had to print the prefixes for octal and hexadecimal. 

Pros:
-The function is still very readable and stays true to the original code
-Has the same logic for bases between 2-16
-efficient for most number sizes

Cons:
-This recursive function most likely will not work for extremely large numbers
-The base range is limited to 2-16
