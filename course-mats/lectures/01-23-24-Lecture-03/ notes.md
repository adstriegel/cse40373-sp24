# Notes - Lecture 3 - 01-23-24

Core content now looking at what it means to connect a device as part of the microcontroller.  We will look generically at a device and its respective registers (control, status, data) and what it means to have a flat versus a segmented memory arrangement for I/O.  

## Agenda

* Assignments
* Pointer Math - Wrap Up
* Memory - Flat, Segmented
* Canonical Device
* C Programming - Devices Interactions

## Assignments - Six Total

* Assignment 2 is now posted: Three parts, two parts are pure code writing (no testing), one part is Python code
* Assignment 3 - Use the [Raspberry Pi Sense HAT emulator](https://trinket.io/sense-hat) to drive the LEDs on a Raspberry Pi Sense HAT board for creating a FSM
* Assignment 4 (Group) - Install Raspbian on a Raspberry Pi in the lab and test it
* Assignment 5 (Group) - Write a small interactive thermostat controllable the joystick and using the thermostat.  Test your code using the emulator and verify your code with the actual Raspberry Pi. 
* Assignment 6 (Group) - (Tentative) Write code to detect Bluetooth beacons and share information using MQTT.  

## Pointer Math

Let's work it to start things off

## Memory - Flat vs. Segmented

Broadcom ARM BCM2835 Reference: https://www.raspberrypi.org/app/uploads/2012/02/BCM2835-ARM-Peripherals.pdf

Pinouts - Raspberry Pi: https://www.bigmessowires.com/2018/05/26/raspberry-pi-gpio-programming-in-c/

Recap / Refresh:
* microcontroller = CPU + stuff on a single chip
   * What stuff? A/D, UART, GPIO, RAM, Flash
   * Draw a picture
* How do we get to the stuff?
* USB, I2C, CAN - Buses
* What if we want to talk to the device directly?
* How do we talk to the USB port directly?

Where does the "stuff" that we want to access live?

In memory - but where?

Think about RAM, ROM, Flash, LED, Keypad, Serial Port
   * Are they all bi-directional? Persistent?
   * It depends?

Flat memory / memory-mapped I/O

Segmented memory

**Look at the Raspberry Pi** 

Page 5 - BCM 2835 - Reference
   * Lots to unpack
   * What can we identify / read? 

Note the I/O peripherals on Page 5 - see handout

Page 89 - GPIO - Uggh

What about the tables on Page 90, 91, 92?

Devices are going to have three parts - control, status, data - more later

C Examples - deferred - interacting with those parts

## Canonical Device - Control, Status, Data

What does each part do?

* **Control:** Configure - typically done at startup or device initialization
   * Set the speed of the serial link
   * Set the direction of the I/O pin
   * Enable an interrupt when the buffer is empty
* **Status:** Interrogate - What is going on with the device?
   * Is there data waiting in the buffer?
   * Is there a signal tone?
   * Is the chip ready to sample another data point?
* **Data:** Interact - Give me the data or use this data
   * Set the second LED to on
   * Write this byte out the serial port
   * **Note**: A read may behave differently than a write

Often the different kinds of "device registers" are separated but sometimes they may actually be combined.  Depends on the device.  

We will look next lecture at how we go about handling a device (polling, interrupts).  

## GPIO - Raspberry Pi

Let's look at the GPIO via the Raspberry Pi BCM2835

Pages 89, 90, and 92

What is GPIO?

What are things we might want it to do?

What does function select do?

Alternate Functions

Pages 102 - 104 - Take a look at it

Let's look at input versus output

Page 95 

Let's read it and parse what is going on

Poll - What do we think it means?

Let's write some code - see the code from the last lecture example for C code

How often will you need to write these types of code in practice now?

* For a pure device on the microcontroller / SoC - rarely
   * If you have a language preference that is less common - more likely
* For a device connected by another approach (e.g. I2C, etc.)
   * Much more likely but generally you will use the provider "blessed" library







