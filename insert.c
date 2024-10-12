#include<stdio.h>
        output(int a[ ],int n){
            int i;
            for ( i = 0; i < n; i++)
            {
                /* code */
                printf("%d\n",a[i]);
            }
            return 0;
        }
    int insert(int a[],int n){
        int n,loc,i;
        scanf("%d\n",&n);
        scanf("%d\n",&loc);
        for ( i = n -1 ; i >= loc -1 ; i--)
        {
            a[i+1]=a[i];
            a[loc - 1]= n;
            n += 1;
        }
        return 0;
    }
    //     output(int a[i],int n){
    //         int i;
    //         for ( i = 0; i < n; i++)
    //         {
    //             /* code */
    //             printf("%d\n",a[i]);
    //         }
    //     }
    // }