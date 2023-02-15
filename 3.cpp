#include<iostream>
using namespace std;
int main()
{
    int size,greatest=0,index=0,i=0;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size],start=0,end=0,mid=0,ans=0;
    cout<<"Enter the array"<<endl;//array must be mountain type
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    start=0;
    end=size-1;
    while(start<end)
    {
        mid = (start+end)/2;
        if(arr[mid-1]<arr[mid])
        {
            if(arr[mid+1]<arr[mid])
            {
                ans=mid;
                break;
            }
            start=mid;
        }
        else
        {
            end=mid;
        }
    }
    cout<<mid;
    return 0;
}