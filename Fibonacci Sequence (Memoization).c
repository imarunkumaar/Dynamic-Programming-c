#include <stdio.h>
int fun(int *arr,int n){
    if(arr[n]==-1){
        arr[n]=fun(arr,n-1)+fun(arr,n-2);
    }
    return arr[n];
}

int main()
{
    int n=7;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=-1;
    }
    arr[0]=0;
    arr[1]=1;
    fun(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
