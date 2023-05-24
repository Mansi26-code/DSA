#include<iostream>
#include<math.h>
using namespace std;
int getMin (int num[],int n)
{
    int min=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"The answer is"<<getMin(num,size)<<endl;
}
