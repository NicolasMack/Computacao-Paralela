#include <stdio.h>

int modulonum(int num){
    if (num < 0){
        num = -num;
        return num;
    }
    else{
        return num;
    }
}

void modmatriz(int i, int j, int ma[i][j]){
    int m; //contador
    int n; //contador
    for(m=0; m<i; m++){
        for(n=0; n<j; n++){
            ma[m][n] = modulonum(ma[m][n]);
            //printf("%d ", ma[m][n]);
        }
        printf("\n");
    }
}