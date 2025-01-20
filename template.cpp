/**
 * Program Name: pascal.c
 * Purpose: print pascal triangle on screen
 * Author: Shiuh-Sheng Yu, Department of Information Management
 *         National ChiNan University
 * Since: 2004/12/10
 */
#include <stdio.h>
void pascal(int n) {
    int i, j;
    unsigned tri[51][51];
    if (n<0 || n>=50) {
        printf("I can print pascal triangle between 0 and 50.\n");
        return;
    }
    for (i = 0; i <= n; i++) {
        tri[i][0] = tri[0][i] = 1;
        for (j = 1; j <= n - i; j++) {
            tri[i][j] = tri[i][j-1]+tri[i-1][j];
        }
    }
    /* print out each line */
    for (i = 0; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("   ");
        }
        for (j = 0; j <= i; j++) {
            printf(" %5u", tri[i-j][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Please input size of Pascal triangle: ");
    scanf("%d", &n);
    pascal(n);
}

=================================================================================================

/**
 * Program Name: pas2.c
 * Purpose: print pascal triangle on screen
 * Author: Shiuh-Sheng Yu, Department of Information Management
 *         National ChiNan University
 * Since: 2004/12/10
 */
#include <stdio.h>
int main() {
    int n, i, j;
    unsigned tri[51][51];
    printf("Please input size of Pascal triangle(0 to 50): ");
    scanf("%d", &n);
    if (n<0 || n>50) {
        printf("I can only print Pascal triangle between 0 and 50.\n");
    } else {
        for (i = 0; i <= n; i++) {
            for (j = 0; j < n - i; j++) {
                printf("   ");
            }
            for (j = 0; j <= i; j++) {
                printf(" %5u",tri[i][j] = (j==0 || j==i) ? 1 : tri[i-1][j-1]+tri[i-1][j]);
            }
            printf("\n");
        }
    }
}
