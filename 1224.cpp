#include <iostream>
using namespace std;



int main(){
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
        if (zeros==ones)
        {
            return 0;
        }
        if(zeros==0){
            return ones;
        }
        if(ones==0){
            return zeros;
        }
        //changing 0-->1 && 1-->0
        if(s[i]==1){
            s[i] = 0;
            zeros--;
        }
        else{
            s[i]=1;
            ones--;
        }
    }
    return 0;
}