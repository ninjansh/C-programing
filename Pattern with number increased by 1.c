#include <stdio.h>

int main() {
    int i, j, spc, rows, t = 1;
    printf("Input number of rows: ");
    scanf("%d", &rows);
    spc = rows - 1;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= spc; j++) {
            printf(" ");
        }
        printf("%d", t++);
        printf("\n");
        spc--;
    }
    
    return 0;
}
