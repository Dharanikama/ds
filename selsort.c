#include<stdio.h>
int selsort(int a[],int n)
{  
    int i,j,minindex,temp;
        for(i=0;i<n-1;i++)
         {  minindex=i;
           for(j=i+1;j<n;j++)
          {
            if(a[j]<a[minindex])
            {
               minindex=j;
               }
           }
          temp=a[minindex];
          a[minindex]=a[i];
          a[i]=temp;
          }
     printf("after sorting");
        for(i=0;i<n;i++)
        {
           printf("%4d",a[i]);
        }
   }
     int main()
     {
        int a[]={8,5,7,1,9,3};
           selsort(a,6);
           return 0;
           }
           
