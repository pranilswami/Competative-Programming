#include<iostream>
using namespace std;
void setdata(int arr1[],int size)
{
    int i=0;
    for(i=0; i<size; i++)
    cin>>arr1[i];
}
void calculate(int arr1[],int size,int arr2[])
{
    int i=0,j=0,multi=1,check=0;
    for(i=0; i<size; i++)
    {
        if(arr1[i]==0)
        check++;
    }
    cout<<check<<endl;
    for(i=0; i<size; i++)
    {
        if(arr1[i]!=0)
        multi = multi * arr1[i];
    }
    for(i=0; i<size; i++)
    {
        if(check==1)
        {
            if(arr1[i]!=0)
            arr2[i]=0;
            else
            arr2[i]=multi;
        }
        else if(check>1)
        {
            arr2[i]=0;
        }
        else
        arr2[i] = multi/arr1[i];
    }
}
void display(int arr2[],int size)
{
    int i=0;
    cout<<"Output is : "<<endl;
    for(i=0; i<size; i++)
    cout<<arr2[i]<<" ";
}
int main()
{
    int size=0;
    cout<<"Enter number of items\n";
    cin>>size;
    int arr1[size],arr2[size];
    cout<<"Enter array"<<endl;
    setdata(arr1,size);
    calculate(arr1,size,arr2);
    display(arr2,size);
}