#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%i", &t);
    int out[t];

    for(int i = 0; i < t; i++)
    {
        int n;
        int numbers[n];
        scanf("%i",&n);

        for(int x = 0; x < n; x++)
        {
            int lol;
            cin >> lol;
            numbers[x]= lol;
        }

        int colors = 0;
        for(int j = 0; j < n; j++)
        {
            for(int l = n-j; l >= j; --l)
            {
                if(numbers[l] >= numbers[j])
                {
                    colors++;
                    break;
                }
                
            }
        }
        out[i] = colors;

    }

    for(int i = 0; i < t; i++)
    {
        printf("%i\n",out[i]);
    }

}
