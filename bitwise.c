#include <stdio.h>

int toggleBit(int num, int pos) {
    // Create a mask with only the bit at the given position set to 1
    int mask = 1 << pos;

    // Toggle the bit using XOR
    return num ^ mask;
}

int main() {
    int num, pos;

    // Input the number and bit position to toggle
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-based index): ");
    scanf("%d", &pos);

    // Call the toggleBit function and print the result
    int result = toggleBit(num, pos);
    printf("Number after toggling bit %d: %d\n", pos, result);

    return 0;
}
