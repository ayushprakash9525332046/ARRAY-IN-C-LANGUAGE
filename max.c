#include<stdio.h>
int main(){
    int arr[10]={2,23,34,45,56,57,46,48,26,25};
    int max=0;
    for(int i=0;i<=9;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    printf("%d",max);
    return 0;
}