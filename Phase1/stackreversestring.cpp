#include<iostream>
#include<stack>
using namespace std;

int main()
    {
string str="mansi";
stack<char>s;
for(int i=0;i<str.length();i++)
{
char ch =str[i];
s.push(ch); //ek ek karke elements store ho rhe stack me

    }
    string ans="";
    while(!s.empty())//jb tk stack khaali nhi hojata tab tk
    {
        char ch =s.top();//topmost character ko extract kiya
        ans.push_back(ch);//usko lekr ans me store kiya
        s.pop();// fir un elements ko delete krte jao
    }
cout<<"The answer is"<<" "<<ans<<endl;

return 0;
}