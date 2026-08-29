/**********************************************/
/**********************************************/
//********Name: Jimi Spier*********************/
//********Callsign: AJ7GW *********************/
/**********************************************/
/**********************************************/
//******Program Name: Console Calculator*******/
/**********************************************/
/**********************************************/


//******************Headers********************//
#include <stdio.h>
#include <stdlib.h>

//*****************Global Variables**************/

int userChoice;
int firstNumber = 0 ;
int secondNumber = 0;
int userAnswer=0;

//******************Functions*****************//
void userInstructions(){
    printf("\n");
    printf("\n");
    printf("Please enter choice to begin: \n");    
    printf("1 = + \n");
    printf("2 = - \n");
    printf("3 = * \n");
    printf("0 = Exit\n");
    printf("\n");
};
void userMath(int userChoice, int firstNumber, int secondNumber ){
    
    if (userChoice == 1){
        userAnswer = firstNumber + secondNumber;
        printf("\nYour answer is %d + %d = %d",firstNumber, secondNumber, userAnswer  );
    }
    else if (userChoice == 2) {
        userAnswer = firstNumber - secondNumber;
        printf("\nYour answer is %d - %d = %d",firstNumber, secondNumber, userAnswer  );
    }
    else if (userChoice ==3) {
        userAnswer = firstNumber * secondNumber;
        printf("\nYour answer is %d * %d = %d",firstNumber, secondNumber, userAnswer  );
    }
     
           
};

//***************Program Start*******************/

int main() {
//*****************Variables********************/
        
    userInstructions();
        printf("\n");
        printf("\n");
//*******************Output/Input****************/

    printf("Enter your choice of operation: ");
    scanf("%d",&userChoice);
    if (userChoice ==0) {
        printf("Thank you - AJ7GW ");
        exit(0);}
    else if (userChoice==1 || userChoice==2 || userChoice==3){   
        printf("\n");
        printf("Enter first number; ");
        scanf("%d",&firstNumber);
        printf("\n");
        printf("Enter second number; ");
        scanf("%d",&secondNumber);
        printf("\n");

    userMath(userChoice,  firstNumber,  secondNumber);}

    else {
        printf("Invalid input");}
    
   
    return 0;
}