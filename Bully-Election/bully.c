#include <stdio.h>

int processes[10], n;
int coordinator;

// Election function
void election(int initiator)
{
    int i;
    printf("\nProcess %d is initiating election...\n", initiator);

    for (i = initiator + 1; i < n; i++)
    {
        if (processes[i] == 1)
        {
            printf("Process %d sends election message to Process %d\n", initiator, i);
            election(i); // higher process takes over
        }
    }

    coordinator = initiator;
}

// Display coordinator
void displayCoordinator()
{
    printf("\nFinal Coordinator is Process %d\n", coordinator);
}

int main()
{
    int i, failed;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter status of each process (1 = Active, 0 = Failed):\n");

    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i);
        scanf("%d", &processes[i]);
    }

    printf("\nEnter the process that detects failure: ");
    scanf("%d", &failed);

    election(failed);

    displayCoordinator();

    return 0;
}