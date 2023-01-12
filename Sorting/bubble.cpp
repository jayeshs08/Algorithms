#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>ar)
{
    cout<<"SORTING . . . . . . . . "<<endl;
    int i,j;
    for(i=0;i<ar.size()-1;i++)
    {
        for(j=i+1;j<ar.size();j++)
        {
            if(ar[j]<ar[i])
            {
                swap(ar[j],ar[i]);
            }
        }
    }
    for(int i : ar)
    {
        cout<<i<<" ";
    }

}
int main()
{
    vector<int>ar={10,55,28,44,98,18,20,10,76,54};
    bubbleSort(ar);
}