#include <stdio.h>
#include <string.h>
#include <minmax.h>


int main(){
    char str1[]="AGGTAB";
    char str2[]="GXTXAYB";

    int dp[strlen(str1)+1][strlen(str2)+1];
    memset(dp,0,sizeof dp);


    for(int i = 1; i <= strlen(str1); ++i){
        for(int j = 1; j <= strlen(str2); ++j){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    int k=dp[strlen(str1)][strlen(str2)];
    char subSeq[k+1];
    subSeq[k]='\0';

    int i= strlen(str1);
    int j= strlen(str2);

    while (i>0 && j>0){
        if(str1[i-1]==str2[j-1]){
            k--;
            subSeq[k]=str1[i-1];
            i--;
            j--;
        }
        else if(dp[i][j-1]<dp[i-1][j]){
            i--;
        }
        else{
            j--;
        }
    }

    printf("Lenght: %d\n",dp[strlen(str1)][strlen(str2)]);
    printf("sub sequence: %s\n",subSeq);
}

