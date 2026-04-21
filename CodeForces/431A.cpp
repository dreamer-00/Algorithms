#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        vector<int> a(5);
        for(int i=1; i<=4; i++){
            cin>>a[i];
        }
        int sum =0;
        string s; cin>>s;
        for (char c : s){
            if(c=='1'){
                sum+=a[1];
            }
            else if(c=='2'){
                sum+=a[2];
            }
            else if(c=='3'){
                sum+=a[3];
            }
            else if(c=='4'){
                sum+=a[4];
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}