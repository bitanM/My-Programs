#include <stdio.h>

int main() {
    int n, i, time_quantum, time = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int burst_time[n], remaining_time[n], waiting_time[n], turnaround_time[n];

    for(i = 0; i < n; i++) {
        printf("Enter burst time for P%d: ", i + 1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i];
        waiting_time[i] = 0;
    }

    printf("Enter time quantum: ");
    scanf("%d", &time_quantum);

    int done;
    do {
        done = 1;
        for(i = 0; i < n; i++) {
            if(remaining_time[i] > 0) {
                done = 0;
                if(remaining_time[i] > time_quantum) {
                    time += time_quantum;
                    remaining_time[i] -= time_quantum;
                } else {
                    time += remaining_time[i];
                    waiting_time[i] = time - burst_time[i];
                    remaining_time[i] = 0;
                }
            }
        }
    } while(!done);

    for(i = 0; i < n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", i + 1, burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    return 0;
}
