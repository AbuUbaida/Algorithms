#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int key;
    cout<<"key:";
    cin>>key;


    int l=0,h=n-1;
    bool found=false;
    while(l<=h && found==false)
    {
        int m=(l+h)/2;
        if(ara[m]>key)
            h=m-1;
        else if(ara[m]<key)
            l=m+1;
        else
            found=true;
    }

    if(found==true)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
}
