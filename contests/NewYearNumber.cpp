#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    string a[t];

    for(int i = 0 ; i < t; i ++)
    {
        int n;
        int n1,n2;
        cin >> n;
        n1 = n2 = n;
        
        if(n < 2021)
        {
            a[i] = "NO";
            continue;
        }

        bool xd = true;
        bool l = false;

        while(n1 >= 2020)
        {
            if((n1 % 2021) == 0)
            {
                a[i] = "YES";
                l = true;
                xd = false;
                break;
            }

            if((n1 % 2020) == 0)
            {
                a[i] = "YES";
                l = true;
                xd = false;
                break;
            }
            n1 -= 2021;
        }
        
        while(n2 >= 2020 && xd )
        {
            if((n2 % 2021) == 0)
            {
                a[i] = "YES";
                l = true;
                break;
            }
            if((n2 % 2020) == 0)
            {
                a[i] = "YES";
                l = true;
                break;
            }
            n2 -= 2021;
        }

        if(!l)
        {
            a[i] = "NO";
        }
    }

    for(int i = 0 ; i < t; i ++)
    {
        cout << a[i] << "\n";

    }

}
