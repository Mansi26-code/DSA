#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,5,6};
    char ch[6]="MANSI";
cout<<"Address of array is"<<&arr<<endl; //aise hum log adderss bta skte hain
cout<<"Address of the first element is"<<&arr[0]<<endl;
cout<<"The first element is"<<*arr<<endl;//ye first address pr kn si number h ye bata rha
cout<<"now lets see"<<*arr+1<<endl;//first position pr jo element h usme +1 krdo
cout<<"now lets see"<<*(arr+1)<<endl;//second address pr jo element h vo
cout<<"now lets see"<<1[arr]<<endl;
int temp[10];
cout<<sizeof(temp)<<endl;
int *ptr=&temp[0];
cout<<sizeof(ptr)<<endl;//address ko store krne k liye 8
cout<<sizeof(*ptr)<<endl;//is address pr jo value h usko stoee krne k liye 4
cout<<sizeof(&ptr)<<endl;//adress btata h
cout<<arr<<endl;//yhi difference h array aur string me arr sirf first element ka address deta h 
cout<<ch<<endl;//but ch vo poora ka poora character dedeta h
char *c=&ch[0];
cout<<c<<endl;//prints entire string
char temp='z';
//char *p=&temp;
//cout<<p<<endl;
return 0;
}