/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat_3662[7];
    int i;
   
    
    for(i=0; i<7; i++){
        printf("endereço da posição%d: %d\n",i+1, &mat_3662[i]);
    }
    

    return 0;
}
