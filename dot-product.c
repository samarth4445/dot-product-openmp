#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int i, n;
    double dot_product = 0.0;

    printf("Enter the size of the vectors: ");
    scanf("%d", &n);

    double *A = (double*)malloc(n * sizeof(double));
    double *B = (double*)malloc(n * sizeof(double));

    printf("Enter elements of vector A:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &A[i]);
    }

    printf("Enter elements of vector B:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &B[i]);
    }

    #pragma omp parallel for reduction(+:dot_product)
    for (i = 0; i < n; i++) {
        dot_product += A[i] * B[i];
    }

    printf("Vector A: ");
    for (i = 0; i < n; i++) {
        printf("%f ", A[i]);
    }
    printf("\n");

    printf("Vector B: ");
    for (i = 0; i < n; i++) {
        printf("%f ", B[i]);
    }
    printf("\n");

    printf("Dot product: %f\n", dot_product);

    free(A);
    free(B);

    return 0;
}
