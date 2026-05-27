
	#include <stdio.h>
int main() {
    int n, i;
 printf("Risabh Bhattarai\n");
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    // Loop from 1 to n
    for(i=1; i<=n; i++) {
        // If i divides n completely, it's a factor
        if(n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
