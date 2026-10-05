#include<stdio.h>
#include<stdlib.h>

int main(){
    system("chcp 65001 > nu1");
    printf("请输入两个整数:");
    int a,b;
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("较大的数是：%d\n", a);
    }
    else if(a<b){
        printf("较大的数是：%d\n", b);
    }
    else{
        printf("两个数一样大，为：%d\n", a);
    }

    return 0;

}