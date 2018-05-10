#include <stdio.h>

int main()
{

   printf("Enter 1 for Linear and 2 for Binary Search \n");
   int c;
   scanf("%d",&c);

   if(c == 1){

    printf("\nLinear Search\n");

    int k=0,n,i,key;
    int array[4];
    printf("Enter your value :\n");
    for( i=0;i<4;i++){
        scanf("%d",&array[i]);

    }
    printf("Enter the key value :");
    scanf("%d",&key);
    for(i=0;i<4;i++){
        if(array[i]==key)
        {
            printf("%d is found at location %d",array[i],i+1);
            k=1;
        }
    }
    if (k==0){
            printf("item is not found");

    }


   }else if(c == 2){
   printf("\nBinary Search\n");

   int beg, ends, mid, n, key, array_list[100];

   printf("Enter number of elements\n");
   scanf("%d",&n);

   printf("Enter %d integers\n", n);

   for (int i = 0; i < n; i++){
      scanf("%d",&array_list[i]);
   }
   printf("Enter Search Value \n");
   scanf("%d", &key);

   beg = 1;
   ends = n;
   mid = (beg+ends)/2;

   while(beg <= ends){
        if(key < array_list[mid]){
            ends = mid -1;
        }else if(key > array_list[mid]){
            beg = mid + 1;
        }else if(key == array_list[mid]){
         printf("%d found at location %d.\n", key, mid+1);
         break;
        }

        mid = (beg + ends)/2;
   }
   if (beg > ends){
        printf("Item is not in the list");
   }

   }else{
         printf("\n%d Invalid Case \n", c);
   }
}
