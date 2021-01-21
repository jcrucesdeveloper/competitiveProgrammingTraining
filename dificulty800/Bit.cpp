#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int r = 0;
    for(int i = 0; i < n; i++)
    {
        string a; 
        cin >> a;
        for(int j= 0; j < 3; j++) 
        {
            if(a[j] == '+') {
                r++;
                break;
            }
            else if(a[j] == '-') 
            {
                r--;
                break;
            }
        }
        
    }
    printf("%d\n", r);
    
    return 0;
}
