#include<stdio.h>
int main(){

  int i,j;
  int marks[2][3]={{50,90,60},{70,40,30}};
  for(i=0;i<2;i++){
  for(j=0;j<3;j++){
    printf("marmks[%d][%d]=%d\n" ,i,j, marks[i][j]);
    }
    }
    return 0;
    }