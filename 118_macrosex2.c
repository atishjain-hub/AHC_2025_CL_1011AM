#include <stdio.h>
//#define OS "\nIts Windows 10 Operating System"
main()
{
 #ifdef OS
    printf(OS);
 #else
    printf("\nWelcome to UNIX/Linux Operating System");
 #endif

 printf("\n");
}
