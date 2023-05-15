#include<iostream>
#include<cmath>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int sum=0;
    int o=n;
    int l;
    while(n>0){
         l=n%10;
        // cout<<l<<endl;
        sum+=pow(l,3);
        n=n/10;
        
    // }cout<<sum<<endl;
    }
    if(sum==o){
        cout<<" is an amstrong no."<<endl;
    }else{
        cout<<"Not";
    }
    return 0;
}
