#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "config.c"
#include "abstract_io.h"



// Uncalibrated delay, just waits a number of for-loop iterations
void delay(long iterations)
{
	int i;
	for (i = 0; i < iterations; i++) {
        // There has to be a better approach to this, but this works; for now.
	}
}

void dit(void) {
    LD1 = ON; 
    LD3 = ON;
    LD5 = ON;
    delay(10000);
    LD1 = OFF; 
    LD3 = OFF;
    LD5 = OFF;
    delay(10000);
    return;
}

void dah(void) {
    LD2 = ON; 
    LD4 = ON;
    LD6 = ON;
    delay(30000);
    LD2 = OFF; 
    LD4 = OFF;
    LD6 = OFF;
    delay(10000);
    return;
}

void char_break(void) {
    delay(20000);
}

void word_break(void) {
    delay(30000);
}

void main(void)
{
	// Configure LED pins to output
    
    IO_B0 = OUTPUT; // Pin as output
    IO_B1 = OUTPUT; // Pin as output
    IO_B2 = OUTPUT; // Pin as output
    IO_B3 = OUTPUT; // Pin as output
    IO_B4 = OUTPUT; // Pin as output
    IO_B5 = OUTPUT; // Pin as output

    // Start all LED's OFF
    LD1 = OFF;
    LD2 = OFF;
    LD3 = OFF;
    LD4 = OFF;
  
    dit();
    dit();
    dit();
    char_break();
    dah();
    dah();
    dah();
    char_break();
    dit();
    dit();
    dit();
    word_break();
    return;
}
