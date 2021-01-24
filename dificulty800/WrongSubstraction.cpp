#include <iostream>

using namespace std;

int main()
{
    string a;
    int b;
    cin >> a >> b;

    for(int i =0; i<b; i++)
    {
        if(a[a.length()-1] == '0')
        {
            int aa = stoi(a) / 10;
            a = to_string(aa);

        }
        else{
            
            int aa = stoi(a) -1;
            a = to_string(aa);

        }
    }

    cout << a << "\n";
}
