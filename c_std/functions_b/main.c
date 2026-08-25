/**********************************************/
/**********************************************/
//********Name: Jimi Spier*********************/
//********Callsign: AJ7GW *********************/
/**********************************************/
/**********************************************/
//******Program Name: Functions - passing info*/
/**********************************************/
/**********************************************/




//******************Headers********************//
#include <stdio.h>

//*****************Variables********************/

float userMHZ=147.34;
float outLenFeet = 0;
float outLenInches=0;
float outHalfLenFeet = 0;
float outHalfInches = 0;
const int speedCFeet = 468;

        //*********Function******************//

        float freqConvert(float megaHZ){

        //*********Function Math*************//
            outLenFeet = speedCFeet / megaHZ ;
            outLenInches = outLenFeet * 12 ;
            outHalfLenFeet = outLenFeet / 2;
            outHalfInches = outLenInches / 2;

            
        //*********Out to Console*************//
        printf("\n");//Each output was given 3 decimal places of precision
        printf("***********Your Measurements**********\n");
        printf("Full length of dipole in feet: %.3f ft",outLenFeet);
        printf("\n");
        printf("Full length of dipole in inches: %.3f in",outLenInches);
        printf("\n");
        printf("Half length of dipole in feet: %.3f ft",outHalfLenFeet);
        printf("\n");
        printf("Half length of dipole in inches: %.3f in",outHalfInches);
        printf("\n");
        printf("*************************************\n");
        printf("\n");

        //*********return to main*************//
        return 0;
        }




int main() {

//*******************Program Setup****************/


        while (userMHZ != 0){//establish loop to reuse program

//*******************Input***********************/
        printf("\n");
        printf("Enter Frequency in MHZ (ex:147.340) to begin: ");
        scanf("%f",&userMHZ);
        printf("\n");
//*********Evaluate before output*****************/

                if (userMHZ != 0){
                freqConvert(userMHZ);
                }
                else{ //any time the field is zero, it will exit with message
                    printf("Thank you! \n");
                }
        }






    
return 0;
}