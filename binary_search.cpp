
#include<iostream>
using namespace std;




int main(int argc, char const *argv[])
{

   int arr[3] ={3,2,4};
   int n;
   cin>>n;
   for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
        if(arr[i]+arr[j]==n){
           cout<<(i,j);
        }
        else{
           cout<<-1;
        }
    }
   }
    
   



    return 0;
}
