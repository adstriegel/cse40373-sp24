# Notes - Lecture 12 - 02-22-24

Continue to explore serial and examine how to program a serial device

## Agenda

* Review - Frame
* Protocol
* Serial Standards
* SPI
* I2C

## Reference Links

* Bambu 3D Printer - https://www.youtube.com/watch?v=lqROySHvoYc

## 3D Printing

Examples: Pinewood Derby, Vatican, Bushing, Fidget Spinner

Additive vs. subtractive manufacturing

Issues with 3D printing?

## Activity - Coding / Design

Suppose we have a stepper motor with 200 steps connected to a gear that is 20 mm in diameter.  As the gear moves, it grips plastic filament and pushes it through an extruder.  The motor controller allows for up the addition of 8x microsteps.  

Suppose that we have a spare GPIO pin that we can drive by writing a 1 to Bit 13 at memory address 0x200FA430 (32 bit data location).  

Write a function that takes in the amount of filament to extrude and keeps the speed of extrusion to be no faster than 2.5 mm / second.  

Step Size = 0.314 mm

20 * 3.14 / 200


## Serial 

What were the basic parts of sending a chunk of data?

Start
Data
Parity
Stop

### Parity 

Discuss Hamming distance, valid codewords

Work an example of parity -> odd parity

## Transmission / Receipt

Start - Detected transition that signals the start of a frame

That allows us to "synchronize" for the next set of bits

We know what will follow

How do we know if it is a 1 or a 0?

Depends on the physical layer

One approach - outright 1 or 0 via digital logic levels

Other approaches - FSK, PSK

FSK - Frequency Shift Keying

PSK - Phase Shift Keying

More complicated waveforms means more bits

## Flow Control / Handshaking

https://www.ti.com/lit/an/slla544/slla544.pdf?ts=1708487080131&ref_url=https%253A%252F%252Fwww.ti.com.cn%252Fproduct%252Fcn%252FTRS3243#:~:text=Valid%20RS%2D232%20signals%20are,5%20V%20to%20%2D15%20V.

We know when a bit starts but how do we know that the other side is ready to receive?

Flow Control / Handshaking

Flow Control - Am I able to receive the data?

Handshaking - Did you receive the data that I sent correctly?

Strobe - Similar concept where in parallel / bus - denotes that the "values" are valid

Flow Control

XON / XOFF - Send a special character to start communications and a different one to stop

Control-S -> XON
Control-Q -> XOFF

Known as software handshaking

Whoa, whoa, whoa -> send an XOFF
Ready to receive again -> send an XON

Hardware Handshaking

Use actual pins to denote / help with flow control

RS-232 - 9 pin connector

3V to 15V nominally

DTE - Data Terminal Equipment
DCE - Data Circuit-terminating Equipment

RTS / CTS - Request to Send / Clear to Send
DSR / DTR - Data Set Ready / Data Terminal Ready

Notion nominally of crossing over

My RTS connects to your CTS and vice versa
My Pin 7 connects to your Pin 6 and vice versa

Set Pin 7 RTS to say hey, I'm ready
You set Pin 6 to say yup, good to go

Use DSR to say yup, the Tx line connected to your Rx line is good

We can think of this as a protocol - what are the sequence of events

RS-485 - Bigger voltages / longer distances

Even bigger protocol is the sequence of what we send?

Simplest one - terminal - send just characters / what you type or what to display

More complicated - send additional information

Tell me the value for variable #3

Tell me the values of variables 3, 4, and 5 - see later with I2C

## Speed

What are our limiting factors?

How fast can we signal - function of RC

Longer cables / harder

Baud rate - how fast are we generating / changing bits

Throughput - what is our effective data rate that we are sending?

Most serial speeds over any sort of appreciable distance get up to the hundreds of kilobits at best

Modem - modulator / demodulator - 9600, 56.4 kbps

## How does it work

Read / Write Buffers on the UART

Think of it like a shift register

If we have a buffer, what are the events?

Transmit Buffer is empty - Nothing to send (underflow)

Receive Buffer has data 

Receive Buffer is full (overflow)

## SPI 

Serial Peripheral Interface 

MOSI - Master Out / Slave In
MISO - Master In / Slave Out
SCLK - The clock
SS - Pick a particular slave

Master - Who controls / bosses the channel (SCLK, SS)
Slave - A downstream device governed by the master

SS - Can pick one or the other device

Can have multiple SS pins potentially giving you more

What logic level is SS probably? High enable or low enable?

Think about a bus / simplifying communications

What happened with a basic UART?

Tx / Rx - Point to Point

SPI - Point to multipoint

## I2C

https://www.circuitbasics.com/basics-of-the-i2c-communication-protocol/

Let's move it to a bus-like arrangement where we have the address transmitted as part of the protocol

Two pins

SDA / SCL

Serial Data

Serial Clock

Start, Address (7 or 10 bits), R/W Bit, ACK/NAK Bit, Data Frame 1, ACK/NAK BIT, Data Frame 2, ACK/NAK, Stop

What is a NAK?

How might it work?

Device 0x11A, give me information 0x10, 0x0A

## Preview / Discuss

Wireless, Bluetooth / WiFi

https://www.sparkfun.com/products/17146








