# Notes - Lecture 8 - 02-08-24

Time keeps on ticking, ticking, into the future ...

## Agenda

* Lab Space - B19B - Next Tuesday (?)
* Assignment 4

## Motherboard - Round 2

We now have gone through a broad discussion of PCBs and various technologies for constructing PCBs.  Look at the motherboard again and try to find the following:

* Any transistors (3 pins)
* Any ocillators - how fast?
* What is the primary approach - THT or SMT?
* BGA, QFP, SOIC?
* Jumpers?

## Design Challenge - SB Tribune Article

https://www.southbendtribune.com/story/news/local/2024/02/01/south-bend-public-meeting-on-homeless-shelter-canceled/72444219007/

Rooms have a maximum capacity - is there a way that we could detect how many people might be in a room with an occupancy sensor / sensors?  What are your thoughts / ideas on how to do it? How might your system break?

* Sketch out on your own - 1 minute
* Chat amongst a small group - 2 minutes
* Share with the broader group - 1-2x groups

## Example Microcontroller - Arduino Uno

https://www.mouser.com/datasheet/2/268/ATmega48A_PA_88A_PA_168A_PA_328_P_DS_DS40002061B-3050139.pdf

## Output Compare 

How do we drive the outside world?

PWM - Pulse Width Modulation

https://www.mouser.com/datasheet/2/670/nema08_amt112s-1778324.pdf

https://www.sparkfun.com/products/16328

PWM - Pulse Width Modulation

Duty Cycle

High - Percent of time in the high (power) level

Low - Percent of time in the low (no power) level

Cycle / Frequency

More duty cycle = more power

How does that manifest itself programmatically?

* TPU
* Recall the internal counter - clock speed adjusted by a precalar
* Need so many ticks
* What is the number of ticks for the high? What is the number for the low?
* Set it to trigger / toggle / adjust when it "matches" or counts down 
   * Maybe it gives us an interrupt
* Set the next value of the counter (count down or match)

Stepper Motor

https://howtomechatronics.com/tutorials/arduino/stepper-motors-and-arduino-the-ultimate-guide/

Move a fixed amount (rotation) by varying the coils governing the motor in a particular direction

200 steps

Full step -> 200 steps per full rotation - 1.8 degrees / step
1/16th step -> 3200 steps per full rotation - 0.1125 degrees / step

Each step requires a pulse (high to low or low to high)

See the separation of power for the motor versus power for the controller

### Example - CNC / 3D printing 






