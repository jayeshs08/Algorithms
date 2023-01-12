#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>ar)
{
    int i,j;
    int min;
    for(i=0;i<ar.size();i++)
    {
        min=i;
        for(j=i+1;j<ar.size();j++)
        {
            if(ar[j]<ar[min])
            {
                min=j;
            }
        }
        swap(ar[i],ar[min]);
    }
    cout<<"SORTING . . . . "<<endl;
    for(int i:ar)
    cout<<i<<" ";
}
int main()
{
    vector<int>ar={10,55,28,44,98,18,20,10,76,54};
    selectionSort(ar);
}