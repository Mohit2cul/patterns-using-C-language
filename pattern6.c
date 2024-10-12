#include<stdio.h>
    int main(){
        // 1234
        // 123
        // 12
        // 1
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                printf("%d ",j);
            }
            printf("\n");
        }
        return 0;
    }