#include<bits/stdc++.h>
using namespace std;

int binarySearch (vector<int>ar, int l,int h,int key)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(ar[mid]==key)
        {
            return mid;
        }
        else if(key>ar[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;

}
int main()
{
    int ans;
    vector<int>ar={10,20,30,40,50,60,70,80};
    ans = binarySearch(ar,0,ar.size()-1,50);
    if(ans==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"Element at "<<ans+1<<endl;
    }
    
    ans = binarySearch(ar,0,ar.size()-1,58);
    if(ans==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"Element at "<<ans;
    }
    
}