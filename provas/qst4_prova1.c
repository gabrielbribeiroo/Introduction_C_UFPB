#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Digite 3 numeros [EM ORDEM CRESCENTE]: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 < num2) && (num2 < num3)) {
        printf("Digite outro numero: \n");
        scanf("%d", &num4);

        if (num4 > num3) {
            printf("%d > %d > %d > %d\n", num4, num3, num2, num1);
        }
        else {
            if (num4 > num2) {
                printf("%d > %d > %d > %d\n", num3, num4, num2, num1);
            }
            else {
                if (num4 > num1) {
                    printf("%d > %d > %d > %d\n", num3, num2, num4, num1);
                }
                else {
                    printf("%d > %d > %d > %d\n", num3, num2, num1, num4);
                }
            } 
        }
    }
    else {
        printf("Os valores devem estar em ordem crescente. Tente novamente! \n");
    }
    return 0;
}