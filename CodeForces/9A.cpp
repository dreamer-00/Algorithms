#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int y, w; cin>>y>>w;
    int x = max({y,w});
    int win = 7-x;
    if(win==1){
        cout<<"1/6\n";
    }
    if(win==2){
        cout<<"1/3\n";
    }
    if(win==3){
        cout<<"1/2\n";
    }
    if(win==4){
        cout<<"2/3\n";
    }
    if(win==5){
        cout<<"5/6\n";
    }
    if(win==6){
        cout<<"1\n";
    }
    return 0;
}