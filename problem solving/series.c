#include<stdio.h>
int main(){

    int sum = 0 ;
    int fact = 1 ;
    int n ;

    scanf("%d" , &n);
   
    for(int i=0;i<=n;i++){
        fact = fact+1;
        sum = sum + fact;
        printf("%d" , sum);
    }

}

#include<stdio.h>
int main(){

    int sum = 0 ;
    int fact = 1 ;
    int n ;

    scanf("%d" , &n);
   
    for(int i=0;i<=n;i++){
        fact =  fact/i;
        sum = sum + fact;
        printf("%d\n" , sum);
    }

}

#include<stdio.h>
int main(){
    int x ;
    int n , i;
    int sum = 1;
    int fact = 1;
    int power = 1;
    printf("enter the value of x and n\n");
    scanf("%d , %d" , &x , &n);
    for(i = 0; i<n;i++){
        fact = fact*i;
        power = power*x;
        sum = sum+power/fact;
        printf("%d\n" , sum);
    }
}


#include<stdio.h>
int main(){
    int n ;
    scanf('%d' , &n);

    for(i = 0; i<n;i++){
    }

}