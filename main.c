/*
*   PRACTICAL EXAM #1
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (9/30/2020)
*/
#include <stdio.h>
#include "p1_lastd.h"
#include "p2_lotto.h"
#include "p3_hex.h"

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    main_lastd();
  } else if(opt == 2) {
    main_lotto();
  } else if(opt == 3) {
    main_hex();
  }
}
