#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string out[t];
    
    for(int i = 0; i < t; i++)
    {
        long long int n;
        int d = 0;
        cin >> n;
        if(n == 1)
        {
            out[i] = "NO";
            continue;
        }


        if(n % 2 == 0)
        {
            while(n > 0)
            {
                if((n % 2) != 0 && n !=1)
                {
                    d = 1;      
                    out[i] = "YES";
                }
                n/=2;
            }
        }
        else{
            d = 1;
            out[i] = "YES";
        }


        if(!d)
        {
            out[i] = "NO";
        }
        
    }

    for(int i = 0; i < t; i++)
    {
        cout << out[i] << "\n";
    }
}
