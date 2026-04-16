#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int left=0;
    int right=n-1;
    int sumA=0;
    int sumB=0;
    bool turn =true;
    while(left<=right){
        int picked;
        if(a[left]>a[right]){
            picked=a[left];
            left++;
        }
        else{
            picked=a[right];
            right--;
        }
        if(turn){
            sumA+=picked;
        }
        else{
            sumB+=picked;
        }
        turn=!turn;
    }
    cout<<sumA<<" "<<sumB<<"\n";
    return 0;
}
