# LLMM (Lower Level Mouse Mover)

__LLMM is an Arduino project to keep computer from auto-locking by faking Mouse Movements.__

## Short Story
This is a simple Arduino sketch, which makes it behave like an USB Mouse. In random time periods (3 .. 5 minutes) mouse pointer moved away with random values and back. Mouse movements are barely noticeable and fast. When connected to a computer it keeps it awake, by preventing auto-lock.
When mouse moved, LED blinks. This is what it does sped up 1000 times:  

![DemoRun](/resources/RunDemo1000x.gif)

## Longer Story
As an engineer I was working in labs a lot. A schematic was opened on my laptop,  in one hand I had the cable I was building / one DMM probe / a screwdriver / etc. in my other hand there was the other probe, in my ears a headset, behind my ears a pencil, in my lap an opened notebook. And just when I had to look up another connection in the schematic windows auto-locked itself, as there was no user interaction in the last 10 minutes or so. It was disturbing, but there was an easy solution: using a Mouse Mover software. I was a keen user of [Mouse Mover](https://apps.microsoft.com/store/detail/move-mouse/9NQ4QL59XLBF?hl=hu-hu&gl=hu&rtc=1) for years. 

Then I changed workplace but not working conditions. Here, there was a stricter IT policy, meaning no 3rd SW was allowed. Even though Mouse Mover is from the Microsoft application library, it was not possible to install. Disabling this auto-locking feature was also not an option, as it was a enabled by a domain policy. 
So I continued to live my miserable life in such work conditions, until recently when an accident happened. One day returning to my laptop after a break, I entered my password into the Windows lock screen to continue my work. I had a remote desktop on one display, and a Teams chat window on another, as I left it. I wanted to log into the remote desktop, so I entered my password, but focus was in the chatbox instead of the remote desktop. After successfully broadcasting my password to a teams channel with 72 members, I decided to make a change. 

### An Arduino comes into action
In the back of my head I knew that Arduinos can act like HID devices. So I have set up an IDE, got a mini USB cable and an old Arduino Leonardo board. 

![board](/resources/leonardo.jpg)

The online IDE has handy example programs. I tested faking a keyboard first, then I had my a working sketch (as programs called this way in the arduino world as I learnt) in 10 minutes. The online IDE works fine, but it seems it looses the Arduino, when the microcontroller begins faking to be a HID device. So I installed the standalone IDE, which did not have this problem. 

So I came up with a short sketch that: 

 1. Moves the mouse poiner into a random direction (X and Y coordinate
    is random in the range 2 and 10 pixels)
2. waits some time (a random time value between 111 and 222 millisec)
3.  moves the mouse pointer back to its original position
4. waits some time (a random time value between 3 and 5 minutes)
5. Jumps to point 1. The number of times this cycle happens is defined in a counter variable, which currently set to 80. Therefore mouse movement ends after a time between 4 or 6:36 hours. 

## Summary
With this arduino programmed and connected to your computer now you have an additional mouse connected. Arduino and its SW autostart on powerup, I have this plugged into my USB C port replicator. This occasionaly moves the mouse, barely noticeable. If it takes 5 seconds to move your mouse (touch the touchpad) and enter your password. And if you do it three times a day it will save you __an hour__ annually, not counting the inconvenience. 

*(3 times 5 seconds times 20 working days in an average month times 12 months in a year == 60 minutes).* 

Best regards, 
Attila Czibere
2023-02-11

*I'd like to express my eternal gratitude to Nagy Zsolt, who had faith in me throughout this project.*
