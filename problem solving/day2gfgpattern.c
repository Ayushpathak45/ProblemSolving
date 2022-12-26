#include<stdio.h>

int main(){

        int n;
        scanf("%d" , &n);
        for(int i = 1 ; i<=n ; i++){
            printf("*");
        }
        printf("\n");
        for(int i = 1; i<=n-2;i++){
            for(int j = n-i-1;j>=1;j--){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for(int i = 1; i<=n; i++){
            printf("*");
        }
}