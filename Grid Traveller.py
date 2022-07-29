# grid traveler problem where you start in the top-left corner of a grid and you can only move left or down. You need to return the 
# amount of unique paths to get from the top-left corner to the bottom-right corner of the grid.


def fun(r,c,memo):
    key=str(r)+','+str(c)
    if key in memo:
        return memo[key]
    if r==1 or c==1:
        return 1
    if r==0 or c==0:
        return 0
    memo[key]=fun(r-1,c,memo)+fun(r,c-1,memo);
    return memo[key];
    
r=int(input())
c=int(input())
memo={}
print(fun(r,c,memo))


