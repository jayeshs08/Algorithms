#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>ar,int l,int m,int r)
{
    
}
void mergeSort(vector<int>ar, int l,int r)
{
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        mergeSort(ar,l,mid);
        mergeSort(ar,mid+1,r);
        merge()
    }
}