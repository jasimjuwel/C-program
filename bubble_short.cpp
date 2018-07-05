#include<stdio.h>

int main(){
    int arr[50],n,i,j,temp=0;

    printf("How many number you entered : \n");
    scanf("%d",&n);

    printf("Enter the %d elements : ",n);
    for(i = 0;i<n;i ++){
        scanf("%d",&arr[i]);
    }

    printf("The given array is : ");
    for(i = 0; i<n;i++){
            if(arr[i] > arr[i+1]){
                printf("%d",i);
            }
        printf(" %d",arr[i]);
    }

       for(i = 0; i<n;i++){
        for(j = i+1;j<n;j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nThe sorted array is : ");
    for(int i = 0; i < n; i ++){
        printf(" %d",arr[i]);
    }
return 0;
}
