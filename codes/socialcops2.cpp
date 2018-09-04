#include<iostream>
using namespace std;
int leftShift(bool binary[],int d,int size){
    int result[16];
    for(int i=0;i<16;i++){
        int loc = (i+d)%size;
        result[loc] = binary[i];
    }
    int ans = 0;
    for(int i=0;i<16;i++){
        ans = ans + result[i]*(1<<i);
    }
    return ans;  
}
int rightShift(bool binary[],int d,int size){
    int result[16];
    for(int i=0;i<16;i++){
        int loc = (i + (size-d))%size;
        result[loc] = binary[i];
    }
    int ans = 0;
    for(int i=0;i<16;i++){
        ans = ans + result[i]*(1<<i);
    }
    return ans; 
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int size = 16;
        d = d%size;
        bool binary[16],result[16];
        for (int i = 15; i >= 0; i--){
            int k = n >> i;
            if (k & 1)
                binary[i]=1;
            else
                binary[i]=0;  
        }
        cout<<leftShift(binary,d,size)<<"\n";
        cout<<rightShift(binary,d,size)<<"\n";
    }
    return 0;
}