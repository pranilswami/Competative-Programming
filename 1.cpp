#include<iostream>
using namespace std;

int palindrome(int num)
{
    int rev=0,rem=0;
    int temp=num;
    while(num)
    {   rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(rev==temp)
    return 1;
    else 
    return 0;
}
int main()
{
    int num,res;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"False"<<endl;
        return 0;
    }
    if(palindrome(num)==1)
    {
        cout<<"True"<<endl;
    }
    else 
    cout<<"False"<<endl;
    return 0;

}