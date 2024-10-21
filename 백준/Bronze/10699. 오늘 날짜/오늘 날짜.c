#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *t; //pointer to struct tm called t
    
    now = time(NULL); //get current time
    t = localtime(&now); //converts the time in now to a struct tm
    //breaks down time into its components 
    
    printf("%04d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
    
    return 0;
}
