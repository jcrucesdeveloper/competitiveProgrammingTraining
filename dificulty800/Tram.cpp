#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s, p = 0;
    scanf("%i",&s);

    
    int c = 0;

    for(int i = 0; i < s; i++)
    {
        int a,b;
        scanf("%i%i",&a,&b);
        c -= a;
        c += b;
        p = max(p,c);
    }
    printf("%i\n", p);
}
