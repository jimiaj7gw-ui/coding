/**********************************************/
/**********************************************/
//********Name: Jimi Spier*********************/
//********Callsign: AJ7GW *********************/
/**********************************************/
/**********************************************/
//******Program Name:  Functions **************/
/**********************************************/
/**********************************************/


//******************Headers********************//
#include <stdio.h>

void funcONE(char fName[],char lName[], int mAge ){ // vars: nameFirst, nameLast, & age get passed here for processing

printf("Your name is: %s %s and you are %d years old.\n", fName, lName, mAge);  
//Variables will display in order as written. Specifiers have to match


};


int main() {

//*****************Variables********************/
char nameFirst[10];
char nameLast[10];
int age = 0;



//*******************Input*********************/
//Display prompt and grab user input for first name
printf("Enter your first name: "); // no need to use escape sequence. scanf creates a new line. 
scanf("%s", nameFirst); // enter nameFirst as a string of char data.

//Display prompt and grab user input for last name
printf("Enter your last name: ");
scanf("%s", nameLast);

//Display prompt and grab user input for age
printf("Enter your age: ");
scanf("%d", &age);//The '&' tells the compiler, Here is the physical memory address (pointer) where age lives. 
//Go directly to this spot in RAM and overwrite whatever is there with the user's input.




//*******************Output*********************/
funcONE(nameFirst, nameLast, age); //Pass into funcONE the three user inputs.

    
    return 0;
}