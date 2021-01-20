#include <stdio.h>

int main() 
{
    int n; 
    scanf("%d", &n);
    int p = 0;
    
    for(int i = 0; i < n; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c) > 1)
        {
            p++;
        }
        
    }
    printf("%d\n", p);
}
