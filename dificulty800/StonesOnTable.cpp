#include <iostream>

using namespace std;

int main()
{
    int n;
    string b;
    cin >> n;
    cin >> b;

    int out = 0;
    for(int i = 0 ; i < b.length()-1 ; i++)
    {
        if(b[i] == b[i+1]) out++;
    }
    cout << out << "\n";
            
}
