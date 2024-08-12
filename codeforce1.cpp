#include <iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;

    int size= s.size();
    int sum =0;
 //size of string
    for(int i=0;i<size;i++){
        sum+=s[i];
    }
    int ones = sum;
    int zeros = size-sum;

    for (int i = 0; i < size; i++)
    {
        //0==1
        if(zeros==0 && ones ==0){
            cout<<1;
        }
        if (zeros==ones)
        {
            cout<<0;
        }
        else if(zeros==0){
            cout<<ones;
        }
        else if(ones==0){
            cout<<zeros;
        }
        //changing 0-->1 && 1-->0
        else if(s[i]==1){
            s[i] = 0;
            zeros--;
        }
        else{
            s[i]=1;
            ones--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    
    return 0;
}