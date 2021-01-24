#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<char> mychars;
    string a;
    cin >> a;
    for(int i = 0 ; i < a.length(); i++)
    {
        mychars.insert(a[i]);
    }
    
    int s = mychars.size();
    if(s % 2 == 0 )
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    


}
