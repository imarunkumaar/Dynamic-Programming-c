#include <stdio.h>
void dooit(int arr[],int f,int t,int m){
    int i=f;
    int j=m+1;
    int temp=0;
    int size=sizeof(arr)/sizeof(int);
    int temparr[t-f+1];
    while(i<=m && j<=t){
        if(arr[i]<arr[j]){
            temparr[temp]=arr[i];
            i++;temp++;
        }
        else{
            temparr[temp]=arr[j];
            j++;temp++;
        }
    }
    while(i<=m){
        temparr[temp]=arr[i];
        i++;temp++;
    }
    while(j<=t){
        temparr[temp]=arr[j];
        j++;temp++;
    }
    temp--; //Decrement once to be at the last stored value
    while(temp >= 0)
    {
        arr[f+temp] = temparr[temp];
        temp--;
    }
}

void doit(int arr[],int f,int t){
    if(f<t){
        int m=(f+t)/2;
        doit(arr,f,m);
        doit(arr,m+1,t);
        dooit(arr,f,t,m);
    }
}

int main()
{
    int l;
    scanf("%d",&l);
    int arr[l];
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    int f=0;
    int t=l-1;
    doit(arr,f,t);
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }
}
