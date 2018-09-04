#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int current_sum=0,max_sum=0;
        for(int i=0;i<n;i++){
            current_sum += a[i];
            if(current_sum < 0)
                current_sum = 0;
            if(max_sum < current_sum)
                max_sum = current_sum;
        }
        cout<<max_sum<<"\n";
    }
    return 0;
}