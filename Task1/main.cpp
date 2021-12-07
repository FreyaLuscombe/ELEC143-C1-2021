#include "uop_msb.h"
using namespace uop_msb;

BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{
    leds = 0;
    // ***** MODIFY THE CODE BELOW HERE *****

    // 1. Write a for-loop to count from 0 to 100 in steps of 10 - print the results to the serial terminal

    for (int count=0; count<=100; count+=10) {
        printf("%d \n", count);
    }


    // 2. Write a for-loop to count from 100 down to 10 in steps of 5 - print the results to the serial terminal
    
    for (int count1=100; count1>=10; count1-=5) {
        printf("%d \n", count1);
    }

    // 3. Write some code to demonstrate nested for-loops (one loop within another)

    for (int count2=0; count2<=5; count2++) {
        for (int n=0; n<=100; n+=10) {
            printf("%d \n", n);
    }
    }
    // ***** MODIFY THE CODE ABOVE HERE *****
    leds = 7;

    while (true) {

    }
}

