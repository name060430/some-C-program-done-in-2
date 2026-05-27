#include <stdio.h>
int main() {
    int n, i;
    float sum=0.0;
    printf("Risabh Bhattarai\n");
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        sum += 1.0/i;
        printf("1/%d + ", i);
    }
    printf("\nSum = %.2f", sum);
    return 0;
}