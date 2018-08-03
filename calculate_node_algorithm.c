#include<stdio.h>
int main(){
    int n,i,j,count,array[100][100];
    printf("Enter the number of elements in graph : \n");
    scanf("%d",&n);
    printf("The %d value are:\n",n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("Output is :\n");
     for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
                if(array[i][j]==1){
                    count++;
                }
        }
        printf("\n%d count %d ",i,count);
    }
    printf("\n");

return 0;
}

