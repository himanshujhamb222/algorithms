#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{       
        printf("How many integers you want");
    
        int n;
        
      //Get array of integers from user
      
        scanf("%i",&n);
      
        int array[n-1];
      
        for(int i=0;i<n;i++)
        {
            scanf("%i",&array[i]);
        }
        //Sum of array of integers
        int sum=0;
      
        for(int i=0;i<n;i++)
        {
          sum= sum+array[i];
        }
        
        //ignore  
        
        
        
        //Maximum sum of subarray
        
        for(int i=0;i<n;i++)
       {
           int sum2=0;
         
           for(int j=i;j<n;j++)
          {
             sum2=sum2+array[j]; 
           
          } 
            if(sum2>=sum)
             {
                printf("%i is the maximum sum of a sub array\n",sum2);
             }
             
       }
}
