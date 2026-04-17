#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int max_dist=0;
        for(int i=0; i<n-1; i++){
            int dist=abs(a[i+1]-a[i]);
            max_dist=max({max_dist, dist});
        }
        if(max_dist>1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}