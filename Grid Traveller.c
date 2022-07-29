// grid traveler problem where you start in the top-left corner of a grid and you can only move left or down. 
// You need to return the amount of unique paths to get from the top-left corner to the bottom-right corner of the grid.
// comment: getting wrong answer getting some strange return values when I try (18,18) it goes to -> -1961361076 instead of 2333606220.

#include <stdio.h>
int fun(int r,int c,int m,int arr[][m]){
    if(arr[r][c]!=-1){return arr[r][c];}
    arr[r][c]=fun(r-1,c,m,arr)+fun(r,c-1,m,arr);
    return arr[r][c];
}
int main()
{
int r=18,c=18;
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==0 || j==0){
            arr[i][j]=1;
            }
        else{
            arr[i][j]=-1;
            }
        }
    }
int m=c;
printf("%d",fun(r-1,c-1,m,arr));
}
