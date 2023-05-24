#include<iostream>
using namespace std;
bool isPresent(int arr[3][3],int target,int i,int j)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        if(arr[i][j]==target)
        {
            return 1;
        }
    }
    return 0;
}



int main()
{
    int arr[3][3];
    cout<<"enter an element to be searched"<<endl;
    int target;
    cin>>target;
    //create a 2d array
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++ )
        {
            cin>>arr[i][j];
        }
    }
    if (isPresent(arr,target,3,3))
    {
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
}