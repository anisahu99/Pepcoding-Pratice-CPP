#include<bits/stdc++.h>
using namespace std;
int solution(int n,int qb[]){
    if(n==0||n==1)
    return n;
    if(qb[n]!=0)
    return qb[n];
    int fibn=solution(n-1,qb)+solution(n-2,qb);
    qb[n]=fibn;
    return fibn;
}