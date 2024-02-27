# Notes - Lecture 13 - 02-27-24

Finish out serial and discuss wireless / networking basics

## Agenda

* SPI
* I2C
* Wireless

## Reference Links

* [Tonal](https://www.tonal.com)

## Q&A - Pending Homework Items

* Smart Thermostat
* Project Concept

Both on Friday

## Mid-Term Exam

Next Tuesday - In-Class

Key Components
* 2 pages of notes - front / back (total of 4 pages)
   * Read the recaps up on GitHub
* 9 or so short answer
* 5 or so multiple choice
* 2-3x - programming  

Example exams / problems and a unified recap posted in the afternoon

## Discussion  - Tonal

Watch - How it Works Video - [Tonal](https://www.tonal.com)

What are the various components / inputs that feed into the system?

## Write Code

Write a C function that takes in an input byte where the data is in bits 7-1 and the parity bit is in bit 0.  Return the full byte with bit 0 properly set for even parity.  

* How do you count the number of 1's?
* How do you determine if the number was even?
* How would you set or clear the parity bit?

## SPI 

Serial Peripheral Interface 

MOSI - Master Out / Slave In
MISO - Master In / Slave Out
SCLK - The clock
SS - Pick a particular slave

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

## Wired vs. Wireless

Bus vs. Point to Point

Ethernet - 802.3 - 10, 100, 1000 (Gig E)

Twisted Pair

PoE - Power over Ethernet - 48V
* Why might doing power and data be helpful?

Hub (Bus) vs. Switch (Star)

CSMA/CD or CSMA/CA - Carrier Sense Multiple Access
* Collision Detect or Collision Avoidance

DCF - Distributed Coordination Function
* General limit is roughly 60% of capacity - Slotted ALOHA

Layer 2 - Networking Parlance - Ethernet 

Dst MAC, Src MAC, Type / Len

Why is the destination given first?

Sleep / Power Savings

What is a pre-amble?

## Wireless

What changes?  

Generally point to multipoint - depending on directed vs. undirected
* Point to point - microwave

Omnidirectional or at least sectorized

Most important - licensed or unlicensed
* What is the distinction?

Most neat wireless is in the unlicensed bands
* 900 MHz, 2.4 GHz, 5 GHz, 6 GHz, 60 GHz

Cellular - Licensed
Bluetooth / WiFi - Unlicensed
NFC / RFID - Short distance
Zigbee, LoRa
Private LTE

Wireless tends to be quite lossy 
* Environment / obstacles
* LoS - Line of Sight
* Higher the frequency - worse the penetration
* Exp relationship with power / distance

* Interference 
* Hidden Terminal / Hidden Node
   * CSMA / CA
* MRR - Multi-Rate Retry
* HARQ - Hybrid Automatic Repeat Request
* ACK or NACK
* Channel Width
* RSSI

WiFi tends to target faster bandwidth
Bluetooth can be lower power
RFID / NFC use the reader to power the communication

Why do we care?

* How much data do we need to move?
* What delay can we afford to have?
* Remember our loop, remember SWaP-C
