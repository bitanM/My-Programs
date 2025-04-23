#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int process[n], burst_time[n], priority[n];
    int waiting_time[n], turnaround_time[n];

    for(i = 0; i < n; i++) {
        process[i] = i + 1;
        printf("Enter burst time and priority for P%d: ", i + 1);
        scanf("%d %d", &burst_time[i], &priority[i]);
    }

    // Sort by priority (lower number = higher priority)
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(priority[i] > priority[j]) {
                int temp;

                temp = priority[i]; priority[i] = priority[j]; priority[j] = temp;
                temp = burst_time[i]; burst_time[i] = burst_time[j]; burst_time[j] = temp;
                temp = process[i]; process[i] = process[j]; process[j] = temp;
            }
        }
    }

    waiting_time[0] = 0;
    for(i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    }

    for(i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
    }

    printf("\nProcess\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", process[i], priority[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    return 0;
}