#include <stdio.h>
#include <time.h>
void main(){
        int i,n,temp,j;
        printf("Enter the value of n\n");
        scanf("%d",&n);
        int a[n];
        for(i=n; i>=1; i--) {
                a[n-i]=i;
        }
        clock_t start,end;
        double cputime;
        start=clock();
        for(i=0; i<n-1; i++)
        {
                for(j=0; j<n-1-i; j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        end=clock();
        cputime=((double)(end-start))/CLOCKS_PER_SEC;
        printf("time is %lf\n",cputime);
}
 