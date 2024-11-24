#include <stdio.h>
    int main() {
    int number;
    printf("Hay nhap vào mot so nguyen: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("S? %d chia het cho ca 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("S? %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("S? %d chia het cho 5.\n", number);
    } else {
        printf("So %d không chia h?t cho 3 và cung không chia het cho 5.\n", number);
    }

    return 0;
}i
