#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    string name;
    long num;
    
    cin >> n;
    cin.ignore();
    
    map <string,long> phnbook;
    
    for (int i=0;i<n;i++)
    {
        cin >> name;
        cin >> num;
        phnbook[name] = num;
    }
    
    while(cin>>name) 
    {
        if (phnbook.find(name)!=phnbook.end())
            cout<<name<<"="<<phnbook.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}

