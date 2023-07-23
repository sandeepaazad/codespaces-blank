#include<iostream>
using namespace std;
//to get maximum value from array
int getMax(int num[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
//to get minimum value from array
int getMin(int num[],int n)
{
    int min=INT_MAX;
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
    cout<<"Enter the value of n: ";
    cin>>size;
    int num[1000];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"Maximum value is: "<<getMax(num,size)<<endl;
    cout<<"Minimum value is: "<<getMin(num,size)<<endl;

    return 0;
}
