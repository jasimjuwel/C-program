#include<stdio.h>
    int a[5],top=-1;

    void push(){
    int i;

    if(top==4)
    {
        printf("\nStack is Over flow!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&i);
        top=top+1;
        a[top]=i;
    }
    }

    void pop(){
     if(top==-1)
    {
        printf("\nStack is Underflow!!");
    }
    else
    {
        printf("\nDeleted element is %d",a[top]);
        top=top-1;
    }
    }

    void show(){
    int i;

    if(top==-1)
    {
        printf("\nStack is Empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%d\n",a[i]);
    }
    }
    int main(){
        while(1){
        int ch;
        printf("\n***** MENU ****\n");
        printf("1. PUSH. \n2. POP. \n3. Display. \n4.Exit. \nPlease Enter your choice : ");
        scanf("%d", &ch);
        if(ch ==1){
            push();
        }else if(ch == 2){
            pop();
        }
        else if(ch == 3){
            show();
        }
        else if(ch == 4){
            break;
        }else{
            printf("Invalid Choice, Please Select Your choice");
        }
        }
        return 0;
    }

