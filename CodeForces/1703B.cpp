#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        set<char> unique_problems;
        for (char c : s){
            unique_problems.insert(c);
        }
        int result = n + unique_problems.size();
        cout<<result<<"\n";
    }
    return 0;
}