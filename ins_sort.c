#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int queries,n,key,l;
    int*a;
    scanf("%d",&queries);
    int *count=(int*)malloc(sizeof(int)*queries);
    for(int i=0;i<queries;i++)
        {
            count[i]=0;
            scanf("%d",&n);
            a=(int*)malloc(sizeof(int)*n);
            for(int j=0;j<n;j++)
                {
                    scanf("%d",&a[j]);
                }
            for(int k=1;k<n;k++)
                {
                    key=a[k];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
                    l=k-1;
                    while(l>=0 && key<a[l])
                        {
                            count[i]++;
                            a[l+1]=a[l];
                            l=l-1;
                            
                        }
                    a[l+1]=key;
                  }
       
         }
         for(int i=0;i<queries;i++)
         {
            printf("%d\n",count[i]);
         }
}