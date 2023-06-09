#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[74]={142,112,54,69,148,45,63,158,38,60,124,142,130,179,117,36,191,43,89,107,41,143,65,49,47,6,91,130,171,151,7,102,194,149,30,24,85,155,157,41,167,177,132,109,145,40,27,124,138,139,119,83,130,142,34,116,40,59,105,131,178,107,74, 187,22,146,125,73,71,30,178,174,98,113};
        class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int A[], int n, long long k)
    {
        int L = 0;
        int R = 0;
        int sum = 0;
        
        while(L < n){
            sum += A[L];
            
            if(sum == k)
                return {R+1, L+1};
            if(sum > k){
                sum = 0;
                R++;
                L = R - 1;
            }
            L++;
        }
        return {-1};
    }
};
return 0;
}