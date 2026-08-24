/**********************************************/
/**********************************************/
//********Name: Jimi Spier*********************/
//********Callsign: AJ7GW *********************/
/**********************************************/
/**********************************************/
//******Program Name: User Input **************/
/**********************************************/
/**********************************************/


//******************Headers********************//
#include <stdio.h>




int main() {
//*****************Variables********************/
char nameFirst[10];
char nameLast[10];
int age = 0;



//*******************Input*********************/
//Display prompt and grab user input for first name
printf("Enter your first name: "); // no need to use escape sequence. scanf creates a new line. 
scanf("%s", nameFirst);

//Display prompt and grab user input for last name
printf("Enter your last name: ");
scanf("%s", nameLast);

//Display prompt and grab user input for age
printf("Enter your age: ");
scanf("%d", &age);



//*******************Output*********************/  

//Variables will display in order as written. Specifiers have to match
printf("Your name is: %s %s and you are %d years old.\n", nameFirst, nameLast, age);  
    return 0;
}