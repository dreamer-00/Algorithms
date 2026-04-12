#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> y(n);
    for(int i=0; i<n; i++){
        cin>>y[i];
        y[i]+=k;
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(y[i]<=5){
            count++;
        }
    }
    cout<<(count/3)<<"\n";
    return 0;

}