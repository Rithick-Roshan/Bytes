class Solution
{
public:
    void printPattern(int N)
    {
        int len=2*N-1;
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                int min=i<j ? i:j;
                min=min<len-i ? min:len-i-1;
                min=min<len-j-1 ? min:len -j-1;
                printf("%d",N-min);
            }
            printf("\n");
        }
    }
};