#include <stdio.h>
#include <string.h>

#define MAX_USERS 5
#define MAX_FILES 10

struct Directory {
    char username[50];
    char files[MAX_FILES][50];
    int fileCount;
};

int main() {
    struct Directory users[MAX_USERS];
    int userCount = 0, choice, i, j;
    char uname[50], fname[50];
    int foundUser, foundFile;

    do {
        printf("\n--- Two Level Directory ---\n");
        printf("1. Create User Directory\n");
        printf("2. Create File\n");
        printf("3. Delete File\n");
        printf("4. Search File\n");
        printf("5. List Files\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (userCount >= MAX_USERS) {
                    printf("Maximum user limit reached.\n");
                    break;
                }
                printf("Enter new username: ");
                scanf("%s", uname);
                foundUser = 0;
                for (i = 0; i < userCount; i++) {
                    if (strcmp(users[i].username, uname) == 0) {
                        foundUser = 1;
                        break;
                    }
                }
                if (foundUser) {
                    printf("User already exists.\n");
                } else {
                    strcpy(users[userCount].username, uname);
                    users[userCount].fileCount = 0;
                    userCount++;
                    printf("User directory created.\n");
                }
                break;

            case 2:
                printf("Enter username: ");
                scanf("%s", uname);
                foundUser = -1;
                for (i = 0; i < userCount; i++) {
                    if (strcmp(users[i].username, uname) == 0) {
                        foundUser = i;
                        break;
                    }
                }
                if (foundUser == -1) {
                    printf("User not found.\n");
                    break;
                }
                if (users[foundUser].fileCount >= MAX_FILES) {
                    printf("User file limit reached.\n");
                    break;
                }
                printf("Enter file name to create: ");
                scanf("%s", fname);
                foundFile = 0;
                for (j = 0; j < users[foundUser].fileCount; j++) {
                    if (strcmp(users[foundUser].files[j], fname) == 0) {
                        foundFile = 1;
                        break;
                    }
                }
                if (foundFile)
                    printf("File already exists.\n");
                else {
                    strcpy(users[foundUser].files[users[foundUser].fileCount++], fname);
                    printf("File created.\n");
                }
                break;

            case 3:
                printf("Enter username: ");
                scanf("%s", uname);
                foundUser = -1;
                for (i = 0; i < userCount; i++) {
                    if (strcmp(users[i].username, uname) == 0) {
                        foundUser = i;
                        break;
                    }
                }
                if (foundUser == -1) {
                    printf("User not found.\n");
                    break;
                }
                printf("Enter file name to delete: ");
                scanf("%s", fname);
                foundFile = -1;
                for (j = 0; j < users[foundUser].fileCount; j++) {
                    if (strcmp(users[foundUser].files[j], fname) == 0) {
                        foundFile = j;
                        break;
                    }
                }
                if (foundFile == -1)
                    printf("File not found.\n");
                else {
                    for (j = foundFile; j < users[foundUser].fileCount - 1; j++) {
                        strcpy(users[foundUser].files[j], users[foundUser].files[j + 1]);
                    }
                    users[foundUser].fileCount--;
                    printf("File deleted.\n");
                }
                break;

            case 4:
                printf("Enter username: ");
                scanf("%s", uname);
                foundUser = -1;
                for (i = 0; i < userCount; i++) {
                    if (strcmp(users[i].username, uname) == 0) {
                        foundUser = i;
                        break;
                    }
                }
                if (foundUser == -1) {
                    printf("User not found.\n");
                    break;
                }
                printf("Enter file name to search: ");
                scanf("%s", fname);
                foundFile = 0;
                for (j = 0; j < users[foundUser].fileCount; j++) {
                    if (strcmp(users[foundUser].files[j], fname) == 0) {
                        foundFile = 1;
                        break;
                    }
                }
                if (foundFile)
                    printf("File found under user %s.\n", uname);
                else
                    printf("File not found.\n");
                break;

            case 5:
                printf("Enter username to list files: ");
                scanf("%s", uname);
                foundUser = -1;
                for (i = 0; i < userCount; i++) {
                    if (strcmp(users[i].username, uname) == 0) {
                        foundUser = i;
                        break;
                    }
                }
                if (foundUser == -1) {
                    printf("User not found.\n");
                    break;
                }
                if (users[foundUser].fileCount == 0)
                    printf("No files for user %s.\n", uname);
                else {
                    printf("Files for user %s:\n", uname);
                    for (j = 0; j < users[foundUser].fileCount; j++) {
                        printf("%s\n", users[foundUser].files[j]);
                    }
                }
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}
