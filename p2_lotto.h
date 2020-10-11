/*
*   PRACTICAL EXAM #1 - Problem 2
*   Filename: p2_lotto.h
*   In this problem, the programmer has to write code that checks
*   if the user's ticket wins one of many prizes, or loses.
*   Last modified by: Angel F. Garcia (9/30/2020)
*/

#include <stdio.h>

void main_lotto(void) {
  char winner[4] = "7239";
  char ticket[4];

  scanf("%s", ticket);

  //TODO: Your code goes here
  int i=0;
  int count=0;
  //Avoiding any issues if the user inputs an empty string
  while(ticket!=NULL && i<4){
    if(ticket[i]==winner[i]){count+=1;}
    i++;
  }

  //Switch statement made in if cases
  if (count==4){printf("1st Place winner");}
  else if (count==3){printf("2nd Place winner");}
  else if (count==2){printf("3rd Place winner");}
  else printf("Better luck next time!");

}
