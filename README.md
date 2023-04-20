# vetoreponteiro
#include <stdio.h>

int main()
{
    int mat_3662[7];
    int i;
   
    
    for(i=0; i<7; i++){
        printf("endereÃ§o da posiÃ§Ã£o%d: %d\n",i+1, &mat_3662[i]);
    }
    

    return 0;
}
