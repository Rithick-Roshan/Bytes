class Solution{
	public:
   	long long int Nth_mileSpeed(int n){
   	        if(n==1)
   	           return 1;
   	        if(n%2!=0){
   	            n=n/2+1;
   	            return pow(n,4);
   	        }
   	        else{
   	            n=n/2;
   	            return (pow(3,n-1)*7);
   	        }
   	        return 0;
   	
   	}    
};