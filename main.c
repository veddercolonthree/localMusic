#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include <panel.h>

int main() {
    //width and height
    int row, col;
    char name[] = "Song Downloader";

    initscr();
    getmaxyx(stdscr, row, col);
    mvprintw(0, (col-strlen(name))/2, "%s\n", name);
    printw("Song URL: ");
    
    char url[256];
    
    //ends program
    getch();
    endwin();
    return 0;
}