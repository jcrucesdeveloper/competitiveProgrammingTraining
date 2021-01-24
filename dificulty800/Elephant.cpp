#include <stdio.h>

int main()
{
    int x;
    scanf("%i", &x);
    int s =0;
    while(x >0)
    {
        x-=5;
        s++;
        
    }
    printf("%i\n",s);
}
