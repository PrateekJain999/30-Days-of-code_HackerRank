#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int maxSum=-64;  
    int hrSum;   
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            hrSum=arr[i+1][j+1];    
            for(int k=0;k<3;k++)
                {                   
                    hrSum = hrSum + arr[i][j+k] + arr[i+2][j+k]; 
                }             
            if(hrSum > maxSum)         
                maxSum = hrSum;       
        }      
    }     
    cout<<maxSum;

    return 0;
}

