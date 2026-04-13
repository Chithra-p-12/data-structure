#include <stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10];
    int m,n,i,j;
    printf("Enter rows and columns: ");
    scanf("%d %d",&m,&n);

    printf("Enter first matrix:\n");
    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&A[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&B[i][j]);

    for(i=0;i<m;i++) for(j=0;j<n;j++) C[i][j]=A[i][j]+B[i][j];

    printf("Sum Matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}

