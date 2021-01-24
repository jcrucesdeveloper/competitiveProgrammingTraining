#include <stdio.h>

int main()
{
    int l,b;
    scanf("%i%i",&l,&b);
    
    int count = 0; 
    while(true){
        count++;
        l*=3;
        b*=2;
        if(l>b) break;
    }
    printf("%i\n",count);
}
