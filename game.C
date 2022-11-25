/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n = 21;
  while(n > 0) {
    int num;
    
    printf("P1, it is ur turn. please pick pebbles(1,2,3,4)\n");
    scanf("%d",&num);
    if(num > 4 || num < 1) {
      printf("you have lost player\n");
      exit(0);
    }
    if(num > n) {
        printf("Only %d pebbles left. you can pick maximum of %d pebbles",n,n);
        exit(0);
    }
    if(n == 0) {
        
    }
    //n = n-num;
    int cp = 5-num;
    printf("it is computer's turn now. computer picks up %d pebbles\n",cp);
    n = n-5;
    printf("==============================\n");
    printf("pebbles left = %d\n",n);
  }
  return 0;
}
