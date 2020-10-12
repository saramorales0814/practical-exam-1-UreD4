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
   while(temp_winner!=0)
   {

//running loop for each value of winner ticket


       d=temp_winner%10;
       temp_ticket=atoi(ticket);
       while(temp_ticket!=0)
       {

//running loop for each value of user input
           l=temp_ticket%10;
           if(d==l) //if winner ticket value matches with value with user input
           {
               count++;
               break;
           }
           temp_ticket=temp_ticket/10;
       }
       temp_winner=temp_winner/10;
   }

   if(count==4)
   {

//if all 4 digits matches we check for if the numbers are same for 1st prize
       if(atoi(winner)==atoi(ticket))
       {
           printf("1st prize!\n");
       }
       else
       {
           printf("No Prize! Better luck next time!\n");
       }
   }

//if 3 digits matches then 2nd prize
   else if(count==3)
   {
       printf("2nd prize!\n");
   }

//if 2 digits matches then 3rd prize
   else if(count==2)
   {
       printf("3rd prize!\n");
   }

//else better luck next time
   else
   {
       printf("No Prize! Better luck next time!\n");
   }
}

//main method to start the program

void main()
{
main_lotto();
}

