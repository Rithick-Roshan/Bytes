#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	if(!(n-8))
  	printf("PERFECT");
	else if((n-8)>>15)
   	printf("LESS");
	else
    	printf("MORE");

}
