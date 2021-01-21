#include <stdio.h>

int main() 
{
    int n,k;

    scanf("%d%d", &n,&k);
    int p[n];
    
    for(int i = 0; i < n; i++)
    {
        int aux;
        scanf("%d", &aux);
        p[i] = aux;
        
    }
    int max = p[k-1];
    int w = 0; 
    
    for(int i = 0; i < n; i++)
    {
        if(p[i] >=  max && p[i] > 0) w++;
        else break;
    }
    printf("%d\n", w);
    
    return 0;
}
