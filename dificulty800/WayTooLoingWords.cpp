#include <iostream>
using namespace std;

int main() 
{

    int n;
    scanf("%i",&n);
    string output[n];

    for(int i = 0; i < n; i++)
    {
        string a; 
        cin >> a; 
        
        if(a.length() > 10) 
        {
            int l = a.length() - 2;
            string ls = to_string(l);
            output[i] = a[0] + ls + a[a.length()-1];

        }
        else {
            output[i] = a;
        }
        
    }

    for(int i = 0; i < n; i++) 
    {
        cout << output[i] << "\n";
    }


    return 0;

}
