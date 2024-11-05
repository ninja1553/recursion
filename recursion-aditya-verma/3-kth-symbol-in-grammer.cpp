//given : if n=1 and k=1 return 0  else for 01  and 10
 //  if[n,k]={0,0} 
 //for 0 return 01                              //// incomplete
// for 1 return 10
#include<iostream>
#include<cmath>
using namespace std;
int solve(int n,int k)
{
    if(n==1 && k==1)
    return 0;
    int mid=pow(2,n-1)/2;
    if(k<=mid)
    {
        return solve(n-1,k);
 
        }
        else
        return solve(n-1,k-1);
}


int main()
{
    int n=3,k=4;
    cout<<solve(n,k);
    return 0;
}