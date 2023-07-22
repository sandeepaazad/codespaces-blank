#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;

}

int nCr(int n,int r)
{
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);
    int answer=(num/den);
    return answer;
}

int main()
{
    int n,r;
    cout<<"Enter the value of n & r: ";
    cin>>n>>r;
    cout<<"The answer: "<<nCr(n,r);
    return 0;


}