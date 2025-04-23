#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct File {
    char name[50];
    struct File* next;
};

struct Directory {
    char name[50];
    struct File* files;
    struct Directory* subdirs;
    struct Directory* next;
};

struct Directory* createDirectory(const char* name) {
    struct Directory* dir = (struct Directory*)malloc(sizeof(struct Directory));
    strcpy(dir->name, name);
    dir->files = NULL;
    dir->subdirs = NULL;
    dir->next = NULL;
    return dir;
}

void addFile(struct Directory* dir, const char* filename) {
    struct File* file = (struct File*)malloc(sizeof(struct File));
    strcpy(file->name, filename);
    file->next = dir->files;
    dir->files = file;
    printf("File '%s' added to directory '%s'\n", filename, dir->name);
}

void addSubdirectory(struct Directory* parent, const char* subdirname) {
    struct Directory* subdir = createDirectory(subdirname);
    subdir->next = parent->subdirs;
    parent->subdirs = subdir;
    printf("Subdirectory '%s' added under '%s'\n", subdirname, parent->name);
}

void display(struct Directory* dir) {
    //for (int i = 0; i < depth; i++) printf("  ");
    printf("📁 %s\n", dir->name);

    struct File* file = dir->files;
    while (file) {
        //for (int i = 0; i < depth + 1; i++) printf("  ");
        printf("📄 %s\n", file->name);
        file = file->next;
    }

    struct Directory* subdir = dir->subdirs;
    while (subdir) {
        display(subdir);
        subdir = subdir->next;
    }
}

int main() {
    struct Directory* root = createDirectory("root");

    addFile(root, "main.c");
    addFile(root, "readme.md");

    addSubdirectory(root, "src");
    addSubdirectory(root, "docs");

    struct Directory* src = root->subdirs;         // 'docs' was added last, so 'src' is second in list
    struct Directory* docs = src->next;

    addFile(src, "app.c");
    addFile(src, "util.c");

    addFile(docs, "manual.txt");

    printf("\n--- Directory Structure ---\n");
    display(root);

    return 0;
}
