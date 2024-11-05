//print n-1 natural no
#include<iostream>
using namespace std;
int print(int n)
{
    if(n>0)
    cout<<n<<endl;
    print(n-1);
}
//driver code
int main()
{int n=10;
    print(n);
    return 0;
}