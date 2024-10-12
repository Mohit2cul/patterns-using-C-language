#include<stdio.h>
    int output(int a[],int n){
        int i;
        for ( i = 0; i < n; i++)
        {
            printf("%d\n",a[i]);
        }
        return 0;
  }
        int create(int a[],int n){
        int i;
        for(int i=0;i<n;i++)
        {
            scanf("%d\n",&a[i]);
        }
        output(a,n);
        return 0;
    }
    
    void main(){
        int a[10],n;
        scanf("%d",&n);
        create(a,n);
        return 0;
}

  