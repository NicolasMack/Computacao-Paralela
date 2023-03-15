
//matriz [i][j]
//l = linha desejada
//c = col desejada
//num = número dado

void multlinha(int i, int j, int mtrz[i][j], int l, int num){
    int cont;
    for(cont=0;cont<j;cont++){
        mtrz[l][cont] = mtrz[l][cont] * num;
        printf("%d ", mtrz[l][cont]);
    }
}

void multcol(int i, int j, int mtrz[i][j], int c, int num){
    int cont;
    for(cont=0;cont<i;cont++){
        mtrz[cont][c] = mtrz[cont][c] * num;
        printf("%d ", mtrz[cont][c]);
    }
}