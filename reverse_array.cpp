#include<iostream>
using namespace std;

//printing the array
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {cout<<arr[i]<<" ";}
    cout<<endl;
}
// reverse function
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{ 
    int size;
    cout<<"Enter ther array size:";
    cin>>size;
    int num[10000];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    reverse(num,size);
    cout<<"Answer is :";
    printarray(num,size);
    return 0;

}
