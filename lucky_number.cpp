#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int cnt=0;
    while (n>0) 
    {
        /* code */
        int rem=n%10;
        if(rem ==7 || rem==4) cnt++;
        n/=10;
    }
    while(cnt>0)
    {
        int v=cnt%10;
        if(v!=7 || v!=4)
        { 
            break;
        }
        cnt/=10;
    } 
    if (cnt==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
}