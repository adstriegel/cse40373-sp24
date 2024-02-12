# Notes - Lecture 9 - 02-13-24

Measure the continuous analog domain

## Agenda

* Assignments
* Lecture on Thursday
* See / Touch - Air Quality Sensor

## Reference Links

* [Bosch BME688 Sensor](https://www.bosch-sensortec.com/products/environmental-sensors/gas-sensors/bme688/#documents)
* [Arduino Nicla Sense ME](https://www.mouser.com/datasheet/2/34/ABX00050_datasheet-2941636.pdf)

## Assignments

* Assignment 3 - This Friday
* Assignment 4 - Next Friday
* Assignment 5 - Two Fridays Out
   * Smart Thermostat - Sense HAT

Sense HATs will be in the locker today (Tuesday)

## Reminder - Lecture on Thursday

Will be meeting in Fitzpatrick B19b 

## Practice - PWM

Suppose we have the following:
* 16 MHz clock
* 16 bit time / counter
* Set up a pre-scaler of 1024
* Period of 10 ms (100 Hz)
* What would give us 30% power? Assume that the timer originally starts at zero
* OCR-A is at memory address 0x10A4 - 16 bit
* TCNT is at memory address 0x10A0 - 16 bit 
* Assume everything is already set up (toggle, pre-scaler, interrupts)
* Write a function that named setNextOC that appropriately figures out the right timing 

## Examples - Analog Signals vs. Digital Signals

* Come up with a list of five different analog and digital signal examples
* Chat with a neighbor

## See / Touch

Pass around the AirThings device from Prof. Striegel's office

## Look At / Browse

https://www.bosch-sensortec.com/products/environmental-sensors/gas-sensors/bme688/#documents

Datasheet - Bosch BME688 Air Quality Sensor - Handout

### Key Highlights

* What does it sense?
* What voltage does it take?
* What is the package?
* What is I2C / SPI? We will cover those starting next week.
* What does it cost?
* AI - Hype or Correct?

The chip does a good chunk of the work for us

## Analog to Digital

What is digital? What does it mean to have an 8 bit "number"?

What about an ASCII value? char?

Think about an analog signal like a sine wave

Discrete vs. analog

Draw the picture

Signal that we sample either via voltage or current

## Key Properties - A/D

* Resolution and Step Size
* Range
* Min
* Max
* Sampling Rate

Example - Translate
* 8 bit resolution
* 0 to 3.3 V
* 0 to 65 C
* What would 40 C be in a digital value?
* What does a value of 50 mean?

Identify the key attributes

## Guts of the A/D

How does the internal of the A/D work?

* Successive approximation
* Flash A/D

Sampling rate

## Floating Point

How does floating point work?

* Mantissa, exponent, sign
* Single precision, double precision

