#include<stdio.h>
int main(){
    int k=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++)
        printf("%d", k);
        k= k+1;
        printf("\n");
    }

}
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
            printf("\n");
        }
    }

#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");  
        }
        printf("\n");
    }
}

#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");  
        }
        printf("\n");
    }
}
    