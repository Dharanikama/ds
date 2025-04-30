#include<stdio.h>
int b_sort(int a[],int n){
    int i,j,temp;
    
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
       }
    } return 0;
                       }
int main(){
    int a[]={64,35,25,12,22,11},i;
    b_sort(a,6);
   printf("after sorting:");
   for(i=0;i<6;i++){
  printf("%4d",a[i]);
  }
 }
 
