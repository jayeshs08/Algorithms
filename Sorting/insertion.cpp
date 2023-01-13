#include<iostream>
#include<vector>
using namespace std;
vector<int> insertionSort(vector<int>ar)
{
    int i,j,temp;
    for(i=1;i<ar.size();i++)
    {
        temp=ar[i];
        j=i-1;
        while(j>=0 && temp<ar[j])
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
    return ar;

}
int main()
{
    vector<int>ar = {18,20,5,55,10,10,28,30,70,40};
    ar = insertionSort(ar);
    for(int x: ar)
    {
        cout<<x<<" ";
    }
}