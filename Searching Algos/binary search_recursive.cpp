#include<bits/stdc++.h>

using namespace std;

int key;
bool found;

bool bs(int l,int h,int ara[])
{
    int m=(l+h)/2;

    if(ara[m]==key)
        return true;

    if(ara[m]>key)
        bs(l,m-1,ara);
    else if(ara[m]<key)
        bs(m+1,h,ara);
    else
        found=true;
}

int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);

    cout<<"key:";
    cin>>key;

    int l=0,h=n-1;
    found=false;

    found=bs(l,h,ara);

    if(found==true)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
}
