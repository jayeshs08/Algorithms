//if there are no elements to swap we break out of loop(already sorted)
#include<iostream>
#include<vector>
using namespace std;
void modifiedBubble(vector<int>ar)
{
    int i,j,flag=0;
    for(i=0;i<ar.size()-1;i++)
    {
        flag=0;
        for(j=0;j<ar.size()-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(ar[j],ar[j+1]);
                flag=1;
            }
        } 
        
        if(flag==0)
        break;
    }
    
    for(int x:ar)
    {
        cout<<x<<" ";
    }
}
int main()
{
    vector<int>ar={10,55,23,88,19,10,10,67,51};
    modifiedBubble(ar);
    cout<<"AFTER SORTING\n";

}