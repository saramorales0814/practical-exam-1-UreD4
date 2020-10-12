/*
*   PRACTICAL EXAM #1 - Extra Credit Problem
*   Filename: p3_hex.h
*   The programmer must write code that prints out the decimal value
*   of a numerical character, as long as the character is
*   a valid Hexadecimal number
*   Last modified by: Thomas T Roque (10/11/2020)
*/
#include <stdio.h>
#include <stdlib.h>

void main_hex(void) {
  char hex_in[1];
  int intValue;
  //Scanf was being skipped with %s
  scanf("%s", &hex_in[0]);
  //TODO: Your code goes here
  if(hex_in[0]=='A'||hex_in[0]=='a'){printf("10\n");}
  else if (hex_in[0]=='b'||hex_in[0]=='B'){printf("11\n");}
  else if (hex_in[0]=='c'||hex_in[0]=='C'){printf("12\n");}
  else if (hex_in[0]=='d'||hex_in[0]=='D'){printf("13\n");}
  else if (hex_in[0]=='e'||hex_in[0]=='E'){printf("14\n");}
  else if (hex_in[0]=='f'||hex_in[0]=='F'){printf("15\n");}
  //converts string to int
  else {
    intValue = atoi(hex_in);
  //prints anser or error to user
    if(intValue<9){printf("%d\n",intValue);}
    else printf("Please enter a value 0-9 or A-F\n");
  }
}
