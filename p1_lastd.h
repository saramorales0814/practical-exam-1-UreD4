/*
*   PRACTICAL EXAM #1 - Problem 1
*   Filename: p1_lastd.h
*   The function in this file checks if 2 user inputs have the same last digit.
*   Last modified by: Angel F. Garcia (9/30/2020)
*/

#include <stdio.h>

void main_lastd(void) {
  int x, y;
  scanf("%d %d", &x, &y);

  int x_digit = x / 10;
  int y_digit = y / 10;

  if(x_digit == y_digit) {
    print("TRUE");
  }

  print("FALSE");

}
