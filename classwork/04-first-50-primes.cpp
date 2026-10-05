#include<stdio.h>
int main(){
	int x=2;
//	scanf("%d", &x);
	int i;
	int count = 0;
	for(count=0;count<50;){
	
	int isprime=1;
	for(i=2;i<x;i++){
		if(x % i == 0){
			isprime--;
			break; 
		}
	}
	if(isprime == 1){
		printf("%d\n", x);
		count++;
	}
	x++;
}
	return 0;
} 
