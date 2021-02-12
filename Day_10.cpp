#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int count=0,max=0;
    
    while(n)
    {
        if (n&1)
            count++;
        else 
            count = 0;
        if (max < count)
            max = count;
        n>>=1;
    }
    cout << max;

    return 0;
}

