#include <iostream>

using namespace std;


void adda(string& s, int v, char n)
{
    for(int i = 0; i < v; i++ )
    {
        s+= n; 
        s+= '+';
    }
}

int main()
{
    string a; 
    cin >> a;

    int b[3] = {0,0,0};

    for(int i = 0; i < a.length(); i++ )
    {
        if('1' == a[i]) b[0]++;
        if('2' == a[i]) b[1]++;
        if('3' == a[i]) b[2]++;
    }
    
    string output = "";
    adda(output, b[0],'1');
    adda(output, b[1],'2');
    adda(output, b[2],'3');
    
    output.pop_back();
    
    cout << output << "\n";

}
