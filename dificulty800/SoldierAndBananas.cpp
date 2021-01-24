#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,n,w;
    scanf("%i%i%i",&k,&n,&w);

    for(int i = 0; i < w ; i++)
    {
        n-= k * (i+1);
    }
    if(n > 0) 
    {
        printf("0\n");
        return 0;
    }
     
    printf("%i\n", abs(n));
    
}
