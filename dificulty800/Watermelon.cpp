#include <stdio.h>

int main()
{
    int a; 
    
    scanf("%i", &a);
    
    if(a % 2 == 0 && a != 2){
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;

}
