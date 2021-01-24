#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{

    string a; 
    cin >> a;
    int u,l;
    u = l = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(isupper(a[i])) u++;
        if(islower(a[i])) l++;

    }

    if(l >= u)
    {
        for(int i = 0; i < a.length(); i++)
        {
            a[i] = tolower(a[i]);
        }
    }
    else{

        for(int i = 0; i < a.length(); i++)
        {
            a[i] = toupper(a[i]);
        }
    }

    cout << a << "\n";
}
