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
  if(hex_in[0]=='A'||'a'){printf("10");}
  else if (hex_in[0]=='B'||'B'){printf("11");}
  else if (hex_in[0]=='C'||'c'){printf("12");}
  else if (hex_in[0]=='D'||'d'){printf("13");}
  else if (hex_in[0]=='E'||'e'){printf("14");}
  else if (hex_in[0]=='F'||'f'){printf("15");}
  else {sscanf(hex_in[0],"%d", &intValue);}
  if(intValue<9){printf(intValue);}
  else printf("Please enter a value 0-9 or A-F\n");



}
