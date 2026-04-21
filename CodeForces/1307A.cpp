#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int max_gcd=0;
        for(int i=1; i<n; i++){
            max_gcd=max({max_gcd, i, i+1});
        }
        cout<<max_gcd<<"\n";  
    }
    return 0;
}