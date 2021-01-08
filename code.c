//Code written on December 5, 2020
//Revised  December 8, 2020
// by V SASHANK REDDY
//This program implements the incremental decoder using boolean logic in C

#include <stdio.h>

//The  main function
int main(void)
{

//2 bits = 1 baud
//4 bits = 1 nibble
//8 bits = 1 byte

//unsigned char takes input as 1 byte

unsigned char  D=0x00,C=0x00,B=0x00,A=01;//inputs in hex	
unsigned char one = 0x01;//used for displaying the output in bit
unsigned char a,b,c,d,e,f;//outputs

e = (A&(~D))|((~D)&(~B)&C)|((~c)&(~B)&A);//Boolean function for D

printf("%x%x%x%x",one&D,one&C,one&B,one&A);//Iutput DCBA
printf(" ");
printf("%x\n" ,one&e);//Output e
return 0;
}
