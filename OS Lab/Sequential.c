#include <stdio.h>

#define SIZE 50

int main() {
    int memory[SIZE] = {0};  // 0 = free, 1 = occupied
    int start, length, i, ch, file_no = 1;

    do {
        printf("Enter starting block and length of file %d: ", file_no);
        scanf("%d %d", &start, &length);

        if (start < 0 || start + length > SIZE) {
            printf("Invalid block range!\n");
        } else {
            int available = 1;
            for (i = start; i < start + length; i++) {
                if (memory[i] == 1) {
                    available = 0;
                    break;
                }
            }

            if (available) {
                for (i = start; i < start + length; i++) {
                    memory[i] = 1;
                }
                printf("File %d allocated from block %d to %d.\n", file_no, start, start + length - 1);
                file_no++;
            } else {
                printf("Error: Some blocks are already allocated. Try a different range.\n");
            }
        }

        printf("Do you want to add another file? (1 = Yes / 0 = No): ");
        scanf("%d", &ch);

    } while (ch == 1);

    // Print memory map
    printf("\nMemory Status (0 = Free, 1 = Allocated):\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", memory[i]);
    }
    printf("\n");

    return 0;
}
