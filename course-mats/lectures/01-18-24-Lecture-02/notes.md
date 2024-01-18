# Notes - Lecture 2

Quick / speedy review of key topics as it relates to digital logic, C, and Python

## Agenda

* Course Structure - First Half
   * Browse to the file
* Microcontrollers / B19
* Assignment 1 - Questions
   * Assignment 2 will be posted on Monday
* Course Project
* Logic Design
* C
* Python

## Startup

**Prompt**: Embedded systems - identified over the past two days

## Hands-On

Shaker cars - are they an embedded system - yes or no?

https://www.youtube.com/watch?v=s8nMqCAQ5-Y

## Lab Setup

* Fitzpatrick B-19
* Roughly 12 Raspberry Pi nodes with a locker space - awaiting a new lock
* Assigned a Raspberry Pi for the semester for your group, Assignment 3 (?) will be to install a fresh version of Linux (Raspbian) on the node
* WiFi - NAT / Private IP address - assign based on MAC addresses

## Course Project

* What is the course project?
   * Half-semester project that brings together various aspects of embedded systems
   * Must involve some real-world elements, likely some sort of back-end in the cloud, some sort of view of your system
   * Examples
      * Uganda projects
      * Smart LEDs - bigger / better than the Ohio State game
      * Home appliance / robotics - small scale (e.g. add on to an appliance)
      * Add on for a car or say a backpack
    * Think about
       * Who is in your group?  Groups of three possibly, maybe even four with special cases

## Logic Design Review + More

Basic Diagram

Basic Chip Diagram / Datasheet

Low Enable

FSM

Stochastically Blessed?

Random - statistics govern but cannot perfectly predict in the short term

Markov Chain

Bits / Etc.
   2^10, 2^20, etc.

## C Programming

System Basics
  Process, Code, Data, Heap, Stack
  Thread
  Root / Superuser

Stack - What is it? How does it work?

SP -> Where to put things next - what is the next empty spot
Stack grows down in memory, heap grows up

Local Params
Base Pointer (x86 specific)
Return Address
Parameters
Caller's Stack Info

Key Types: char, short, int, long

Nibble / hex / etc.     $ vs. 0x

What is a word?

uint8_t, ...

Floating Point - What is it?

Null-terminated strings - what does it mean?

Buffers, sizing, sizeof + Buffer overflow

Arrays, Pointers, Point Math

Work an example

malloc / free

file descriptors

Bit-wise operations

Clear
Set
Toggle
Test with bitmasks
Invert

Work two examples

Suppose we need to turn on an interrupt for a device.  The control register is at memory address $A6720436 and is 8 bits.  The interrupt enable bit is bit 3.  Turn that bit on.  




Suppose we have a device whose status register is 8 bits and is located at memory address 0x1040000A.  The device is in trouble if both bits 6 and 5 are set to 1.  Write an expression to check and see if both bits are on for the device.  

What is a #define?

#ifdef / #ifndef

## Python Programming

Fetch a JSON and parse the JSON

Show an example of how we do that

Fetch from the following URL:

http://ns-mn1.cse.nd.edu/sysprogfa23/assignment08/test/data-switch.json
