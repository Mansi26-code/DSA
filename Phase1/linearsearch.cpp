#include<limits.h>

#include<iostream>
using namespace std;
bool search (int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
int arr[5]={3,4,5,6,7};
cout<<"Enter the element you are searching for"<<endl;
int key;
cin>>key;
bool found=search(arr,5,key);
if(found)
{
    cout<<"Key is present"<<endl;
}
else{
    cout<<"Key is not present"<<endl;
}
return 0;
}