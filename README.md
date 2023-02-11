# LLMM (Lower Level Mouse Mover)

__LLMM is an Arduino project to keep computer from auto-locking by faking Mouse Movements.__

## Short Story
This is a simple Arduino sketch, which makes the Arduino behave like an USB Mouse. In random time periods (3 .. 5 minutes) it moves the mouse pointer with random values away and back. Mouse movements are barely noticeable and happen fast. This way when this setup connected to a computer it keeps it awake, it will not auto-lock itself.
When mouse moved, LED blinks: 
![DemoRun](/resources/RunDemo1000x.gif)

## Longer Story
As an engineer I was working in labs a lot. A schematic was opened on my laptop,  in one hand I had the cable I was building / one DMM probe / a screwdriver / etc. in my other hand there was the other probe. And just when I had to look up another connection in the schematic windows auto-locked itself, as there was no user interaction in the last 10 minutes or so. It was disturbing, but there was an easy solution: using a Mouse Mover software. I was a keen user of [Mouse Mover](https://apps.microsoft.com/store/detail/move-mouse/9NQ4QL59XLBF?hl=hu-hu&gl=hu&rtc=1) for years. 

Then I changed workplace but not working conditions. Here, there was a stricter IT policy, meaning that no 3rd SW was allowed to be installed. Even though Mouse Mover is a SW from the Microsoft application library, it was not possible to install. Disabling this auto-locking feature was also not an option, as it was a enabled by a domain policy. 
So I continued to live my miserable life in such work conditions, until recently when an accident happened. One day returning to my laptop after a break I entered my password into the Windows lock screen to continue my work. I had a remote desktop on one display, and a Teams chat window on another, as I left it. I wanted to log into the remote desktop, so I entered my password, but focus was in the chatbox instead of the remote desktop. After successfully broadcasting my password to a teams channel with 72 members, I decided to take action. 

### An Arduino comes into action
In the back of my head I knew that Arduinos can act like HID devices. So I have set up an IDE, got a mini USB cable and an old Arduino Leonardo board. 
![board](/resources/leonardo.jpg)

The online IDE has handy example programs. I tested faking a keyboard first, then I had my first working sketch (as programs called this way in the arduino world as I learnt) in 10 minutes. The online IDE works fine, but it seems to me it looses the Arduini, when the microcontroller enters to fake to be a HID device. So I installed the standalone IDE, which did not have this problem. 

So I came up with a short sketch that: 
