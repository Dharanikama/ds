  #include<stdio.h>
  int bin_search(int arr[],int size){
      int low=0,high=size-1,mid,key;
      printf("enter key:");
      scanf("%d",&key);
      while(low<=high)
     { 
       mid=(low+high)/2;
       if(key==arr[mid])
       return mid;
       
       else if(key<arr[mid])
            high=mid-1;
            
        else{
            low=mid+1;
            }
     }
        return -1;
  }
int main(){
    int arr[]={29,39,45,56,77,87},result;
    result=bin_search(arr,6);
    if(result!=-1){
    printf("element found at %d index",result);
    }
    else{
       printf("element not found");
       }
}
