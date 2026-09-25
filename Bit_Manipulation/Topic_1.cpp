// Converting the Decimal to Binary Numbers

#include <iostream>
#include <algorithm>
using namespace std;


int Convert2Decimal(string x)
{
    int len = x.length();
    int num = 0;
    int p2 = 1;
    for(int i = len - 1; i > 0; i--)
    {
        num = num + p2;
        p2 = p2 * 2;
    }

    return num;
}

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

    // Let's see some other conversion
    string s = "1101";
    cout<<Convert2Decimal(s)<<'\n';

    return 0;
}