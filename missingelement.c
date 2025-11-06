#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,9,10};
    int sum =0;
    int x;
    for (int i=0;i<=8;i++){
        sum=sum+arr[i];
    }
    int sum2=10*(10+1)/2;//s=n(n+1)/2
    x=sum2-sum;
    printf("missing element %d",x);
    return 0;
}