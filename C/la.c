/* Remake of ls for learning purposes */
/* alicela1n 2020 */
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

static void list_files(const char *dirname);

// This is the main function
int main(int argc, char *argv[]) {
    // Set the locale
    setlocale(LC_ALL, "");
    // For each directory
    int i = 1;
    while (i < argc) {
        list_files(argv[i]);
        i++;
    }
    // List the files
    if (argc == 1)
        list_files(".");
    return 0;
}


static void list_files(const char *dirname) {
    // Return an error message and fail if cannot open directory
    DIR *dir = opendir(dirname);
    if (!dir) {
        printf("Usage:\n");
        printf("List contents of a directory\n");
        printf("Enter directory for example: /bin\n");
        return 1;
    }    
    // Print all files within the current directory
    struct dirent *ent;
    while ((ent = readdir(dir)) != NULL) {
        switch (ent->d_type) {
        // Print nothing after regular files
        case DT_REG:
            printf("%s", ent->d_name);
            break;
        // Print a / after directories
        case DT_DIR:
            printf("%s/", ent->d_name);
            break;
        // Print an @ after links
        case DT_LNK:
            printf("%s@", ent->d_name);
            break;
        // Print a * by default
        default:
            printf("%s*", ent->d_name);
        }
        // Return a tab
        printf("\t");
    }
    closedir(dir);
    // Return a new line
    printf("\n");
}
