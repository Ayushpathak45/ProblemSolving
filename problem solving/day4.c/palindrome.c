#include<stdio.h>

int pelin(int m , int n , int r){
    if((m==r)&&(n==0)){
        return (1);
    }
    if((m!=r)&&(n==0)){
        return(0);
    }
    pelin(m , r*10+n%10 , n/10);
}

int main(){
    int j = 101 ;
    
    if (j==1){
        printf("is pelindrome");
    }
}