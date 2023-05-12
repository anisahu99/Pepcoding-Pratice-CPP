#include<bits/stdc++.h>
using namespace std;
int getRev(int n){
    int rev=0;
    while(n!=0){
        int lb=(n&1);
        rev |=lb;
        rev <<=1;
        n >>=1;
    }
    rev >>=1;
    return rev;
}
int Solution(int n){
    int count=1;
    int lengthOfbits=1;
    while(count<n){
        /* Calculating the number of elements in the previous level. */
        int Elements=(1<<((lengthOfbits-1)/2));
        /* Adding the number of elements in the previous level. */
        count +=Elements;
    }
    /* Subtracting the number of elements in the previous level. */
    count=count-(1<<((lengthOfbits-1)/2));
    /* Calculating the offset of the element in the current level. */
    int offset=n-count-1;
    /* Calculating the value of the element in the previous level. */
    int ans=(1<<((lengthOfbits-1)/2));
    ans |=(offset<<(lengthOfbits/2));
    /* Reversing the bits of the value of the element in the previous level. */
    int valFR=(ans>>(lengthOfbits/2));
    int rev=getRev(valFR);
    return ans;
}
int main()
{
    int n;
    Solution(n);
return 0;
}