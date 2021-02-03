#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int a;
    cin >> a;
    
    if(a/10 ==0)
    {
        printf("NO\n");
        return 0;
    }

    int c1,c2;
    c1 = c2 = 0;

    while(a != 0)
    {
        int b = a %10;
        if(b == 7 || b == 4) c1++;
        a/=10;

    }


    if(c1 == 7 || c1 == 4)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    
}
