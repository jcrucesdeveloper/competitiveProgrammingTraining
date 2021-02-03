#include <iostream>

using namespace std;

int main()
{
    int a,b;
    string c;
    scanf("%i%i",&a,&b);
    cin >> c;
    

    for(int j = 0; j < b; j++)
    {
        int a = 0;
        for(int i = 0; i < c.length()-1; i++)
        {

            if(a) {
                a--;
                continue;
            }

            if(c[i] == 'B' && c[i+1] =='G'){
                char temp;
                temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
                a++;
            }
        }
    }

    cout << c << "\n";
}
