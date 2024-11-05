//print all set of input
#include<iostream>
#include<string.h>
using namespace std;
//function for finding all sets of string
void powerset(string str,int index=-1,string curr=""){

int n=str.length();
//base case
if(index==n)
return;
//print current subset
cout<<curr<<endl;
//try appending others remaining characters
//to current subset
for(int i=index+1;i<n;i++)
{
    curr+=str[i];
    powerset(str,i,curr);
    curr.erase(curr.size()-1);
}
}
//driver code
int main()
{
    string str="abc";
    powerset(str);
    return 0;
}