#include<stdio.h>
int main(){
  //  int r;
//printf("Enter thr num of rows\n");
//scanf("%d",&r);
for(int i = 1; i<=6; i++){
    for(int j = 1; j<=6+1-i; j++ ){
        printf("*");
    }
    printf("\n");
}
return 0;
}