/**********************************************/
/**********************************************/
//********Name: Jimi Spier*********************/
//********Callsign: AJ7GW *********************/
/**********************************************/
/**********************************************/
//******Program Name: Numbers    **************/
/**********************************************/
/**********************************************/


//******************Headers********************//
//#include <stdlib.h>
#include <stdio.h>





int main() {
//*****************Variables********************/

int x = 10;
int y = 3;
int sum = 5 / 2; //because the math is eval'd before the assignment, the .5 goes away. 
float dblSum = (float)5 / 2; // this fixes the truncated .5
float varSum = (float) x / y;//Convert int into floats before math, then returns answer.

//*******************Output*********************/

printf("Result of summing two ints: %d \n", sum); // Outputs 2 
printf("Result of summing two doubles: %.2f \n", dblSum); //Outputs 2.50
printf("Result of summing two ints(%d/%d) into float: %.5f \n", x, y, varSum); //Outputs number with decimal places

    
    return 0;
}