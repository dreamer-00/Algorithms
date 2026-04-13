#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<int> prime{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int idx=-1;
    for(int i=0; i<15; i++){
        if(prime[i]==n){
            idx=i;
        }
    }
    if(prime[idx+1]==m){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    return 0;
}