#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        map<char,int> firstHalf,secondHalf;
        int n = str.size();
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            //for the First Half of the String
            //first find the character in map
            map<char,int>::iterator it;
            it = firstHalf.find(str[i]);
            //if match found, inc the count
            if(it==firstHalf.end())
                firstHalf.insert(pair<char,int>(str[i],1));
            //else insert into map
            //we need to erase it because map is immutable
            else
            {
                int occourance = it->second;
                firstHalf.erase(it);
                firstHalf.insert(pair<char,int>(str[i],++occourance));
            }
            
            //for Second Half of String
            //first find the character in map
            it = secondHalf.find(str[j]);
            //if match found, inc the count
            if(it==secondHalf.end())
                secondHalf.insert(pair<char,int>(str[j],1));
            //else insert into map
            //we need to erase it because map is immutable
            else
            {
                int occourance = it->second;
                secondHalf.erase(it);
                secondHalf.insert(pair<char,int>(str[j],++occourance));
            }
        }
        map<char,int>::iterator it, it2;
        bool flag = true;
        if(firstHalf.size()!=secondHalf.size())
            flag = false;
        else
        {
            for(it=firstHalf.begin(),it2=secondHalf.begin();it!=firstHalf.end(),it2!=secondHalf.end();it++,it2++)
            {
                if(it->first!=it2->first || it->second!=it2->second)
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true)
            cout<<"YES\n";
        else
            cout<<"NO\n"; 
    }
    return 0;
}