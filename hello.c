#include<stdio.h>// this is header file to importing scanf and printf
int main(){ // int main is main function to run code its return value u use void is not return value 
 int a; //varible decearing datatype int varible a
 printf("Enter Number:"); //this is o/p
 scanf("%d",&a); //this is input
 printf("Your enterd number %d this",a);
 return 0;
}

// Data Types
/*
int:
Range: -32,768 to 32,767 (for a 16-bit int)
Size: 2 bytes

unsigned int:
Range: 0 to 65,535 (for a 16-bit unsigned int)
Size: 2 bytes

short (or short int):
Range: -32,768 to 32,767 (for a 16-bit short)
Size: 2 bytes

unsigned short (or unsigned short int):
Range: 0 to 65,535 (for a 16-bit unsigned short)
Size: 2 bytes

long (or long int):
Range: -2,147,483,648 to 2,147,483,647 (for a 32-bit long)
Size: 4 bytes

unsigned long (or unsigned long int):
Range: 0 to 4,294,967,295 (for a 32-bit unsigned long)
Size: 4 bytes

float:
Range: Approximately ±3.4E38
Size: 4 bytes

double:
Range: Approximately ±1.7E308
Size: 8 bytes

char:
Range: -128 to 127 (for signed char) or 0 to 255 (for unsigned char)
Size: 1 byte

_Bool:
Range: 0 (false) or 1 (true)
Size: 1 byte

_Complex:
For complex numbers.
_Imaginary:
For imaginary numbers.
*/