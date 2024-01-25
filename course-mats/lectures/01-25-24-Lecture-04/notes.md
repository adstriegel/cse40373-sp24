# Notes - Lecture 4 - 01-25-24

With the icy Tuesday lecture behind us, we are now going to move from thinking about the generic concept of a device (control, status, register) to start to think about strategies for handling / reacting / servicing devices.  

## Reference Links

* Raspberry Pi Pinout: https://pinout.xyz
* ARM Peripherals: https://www.raspberrypi.org/app/uploads/2012/02/BCM2835-ARM-Peripherals.pdf
* GPIO Python Code: https://projects.raspberrypi.org/en/projects/physical-computing/4
* Linux Device Drivers: https://www.apriorit.com/dev-blog/195-simple-driver-for-linux-os

## Agenda

* GPIO - Revisit the documentation
* Polling vs. Interrupts
* ISRs, Device Drivers

## Prompt

* Tear apart the V-Tech toys - are they an embedded system?
* Work as a group with several around you
* Also will bring the shaker cars (pre-disassembled) as well

* Could they be an embedded system?
* Good idea - yes or no?

## GPIO - Finishing It Out

Look / discuss the documentation 

Diagram of the pins for the Raspberry PI
https://pinout.xyz

Remember the selection table

https://www.raspberrypi.org/app/uploads/2012/02/BCM2835-ARM-Peripherals.pdf

Page 91:

The function select registers are used to define the operation of the general-purpose I/O pins. Each of the 54 GPIO pins has at least two alternative functions as defined in section 16.2. The FSEL{n} field determines the functionality of the nth GPIO pin. All unused alternative function lines are tied to ground and will output a “0” if selected. All pins reset to normal GPIO input operation.

How do we read these sorts of things?

* Acronyms / naming convention
* Read, re-read, and read again what is going on
* When in doubt, make sure you pick a popular one and hope StackOverflow has the answer :)

### GPIO Code - Python

https://projects.raspberrypi.org/en/projects/physical-computing/4

```
from gpiozero import LED
from time import sleep

led = LED(17)

while True:
    led.on()
    sleep(1)
    led.off()
    sleep(1)
```    

## Stepping Back - Control

* Two main approaches to your design
   * while(1) - Polling
   * Sit / wait for devices to notify you - interrupts

* What is polling?
   * Are we there yet?
   * What does it look like in practice?

* When does polling work?

* What is an interrupt?
   * What is an IRQ? XIRQ?
   * What is maskable? What is non-maskable?
      * What might be examples of devices or needs in each category?
   * Are these pins usually high or low enable?

* What happens with an interrupt (broad sense)?
   * Device "raises" the interrupt 
   * Finish the instruction
   * Save critical info to the stack
      * What might be critical? PC, CCR
      * Could be automatic, could be code that you write
   * Jump into the interrupt or exception handler
      * Figure out who raised the interrupt
      * Might jump into another handler (vector table)
      * How do we get a pointer to a function?
   * Save any other critical information
      * What might we save?  R1, R2, R3, ...
   * Handle / service the device - ISR - Interrupt Service Routine
      * What does this entail?
      * Reading data, setting a status bit, reading a status bit, etc.
   * Recover any critical information
      * Where do we get it from?  The stack
   * Return from interrupt

* How does it work with a device (usually)?
   * How does enabling a device for interrupts work?

* How does this work in practice?
   * Does each device gets its own interrupt line?
   * How do we multiplex interrupts? What is a PIC?

* Revisit what goes on
   * How do we know which interrupt went off?

* What does this mean for an embedded system?
   * What does our "loop" look like now?
   * What does an OS loop look like?
   * What is a device driver?  
   * What typically happens in practice?

* How do we decide what to do?
   * Periodic, aperiodic?
   * Synchronous, asynchronous?
   * Number of devices
   * What happens when we have combos of devices?
      * I2C, USB - how does that work in this paradigm?


