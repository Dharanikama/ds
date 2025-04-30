#include<stdio.h>
int l_search(int arr[],int size){
    int key,i;
    printf("enter key:");
    scanf("%d",&key);
    for(i=0;i<size;i++){
    if(key==arr[i]){
    return i;
    }
   } 
    return -1;
    }
int main(){
    int arr[]={11,22,33,44,55},result;
    result=l_search(arr,5);
    if(result!=-1)
    printf("element found at %d index",result);
    else{
    printf("element not found");
    }
   }
    
