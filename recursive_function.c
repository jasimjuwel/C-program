#include <stdio.h>



int main()
{
    int n = 5;
    RS(n);
    printf("%d",RS(n));
    return 0;
}

int RS(int n){
        if(n<=0){
            return 1;
        }else{
        return RS(n-1)*(n+1);
        }
    }
