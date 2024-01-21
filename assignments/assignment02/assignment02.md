# CSE 40373 - Spring 2024 - Assignment 02

**Assigned:** Monday, January 22nd

**Due Date**: Friday, February 3rd, 10 PM

**Group Size:** To be done individually

**Assignment Location:** `assignments/assignment02`

After this assignment, we will have one more individual assignment before we switch over to group-based assignments.  The focus of this assignment will on writing code that manipulates various bit-wise operations for generic devices.  

Submissions will still be done via GitHub as described in each task using the file name as specified.  Submit a hash as well of your commit to Canvas.

## Problem 1 

*Filename*: p1-writeserial.c

Assume that we have an 8 bit serial port whose data port is at memory location `$10A4`.  For that same serial port, a status register (also 8 bits) is at `$10A5`.  The documentation states that if Bit 4 denotes `UART_TXFULL` which is defined as being a 1 if the buffer is full (do not write) or 0 if the buffer has space (the data port can be written).

Write a function named `writeSerial` that takes in a pointer to a byte array along with a size of the byte array (integer) that writes out the data one byte at a time and will appropriately wait for there to be space in the outbound buffer for writing data.  

Your code should only contain the `writeSerial` function and you will not be able to compile this code.  

## Problem 2

*Filename:* p2-driveLED.c

Write a function named `driveTurnSignal` to handle the output for the turn signals on a car.  The various inputs and outputs (all 8 bit) are define as follows:

* The relevant input pins (bits 0 and 1) via GPIO are at memory location `$100A`.  The combinations are defined as follows: `00` Off, `01` Right Turn Signal, `10` Left Turn Signal, and `11` Hazard.  
* There are eight output pins, each driving a particular LED for the rear turn signal lights.  Bits 7-4 are for the left side LEDs and bits 3-0 are for the right side LEDs.  The particular output pins are all within the same byte at memory location `$100B`.
* The output pins for a given tail light should blink between all on or all off as appropriate for the turn signal as specified.
* Your code will not call the `driveTurnSignal` function but someone else is writing code that calls your function periodically (e.g. once a second).  
   * Think about how you might remember state between invocations of the function.  There are several ways to do this and you are welcome to use any of those choices.  
* Your code should read the inputs to determine what mode you are in via the input and then appropriate drive the output.  It is OK if a signal stays on for multiple calls when switching between states (e.g. a right turn was selected and then hazard was selected).

Your code should contain only the `driveTurnSignal` function.  

*Extra Credit (3 pts):* Write a version named `driveTurnSignal_Sweep` that makes the turn signal light up in successive calls (e.g. first one light X--- then XX-- then XXX- then XXXX and then ---- for a right turn signal and vice versa for the left).  

## Problem 3 

*Filename:* p3-getmac.py

Write Python code using [popen](https://www.datacamp.com/tutorial/python-subprocess) to execute [ifconfig](https://man7.org/linux/man-pages/man8/ifconfig.8.html) and parse the output to report the MAC address of the particular student machine that you are on.  

## Submission

Write your code and put it into the three respective files in the `assignments/assignment02` directory as noted.  For the first and second problem, you will not be compiling or running your code but will only be writing and submitting one function.  For the third problem, you can test / confirm that your code works correctly on the student machine but it is not required.  

Proper commenting and formatting are required for your code.

## Rubric - 15 points

* Problem 1 - 5 points
* Problem 2 - 5 points
   * Problem 2 - Up to 3 extra credit points
* Problem 3 - 5 points
