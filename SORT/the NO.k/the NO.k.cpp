#include <iostream>
using namespace std;

const int N = 1e6+10;
int q[N];
int n,k;

int quick_choose(int q[],int l,int r,int k){
    if(l==r)return q[l];
    int x=q[(l+r)/2],i=l-1,j=r+1;
    while(i<j){
        do i++;while(q[i]<x);
        do j--;while(q[j]>x);
        if(i<j)swap(q[i],q[j]);
    }
    if(k>j)quick_choose(q,j+1,r,k-j);
    if(k<j)quick_choose(q,l,j,k);
}

int main(){
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",&q[N]);
    quick_choose(q,0,n-1,k);
    for(int i=0;i<n;i++)printf("%d",q[N]);
}