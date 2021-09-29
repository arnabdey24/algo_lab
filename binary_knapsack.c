#include <stdio.h>
#include <memory.h>
#include <minmax.h>

int main(){
    int n=5;
    int knapsackSize=4;
    int p[]={8,4,0,5,3};
    int w[]={1,2,3,2,2};

    int dp[n+1][knapsackSize+1];
    memset(dp,0,sizeof dp);
    for(int i = 1; i <=n ; ++i){
        for(int j = 1; j <=knapsackSize ; ++j){
            if(j>=w[i-1])
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+p[i-1]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }

    int knapsack[n];
    memset(knapsack,0,sizeof knapsack);
    int i=n;
    int size=knapsackSize;
    while (size){
        if(dp[i][size]!=dp[i-1][size]){
            knapsack[i-1]=1;
            size-=w[i-1];
        }else{
            i--;
        }
    }

    int totalValue=0;
    for(int j = 0; j < n; ++j){
        if(knapsack[j])totalValue+=p[j];
    }

    printf("total value: %d",totalValue);
}

