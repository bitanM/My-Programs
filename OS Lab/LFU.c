#include <stdio.h>

#define MAX_FRAMES 10
#define MAX_PAGES 50

int main() {
    int pages[MAX_PAGES], frames[MAX_FRAMES], freq[MAX_FRAMES];
    int n, f, i, j, k, found, min, replaceIndex, page_faults = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter the page reference string:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for (i = 0; i < f; i++) {
        frames[i] = -1;
        freq[i] = 0;
    }

    printf("\nPage\tFrames\n");

    for (i = 0; i < n; i++) {
        found = 0;

        // Check if page is already in a frame
        for (j = 0; j < f; j++) {
            if (frames[j] == pages[i]) {
                freq[j]++;  // increase frequency
                found = 1;
                break;
            }
        }

        if (!found) {
            page_faults++;
            replaceIndex = -1;

            // Look for empty frame first
            for (j = 0; j < f; j++) {
                if (frames[j] == -1) {
                    replaceIndex = j;
                    break;
                }
            }

            // If no empty frame, replace LFU page
            if (replaceIndex == -1) {
                min = freq[0];
                replaceIndex = 0;
                for (j = 1; j < f; j++) {
                    if (freq[j] < min) {
                        min = freq[j];
                        replaceIndex = j;
                    }
                }
            }

            frames[replaceIndex] = pages[i];
            freq[replaceIndex] = 1; // reset frequency for new page
        }

        // Print current frame status
        printf("%d\t", pages[i]);
        for (k = 0; k < f; k++) {
            if (frames[k] != -1)
                printf("%d ", frames[k]);
            else
                printf("- ");
        }
        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", page_faults);
    return 0;
}
