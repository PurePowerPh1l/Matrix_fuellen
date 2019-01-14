#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int XAchse;
    int YAchse;
    int *data
}Matrix;

Matrix* init_Matrix(int x, int y){
    Matrix *m=malloc(sizeof(Matrix));
    m->XAchse=x;
    m->YAchse=y;
    m->data = malloc(x*y*sizeof(int));
    int i,j;
    for(i=0;i < (m->YAchse);i++){
        for(j=0;j < (m->XAchse);j++) {
            int index=i*m->XAchse+j;
            m->data[index] =i+j+1;
        }
    }
    return m;

}

void print_Matrix(Matrix *m){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++) {
            int index=i*m->XAchse+j;
            printf("%i",m->data[index]);
        }
    printf("\n");
    }
}


int main() {
    Matrix *m=init_Matrix(5,5);
    print_Matrix(m);
    return 0;
}
