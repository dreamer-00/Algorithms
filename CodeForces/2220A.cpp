#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        bool possible=true;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.rbegin(), a.rend());
        for(int i=0; i<n-1; i++){
            if(a[i]==a[i+1]){
                possible=false;
            }
        }
        if(!possible){
            cout<<-1<<"\n";
        }
        else{
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}