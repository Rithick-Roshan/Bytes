#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	if((n>>3) && (!(n-8)))
  	printf("PERFECT");
	else if(n>>3)
   	printf("MORE");
	else
    	printf("LESS");
}
