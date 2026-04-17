#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.length();
        string result="";
        for(int i=0; i<n; i++){
            if(i%2==0){
                result+=s[i];
            }
        }
        result+=s[n-1];
        cout<<result<<"\n";
    }
    return 0;
}