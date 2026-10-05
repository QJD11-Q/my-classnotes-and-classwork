#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i=1;
	int factor=1;
	while(i <= n){
		factor *=i;
		i++;
	}
	printf("%d\n", factor);
	return 0;
}
