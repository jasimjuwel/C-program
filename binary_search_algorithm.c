#include<stdio.h>
int main(){

    int array[100],i,n,first,last,mid,key;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d integer numbers : \n",n);
    for(i=0;i<n;i++)
      scanf("%d",&array[i]);
      printf("Enter the search key value :");
      scanf("%d",&key);
      first=0;
      last=n-1;
      while(first<=last){
            mid=(first+last)/2;
      if(array[mid]<key){
        first=mid+1;

      }
      else if(array[mid]==key){
        printf("%d is found at %d\n",key,mid);
        break;
      }
      else
        last=mid-1;

      }
      if(first>last)
      {
          printf("%d is not found\n",key);
      }

   return 0;
}
