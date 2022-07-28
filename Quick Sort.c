#include <stdio.h>
void doit(int arr[],int s,int e){
    if(s<e){
        int pivot=dopivot(arr,s,e);
        doit(arr,s,pivot-1);
        doit(arr,pivot+1,e);
    }
}
int dopivot(int arr[],int s,int e){
    int pivot=arr[e];
    int placer=s;
    int temp;
    for(int i=s;i<e;i++){
        if(arr[i]<=pivot){
            temp=arr[i];
            arr[i]=arr[placer];
            arr[placer]=temp;
            placer++;
        }
    }
    temp=arr[e];
    arr[e]=arr[placer];
    arr[placer]=temp;
    return placer;
    
}

int main()
{
    int l;
    scanf("%d",&l);
    int arr[l];
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    
    doit(arr,0,l-1);
    
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
