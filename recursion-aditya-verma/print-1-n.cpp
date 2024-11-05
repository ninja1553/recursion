//print no from 1-n with the help of recursion
#include<iostream>
using namespace std;
//print function
int print(int n)
{
    if(n==0)
    return 1;
    print(n-1);
    cout<<n<<endl;
}
int main()
{ int n=10;
    print(n);
    return 0;
}