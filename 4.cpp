#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    int num1[]={1,3,5,7};
    int num2[]={2,4,6,8};
    int i=0,j=0,k=0;
    int num1_size=0,num2_size=0,temp_size;
    num1_size = sizeof(num1)/4;
    num2_size = sizeof(num2)/4;
    temp_size = num1_size + num2_size;
    int temp[temp_size];
    for(i=0,j=0,k=0; i<num1_size||j<num2_size||k<temp_size; k++)
    {
        if(num1[i]<num2[j])
        {
            temp[k]=num1[i];
            i++;
        }
        else
        {
            temp[k]=num2[j];
            j++;
        }
            cout<<temp[k];

    }
   
    cout<<endl;
    
    int num=0;
    double median;
    if(temp_size%2==0)
    {
        num = temp_size/2;
        median=(temp[num]+temp[num-1])/2.00;
    }
    else
    {
        median = temp_size/2.00;
    }
   
    cout<<"Median of merged array : "<<median;
    return 0;
}