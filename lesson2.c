#include<stdio.h>
#include<stdlib.h>

int main(){
    system("chcp 65001 > nul");
    printf("请输入两个整数：");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum=a + b;
    printf("两个整数的和为%d\n", sum);
    printf("两个整数是%d %d\n", a, b);
    return 0;
}