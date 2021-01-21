#include <iostream>
using namespace std;

int main() 
{
    string a,b;
    cin >> a >> b;
    
    for(int i = 0; i < a.length(); i++)
    {
        if(tolower(a[i]) > tolower(b[i])) 
        {
            printf("1\n");
            return 0;

        }
        else if(tolower(a[i]) < tolower(b[i])) 
        {
            printf("-1\n");
            return 0;
            
        }
    }
    printf("0\n");
    return 0;
}
