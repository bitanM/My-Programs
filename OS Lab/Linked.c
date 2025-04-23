#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main() {
    int memory[SIZE] = {0}; // 0 = free, 1 = allocated
    int start, length, i, count = 0, ch, file_no = 1;

    do {
        printf("Enter starting block and number of blocks required for file %d: ", file_no);
        scanf("%d %d", &start, &length);

        if (memory[start] == 1) {
            printf("Starting block is already allocated. Try another.\n");
        } else {
            int allocated[SIZE], k = 0;
            count = 0;

            for (i = 0; i < SIZE && count < length; i++) {
                if (memory[i] == 0) {
                    allocated[k++] = i;
                    count++;
                }
            }

            if (count < length) {
                printf("Not enough free blocks to allocate the file.\n");
            } else {
                for (i = 0; i < length; i++) {
                    memory[allocated[i]] = 1;
                }

                printf("File %d allocated using linked allocation:\n", file_no);
                printf("Blocks: ");
                for (i = 0; i < length; i++) {
                    printf("%d ", allocated[i]);
                }
                printf("\n");

                file_no++;
            }
        }

        printf("Do you want to allocate another file? (1 = Yes / 0 = No): ");
        scanf("%d", &ch);

    } while (ch == 1);

    // Show memory status
    printf("\nMemory Status (0 = Free, 1 = Allocated):\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", memory[i]);
    }
    printf("\n");

    return 0;
}
