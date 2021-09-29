#include <stdio.h>
#include <limits.h>
#include <memory.h>

int main(){
    int n=6;
    int p[]={5,10,100,2,20,50};

    int c[n][n];
    int s[n][n];
    memset(c,0,sizeof c);
    memset(s,0,sizeof s);

    for (int d = 1; d <n-1 ; d++) {
        for (int i = 1; i <n-d ; i++) {
            int j=i+d;
            int min=INT_MAX;
            for (int k = i; k <j ; k++) {
                int tmp=c[i][k]+c[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(tmp<min){
                    min=tmp;
                    s[i][j]=k;
                }
            }
            c[i][j]=min;
        }
    }

    printf("Minimum multiplication needed: %d\n",c[1][n-1]);
}

