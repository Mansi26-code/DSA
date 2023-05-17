#include<iostream>
using namespace std;
#include<math.h>

int getMax (int num[],int n)
{ 
    int max=num[0];
    for( int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
return max;
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
cout<<"THE MAX VALUE IS"<<getMax(num,size)<<endl;
}