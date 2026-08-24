/******************/ 
/******************/ 
// **Jimi Spier** // 
/*****************/ 
/*****************/ 
#include <stdlib.h>
#include <stdio.h>

int main() {
    //*****************Variables********************
    
    int num;//declared but unused variable
    int age = 40; 

    double gpa =40.0; //Doubles hold decimals
    
    char grade = 'A'; //Hold single char
    char name[] = "Do"; //an Array that will hold multiple chars
    
    int* ptr = &age; // Points to a location in memory where age is. Like a hyperlink to a resource elsewhere in the code/memory
    
    //*****************Output***********************
    printf("%d \n",age); //uses int age using %d for Decimal//
    printf("%.2f\n",gpa); // uses double gpa with .2 places of precision, with %f for floating decimal. 
    printf("%c\n",grade); // uses single char grade with the %c for single Character.
    printf("%s\n",name); // takes array of char name[] with %s for String for characters. 
    printf("Pointer to age's memory location in Hex: %p \n",ptr); // uses int* ptr to indicate ptr is pointing to &age address location with %p for pointer.
    printf("Dereferenced back to age (original value): %d \n",*ptr); // Dereferencing the ptr with * returns the value that was in the memory location (original value).
    printf("Size of name plus one... %zu\n", sizeof(name)); // returns the size of the string +1. 
    
    return 0;
}