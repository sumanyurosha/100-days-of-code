#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b,bob="bob";
	    cin>>a>>b;
	    list<pair<char,char> > mylist;
	    list<pair<char,char> >::iterator it;
	    for(int i=0;i<3;i++)
	    {
	        mylist.push_back(pair<char,char>(a[i],b[i]));
	    }
	    for(int i=0;i<3;i++)
	    {
            cout<<i;
	        for(it=mylist.begin();it!=mylist.end();it++)
	        {
                cout<<"v";
	            if(bob[i]==it->first || bob[i]==it->second)
	            {
	                mylist.erase(it);
	                break;
	            }
	        }
            cout<<endl;
	    }
	    if(mylist.size()==0)
	        cout<<"yes\n";
	    else
	        cout<<"no\n";
	}
	return 0;
}
//boc obo bo ob co
//