#include <time.h>
void delay(int number_of_seconds);
void display_sl();

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = (CLOCKS_PER_SEC/1000) * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
        const char image[] =
    "\\              _         _ \\ \n"
    "\\  __   ___.--'_`.     .'_`--.___   __\\ \n"
    "\\ ( _`.'. -   'o` )   ( 'o`   - .`.'_ ) \\ \n"
    "\\ _\\\\.'_'      _.-'     `-._      `_`./_ \\ \n"
    "\\ ( \\.\\ )    //\\\\`         '/\\\\\\    ( .'/ ) \\ \n"
    " \\\\_`-'`---'\\\\\\\\__,       ,__//`---'`-'_/ \n";


void display_sl(char* flag, char* command){
    substring(flag,command,3,MAX_INPUT);
    if(strcmp(flag,"-noanim")==0){
         puts(image);   }
    
   else{
    
    if(strcmp(flag,"")==0)
    {
    int jumpControlAtBottom = 0;
    const int someDelay = 6500;
    int shifControl = 0;


    for (jumpControlAtBottom = 0; jumpControlAtBottom < 16; ++jumpControlAtBottom)
    {
        printf("\n");
    }

    fputs(image,stdout);

    for (shifControl = 0; shifControl < 8; ++shifControl)
    {
        delay(120);
        printf("\n");
    }
    }
    else{
        set_color_magenta();
        printf("Usage ");
        set_color_green();
        printf("sl ");
        set_color_magenta();
        printf("or use ");
        set_color_green();
        printf("sl -noanim ");
        set_color_magenta();
        printf("to display message without animation (suitable for low spec PCs).\n ");
        reset_color();
    }
    }
}
