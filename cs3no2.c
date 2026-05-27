#include <stdio.h>
int main() {
    int i, count=0;
    printf("Risabh Bhattarai\n");
    for(i=2; i<=100; i+=2) {
        printf("%d ", i);
        count++;
    }
    printf("\nTotal even numbers = %d", count);
    return 0;
}