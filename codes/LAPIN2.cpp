#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int a[27]={0},b[27]={0},n=str.size();
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            a[str[i]-'a']++;
            b[str[j]-'a']++;
        }
        bool flag = true;
        for(int i=0;i<27;i++)
        {
            if(a[i]!=b[i])
                flag = false;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
