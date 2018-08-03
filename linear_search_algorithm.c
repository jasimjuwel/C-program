#include<stdio.h>
int main(){
    int array[100],k=0,n,i,key;
    printf("Enter the number of elements in array : \n");
    scanf("%d",&n);
    printf("Enter %d integer(s) array value : \n", n);
    for( i=0;i<n;i++){
        scanf("%d",&array[i]);

    }
    printf("Enter the search key : \n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(array[i]==key)
        {
            printf("%d is found at location %d",array[i],i);
            k=1;
        }
    }
    if (k==0){
            printf("%d isn't present in the array.\n", key);

    }
    return 0;

}
