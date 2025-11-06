#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int sumOfeven=0;
    int sumOfodd=0;
    for (int i=0;i<=7;i++){
        if(arr[i]%2==0)
        sumOfeven=sumOfeven+arr[i];
        else
        sumOfodd=sumOfodd+arr[i];
    }
    int diff=sumOfeven-sumOfodd;
    printf("%d",diff);
}