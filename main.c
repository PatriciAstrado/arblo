
#include <ncurses.h>			/* ncurses.h includes stdio.h */  
#include <string.h> 
 #include <wchar.h>
#include <locale.h>
int main()
{
 char mesg[]="Enter a string: ";		/* message to be appeared on the screen */
 char str[80];
 int row,col;				/* to store the number of rows and *
					 * the number of colums of the screen */
 initscr();				/* start the curses mode */
 getmaxyx(stdscr,row,col);		/* get the number of rows and columns */
 
                     		/* print the message at the center of the screen */
char empty[] = "";

//---------------------- escribe 10 que lee ala vez
 for(int i=10;i>=0;i--){
    move(row/2,(col-strlen(mesg))/2);
    addstr(empty);
    mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
    clrtoeol()  ;
    getstr(str);
    move(LINES-2-i,0);
    addstr(str);
 }
 //_-----------------------
 getch();
 endwin();

 return 0;
}