#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int ans =0;
int n=0;
int pos[100];
bool ok(int r,int c){
    for(int i=0;i<r;i++){
        if(pos[i]==c)return false;
        if(abs(pos[i]-c)==r-i)return false;
    }
    return true;
}
void dfs(int r){
    if(r == n){
        ans++;
        if(ans<=3){
            for(int i=0;i<n;i++){
                cout<<pos[i]+1<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int c=0;c<n;c++){
        if(ok(r,c)){
            pos[r]=c;
            dfs(r+1);
            pos[r]=-1;
        }
    }

}
int main(){
    system("chcp 65001>nul");
    cin>>n;
    for(int i=0;i<=n;i++){
        pos[i]=-1;
    }
    dfs(0);
    cout<<ans<<endl;
    return 0;
}