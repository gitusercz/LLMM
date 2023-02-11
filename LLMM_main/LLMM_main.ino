// Welcome to LLMM (Lower-Level_Mouse_Mover)
// Czibere Attila
// 2023-02-11
//
#include "Mouse.h"

// The counter value determines how long Mouse Mover is active
// Since I have set it to 80, it runs at least 4 hours (80 x 3 minutes == 4 hours)
// or maximum 6:36 (6.66 hours). After that time period it goes to an endless loop and Mouse is not moved anymore. 

int counter = 80; // Safety counter to be able to reprogram the mouse if something goes wrong. Just until development goes.
// Initial values of moving values, later randomized between non-noticeable and barely noticeable values
int MouseToMoveX = 10;
int MouseToMoveY = 10;
int DelayForMovingBack = 5;  // DelayValue to wait before moving the mouse back to its original position. Later randomized.
long WaitPeriod = 1000;   // Timerange in millisecs to wait between movements. Later randomized

void setup() {
   Mouse.begin();
}

void loop() {
  if (counter >=0) {
    counter--;
	MouseToMoveX = random(2,10);
	MouseToMoveY = random(2,10);
	Mouse.move(MouseToMoveX,MouseToMoveY);
	delay(DelayForMovingBack);
	DelayForMovingBack = random(111,222);
    Mouse.move(-MouseToMoveX,-MouseToMoveY);
	// Randomize delay value between 3 and 5 minutes, in milliseconds
	WaitPeriod = random(180000,300000);
    delay(WaitPeriod);                      // wait for a second
 	} else {
	}   
  }

