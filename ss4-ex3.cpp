#include <stdio.h>
    int main() {
    int number;
    printf("Hay nhap v�o mot so nguyen: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("S? %d chia het cho ca 3 v� 5.\n", number);
    } else if (number % 3 == 0) {
        printf("S? %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("S? %d chia het cho 5.\n", number);
    } else {
        printf("So %d kh�ng chia h?t cho 3 v� cung kh�ng chia het cho 5.\n", number);
    }

    return 0;
}i
