#include<iostream>
#include<deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        deque<int> mydeque;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mydeque.push_back(x);
        }
        deque<int>::iterator it;
        int right=n-1,left=0,value=0;
        bool flag = true;
        while(left<=n/2)
        {
            if(value!=mydeque[left] && value<7)
                value++;
            if(mydeque[left]==mydeque[right] && mydeque[left]==value)
            {
                mydeque.pop_front();
                mydeque.pop_back();
            }
            else if(mydeque[left]!=mydeque[right])
            {
                flag = false;
                break;
            }   
            left++;
            right--;    
        }

    }
}