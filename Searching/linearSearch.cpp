#include<iostream>
#include<vector>
using namespace std;

class Linear
{
    public:
    void linearSearch(vector<int>ar,int key)
    {
        int f=0;
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i]==key)
            {
                f=1;
                cout<<"Element found at position "<<i+1;
                break;
            }
        }
        if(f==0)
        cout<<"element not present"<<endl;
    }
};
int main()
{
    Linear obj;
    vector<int>ar={10,20,30,40,50,60,70,80};
    obj.linearSearch(ar,30); 
}