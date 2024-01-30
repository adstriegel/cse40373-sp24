# Notes - Lecture 5 - 01-30-24

With a firm foundation now on devices, we will begin our tour of various devices and capabilities that are present on microcontrollers.  We will focus this week on digital I/O looking at GPIO in more detail and the specifics of bringing in digital inputs (switches) and driving digital outputs (LEDs).

## Reference Links

* (Raspberry Pi Sense HAT)[https://www.raspberrypi.com/documentation/accessories/sense-hat.html]
* (12 Button Keypad - Sparkfun)[https://www.sparkfun.com/products/14662]
* (Raspberry Pi Peripherals Reference)[https://www.raspberrypi.org/app/uploads/2012/02/BCM2835-ARM-Peripherals.pdf]
* (Rotary Switch)[https://www.sparkfun.com/datasheets/Components/Buttons/B-21-24.pdf]
* (TTL Datasheets)[http://ee.hawaii.edu/~sasaki/EE260/Labs/Datasheets/datasheets.html]

## Agenda

* CPS Loop
* Input / Output
* Raspberry Pi Sense HAT
* Assignment 3
   * Stoplight controller

## Assignment 3

Stoplight controller in Python

Raspberry Pi Sense HAT

Use the input switch (joystick) to mimic pressing the walk button

## CPS Loop

Recall from the first lecture - think about our interactions with the real world

* Sensing (transducers)
   * Analog, digital
* Control / computation - our microcontroller
* Actuation - manipulation

Think about our loop / timing

## Circuit Basics

* https://pinout.xyz
* Vcc, Gnd
* Prototype board setup
* What is voltage?
* How is current related?  V = IR
* CMOS vs. TTL

## Digital Input

What are various examples of input?

* Switch 
* Push button
* DIP Switch
* Photodiode - activates with light / LED

DIP = Dual In-Line 

* Rotary Switch - https://www.sparkfun.com/datasheets/Components/Buttons/B-21-24.pdf

Other Acronyms

SPST - Single Pole Single Throw
SPDT - Single Pole Double Throw
DPDT - Double Pole Double Throw

NO, NC, C - Normal Open, Normal Closed, Common

Why might we use a SPDT?

Quirks of Switches / Mechanics

* Bouncing 
   * How do we fix it?  RC or software debouncing

* Why would this matter?

Chaining outputs to inputs

Look at an example TTL datasheet 

V IH -> Input High
V IL -> Input Low

Why does that matter?  Current sink usually can do much more than a current source

## Digital Output

What are examples that we might use for digital output?

* LED (light)
* Relay
* Optoisolator
* Driver

https://interelcom.com/en/knowledge-base/choosing-a-resistor-for-a-diode/

Bouncing on the output?

Do we need to be concerned about driving "big" things?

How much current can we source / send?

From our chip?

Across the circuit trace?

## Read a Datasheet

Look at the Raspberry Pi Sense Hat Datasheet