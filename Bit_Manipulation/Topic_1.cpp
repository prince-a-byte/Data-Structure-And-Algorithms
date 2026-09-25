// Converting the Decimal to Binary Numbers

#include <iostream>
#include <algorithm>
using namespace std;

string Convert2Binary(int x)
{
    string res = "";
    while(x != 1)
    {
        if(x%2 == 1) res += '1';
        else res+= '0';
        x = x/2;
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{

    // Let's see some example at work
    int a = 17;
    cout<<Convert2Binary(a)<<'\n';

    return 0;
}