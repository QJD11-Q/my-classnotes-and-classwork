#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	int factor = 1;
	for(int i=n; i>=2; i--){
		factor *=i;
	}
	printf("%d!=%d\n", n, factor);
	return 0;
}
