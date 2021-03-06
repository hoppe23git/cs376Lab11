/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw, Nathan Schmedake, Emily Hoppe
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
                             }

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
 
  
  blank = blank +30;
 printf("\n\n"
         "UWR: Unidentified Wheeled Robot\n"
         "    ^_^    \n"
         "   [O_o]   \n"
         "  /|___|\\ \n"
         "   d   b   \n");


  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
	 "			         ^_^    \n"
	 "                                [O_o]   \n"
	 "                               /|___|\\ \n"
	 "                                d   b   \n");

 
 printf("\n\n"
         "UWR: Unidentified Wheeled Robot\n"
         "                                                               ^_^    \n"
         "                                                              [O_o]   \n"
         "                                                             /|___|\\ \n"
         "                                                              d   b   \n");

}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (0)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o [] o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o [] o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
