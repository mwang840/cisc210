/* 
 * This program should create a right-facing arrow using baseInt for 
 * the basee of the arrow, and headInt for the head. E.G.:

    1
    11
0000111
00001111
0000111
    11
    1

 *  for 0 and 1 resp. Should be able to change the numbers used just
 *  by changing the initialization in main().
 */

#include <stdio.h>

int main(void) {
   int baseInt=0;
   int headInt=1;
   printf("\t%d\n", headInt);
   printf("\t%d%d\n", headInt, headInt);
   printf("    %d%d%d%d%d%d%d\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
   printf("    %d%d%d%d%d%d%d%d\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt, headInt);
   printf("    %d%d%d%d%d%d%d\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
   printf("\t%d%d\n", headInt, headInt);
   printf("\t%d\n", headInt);
   /* Type your code here. */

   return 0;
}
