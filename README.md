# LEDStrips
A little project to control LED strips using an Arduino UNO and a motion sensor.

Requires the IRRemote Arduino library.

## Setup
What you need:
* LED strips with remote
* Arduino UNO
* IR LED emitter  
* motion sensor for Arduino
* breadboard
* 220 Ohm resistor
* NPN transistor
* jumper wires male-female
* jumper wires male-male 


![Circuit diagram](https://github.com/tschuelia/LEDStrips/blob/master/circuit_diagram.png)

*Circuit diagram created with [Fritzing](http://fritzing.org/home/).*

Depending on the kind of LED strips you own the NEC codes for turning the light on and off might be different. You can either search the internet for the right NEC codes (did not work for me however) or you can find them out yourself using an IR receiver and your arduino. Just use one of the many manuals you can find in the internet for setup.
