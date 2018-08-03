#include<stdio.h>
int main(){
    int n,i,j,array[100][100];
    printf("Enter the number of elements in graph : \n");
    scanf("%d",&n);
    printf("The Graph %d values are:\n",n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("Output graph is :\n");
     for(i=0;i<n;i++){
            printf("\n");
        for(j=0;j<n;j++){
            printf("%d",array[i][j]);

        }
    }
    printf("\n");

return 0;
}
