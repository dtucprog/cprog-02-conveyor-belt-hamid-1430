#include <stdio.h>     //This Allows as to use printf()and scanf().     

int MOTOR_CAPACITY = 12;  // Each motor can carry 12 kg.
int main() {              // the program starts here.
    int motorCount, totalPackageWeight; // Here we create two integer variables

               /// Our codes starts from here

    //*************  SEQUENCE ****** Ask the user for the required information

    printf("How many motors are carrying the packages?\n"); // Ask for number of motors.
    scanf("%d", &motorCount);                               // Read an integer and store it in motorCount.

    printf("How many kg of packages do we expect?\n");       // Ask for package weight.
    scanf("%d", &totalPackageWeight);                       // Store the entered weight.

    //************ Selection: check if the packages are within the total motor capacity. *****//        

    if (totalPackageWeight <=motorCount*MOTOR_CAPACITY){            // check the condition // 
        printf("Yes! The conveyor belt can carry the packages.\n"); // the program prints (Yes! )if it is true.

    }else{                                                           
        printf("No. The conveyor belt cannot carry the packeges.\n"); // the program prints (No.) if it is false.
    }
    return 0;  // Ends the program successfully
}