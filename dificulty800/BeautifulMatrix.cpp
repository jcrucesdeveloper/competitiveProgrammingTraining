#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int a; 
            scanf("%i",&a);
            if(1 == a)
            {
                r = i;
                c = j;
                break;
            }
        }
    }
    
    int cd = abs(2 - c);
    int cc = abs(2 - r);
    int d = cc + cd;
    printf("%d\n",d);
        


}

