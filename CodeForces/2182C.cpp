#include<iostream>
#include<vector>
using namespace std;
void solve(){
        int n; cin>>n;
        vector<int> a(n), b(n), c(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            cin>>c[i];
        }
        long long valid_AB=0;
        for(int shift=0; shift<n; shift++){
            bool is_safe=true;
            for(int i=0; i<n; i++){
                if(a[i]>=b[(i+shift)%n]){
                    is_safe=false;
                    break;
                }
            }
            if(is_safe){
                valid_AB++;
            }
        }
        long long valid_BC=0;
        for(int shift=0; shift<n; shift++){
            bool is_safe=true;
            for (int i=0; i<n; i++){
                if(b[i]>=c[(i+shift)%n]){
                    is_safe=false;
                    break;
                }
            }
            if(is_safe) valid_BC++;
        }
        long long total = n*valid_AB*valid_BC;
        cout<<total<<"\n";
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}