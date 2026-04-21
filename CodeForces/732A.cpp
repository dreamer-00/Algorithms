#include<iostream>
using namespace std;
int main(){
    int k, r;
    cin>>k>>r;
    for (int i=1; i<=10; i++){
        int last_digit=(k*i)%10;
        if(last_digit==0 || last_digit==r){
            cout<<i<<"\n";
            break;
        }
        
    }
    return 0;
}