  class Solution{
  public:
    long long reversedBits(long long x) {
         long long rev=0;
         for(int i=0;i<32;i++){
             rev<<=1;
             if( x & 1){
                 rev |= 1;
             }
             x>>=1;
         }
         return rev;
    }
};