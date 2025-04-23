#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char directory[MAX][50];
    int fileCount = 0;
    int choice;
    char name[50];
    int i, found;

    do {
        printf("\n--- Single Level Directory ---\n");
        printf("1. Create File\n");
        printf("2. Delete File\n");
        printf("3. Search File\n");
        printf("4. List Files\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter file name to create: ");
                scanf("%s", name);
                found = 0;
                for (i = 0; i < fileCount; i++) {
                    if (strcmp(directory[i], name) == 0) {
                        found = 1;
                        break;
                    }
                }
                if (found)
                    printf("File already exists!\n");
                else {
                    strcpy(directory[fileCount++], name);
                    printf("File created successfully.\n");
                }
                break;

            case 2:
                printf("Enter file name to delete: ");
                scanf("%s", name);
                found = 0;
                for (i = 0; i < fileCount; i++) {
                    if (strcmp(directory[i], name) == 0) {
                        found = 1;
                        for (int j = i; j < fileCount - 1; j++) {
                            strcpy(directory[j], directory[j + 1]);
                        }
                        fileCount--;
                        printf("File deleted successfully.\n");
                        break;
                    }
                }
                if (!found)
                    printf("File not found!\n");
                break;

            case 3:
                printf("Enter file name to search: ");
                scanf("%s", name);
                found = 0;
                for (i = 0; i < fileCount; i++) {
                    if (strcmp(directory[i], name) == 0) {
                        found = 1;
                        printf("File found: %s\n", name);
                        break;
                    }
                }
                if (!found)
                    printf("File not found!\n");
                break;

            case 4:
                if (fileCount == 0)
                    printf("Directory is empty.\n");
                else {
                    printf("Files in directory:\n");
                    for (i = 0; i < fileCount; i++) {
                        printf("%s\n", directory[i]);
                    }
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
