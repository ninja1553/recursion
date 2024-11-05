//tower of hanoi
#include<iostream> 
using namespace std;
//tower of hanoi function
void towerofhanoi(int s,int h,int d, int n)
{
    if(n==0){
         
        return ;
    }
    towerofhanoi(s,d,h,n-1);
    cout<<"moving "<<n<<"from "<<s<<" to "<<d<<endl;
 towerofhanoi(h,s,d,n-1);

}      
 
//driver function
int main()
{
    int n;
    int count=0;
    cout<<"enter value of disk";
    cin>>n;
    int s=1;
    int h=2;
    int d=3;
towerofhanoi(s,h,d,n);
 
    
    return 0;
}