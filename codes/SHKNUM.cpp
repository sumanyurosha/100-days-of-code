#include<bits/stdc++.h>
using namespace std;
int powersOfTwo[33];
void generate()
{
    int x=1;
    for(int i=0;i<32;i++)
    {
        powersOfTwo[i]=x;
        x=x<<1;
    }
}
int findClosestPowerOfTwo(int value)
{
    int closest,index;
    //some searching algo
    for(int i=0;i<31;i++)
    {
        if(powersOfTwo[i]<=value && powersOfTwo[i+1]>value)
         {  
            index = i;
            //cout<<powersOfTwo[i]<<"\n";
         }
    }
    closest = abs(value-powersOfTwo[index])<abs(value-powersOfTwo[index+1])?index:index+1;
    closest = powersOfTwo[closest];
    return closest;
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    generate();
    while(t--)
    {
        int n;
        cin>>n;
        int stepOne = findClosestPowerOfTwo(n);
        cout<<stepOne<<"\n";
        int difference = abs(n-stepOne);
        int stepTwo = findClosestPowerOfTwo(difference);
        cout<<stepTwo<<"\n";
        int m = stepOne + stepTwo;
        cout<<abs(m-n)<<"\n";
    }
    return 0;
}