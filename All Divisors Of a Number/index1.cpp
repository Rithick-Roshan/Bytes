class Solution {
  public:
	void print_divisors(int n) {
    	int sqr=sqrt(n);
    	for(int i=1;i<=sqr;i++){
        	if(n%i==0){
            	printf("%d ",i);
        	}
    	}
    	if(sqr*sqr==n)
        	sqr--;
    	for(int i=sqr;i>0;i--)
    	{
        	if(n%i==0){
            	printf("%d ",n/i);
        	}
    	}
	}
};
