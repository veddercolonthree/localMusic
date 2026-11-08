#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Song Downloader\n");
    printf("Enter song URL: ");
    char url[256];
    scanf("%255s", url);
    char command[300];
    snprintf(command, sizeof(command), "yt-dlp  \"%s\"", url);
    system(command);
    return 0;
}