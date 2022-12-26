#include<stdio.h>
    void perfect(int m , int n){
        for(int i=m ; i<=n ;i++){
            int sum = 0;
            for(int j=1;j<=i/2;j++){
                if(i%j==0){
                    sum = sum +j;
                }
            }
            if(sum == i){
                printf("%d", i);
            }
        }
    }
    int main(){
       int m, n;
       printf("enter range");
       scanf("%d %d", &m , &n);
       perfect(m , n); 
    }
