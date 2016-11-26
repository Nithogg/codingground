#include<stdio.h>

int main(void)	{
	long long fat;
	int n;
	
	printf("n:\n");
	scanf("%lld", &n);
	
	for(fat = 1; n > 1; n = n - 1){
    fat = fat * n;
	}
printf("fat: %lld", fat);
return 0;
	}