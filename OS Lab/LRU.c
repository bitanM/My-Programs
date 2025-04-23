#include <stdio.h>

#define MAX_FRAMES 10
#define MAX_PAGES 50

int findLRU(int time[], int n) {
    int i, min = time[0], pos = 0;
    for (i = 1; i < n; ++i) {
        if (time[i] < min) {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

int main() {
    int pages[MAX_PAGES], frames[MAX_FRAMES], time[MAX_FRAMES];
    int n, f, i, j, k, pos, page_faults = 0, counter = 0, flag1, flag2;

    printf("Enter number of pages: ");
    scanf("%d", &n);
    printf("Enter the page reference string:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &pages[i]);
    printf("Enter number of frames: ");
    scanf("%d", &f);

    for (i = 0; i < f; ++i)     // make all the frames -1
        frames[i] = -1;

    printf("\nPage\tFrames\n");

    for (i = 0; i < n; ++i) {
        flag1 = flag2 = 0;

        for (j = 0; j < f; ++j) {
            if (frames[j] == pages[i]) {
                counter++;
                time[j] = counter;
                flag1 = flag2 = 1;
                break;
            }
        }

        if (flag1 == 0) {
            for (j = 0; j < f; ++j) {
                if (frames[j] == -1) {
                    counter++;
                    page_faults++;
                    frames[j] = pages[i];
                    time[j] = counter;
                    flag2 = 1;
                    break;
                }
            }
        }

        if (flag2 == 0) {
            pos = findLRU(time, f);
            counter++;
            page_faults++;
            frames[pos] = pages[i];
            time[pos] = counter;
        }

        printf("%d\t", pages[i]);
        for (k = 0; k < f; ++k) {
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
