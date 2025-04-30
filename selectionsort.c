#include <stdio.h>
void sort(int *,int );
int main()
  {
    int a[20],i,n;
    printf("enter the array size:\n");
    scanf("%d",&n);
    printf("enter %d elements of the array :\n",n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("sorted list:\n");
    for(i=0;i<n;i++){
       printf("%4d",a[i]);
    }        
    return 0;
  }  
void sort(int a[],int n)
   {
     int i,j,t,minpos;
        for(i=0;i<n-1;i++){
           minpos=i;
             for(j=i+1;j<n;j++){
                if(a[j]<a[minpos]){ 
                    minpos=j;
               }
           } 
         	 t=a[i];
         	 a[i]=a[minpos];
        	 a[minpos]=t;       
         } 
     }           
