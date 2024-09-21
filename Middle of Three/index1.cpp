
class Solution{
  public:
	int middle(int A, int B, int C){
    	int a=((A-B)>>31)^((A-C)>>31);
    	int b=((B-A)>>31)^((B-C)>>31);
    	int c=((C-B)>>31)^((C-A)>>31);
    	if(a)
       	return A;
    	else if(b)
       	return B;
    	else
       	return C;
	}
};
