#include<iostream>
#include<algorithm>
using namespace std;
int a[4][4];
int cnt=0;
bool ok(int c,int r,int v){
    for(int i=0;i<4;i++ ){
        if(a[i][r] == v)return false;
    }
    for(int j=0;j<4;j++ ){
        if(a[c][j] == v)return false;
    }
    int br=r/2*2;
    int bc=c/2*2;
    for(int i=bc;i<bc+2;i++){
        for(int j=br;j<br+2;j++){
            if(a[i][j]==v)return false;
        }
    }
    return true;
}
void dfs(int pos){
    if(pos == 16){
      /*  for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<a[i][j]<<" ";
                cout<<endl;
            }
            return;
        }*/
        cnt++;
        return;
    }
     int c=pos/4;
     int r=pos%4;
     for(int v=1;v<=4;v++){
        if(ok(c,r,v)){
            a[c][r]=v;
            dfs(pos+1);
            a[c][r]=0;
        }
     }
}
int main(){
    system("chcp 65001>nul");
    dfs(0);
    cout<<"有"<<cnt<<"个解";
    return 0;
}