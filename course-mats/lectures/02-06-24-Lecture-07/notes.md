# Notes - Lecture 7 - 02-06-24

In today's lecture, we will talk about clocks, time, and how we measure time.

## Agenda

* Activity - Stopwatch
* Lab Space - B19b
* Assignment 4

## Links

* (Raspberry Pi 4 - BCM2711)[https://datasheets.raspberrypi.com/bcm2711/bcm2711-peripherals.pdf?_gl=1*18f5lwq*_ga*MTU3MDg5MDE5Mi4xNzA2NzQ4NTYy*_ga_22FD70LWDS*MTcwNzIyODQwNS4yLjAuMTcwNzIyODQwNS4wLjAuMA..]

## Activity 1 - Stopwatch

You can try up to five times.  How fast can you double tap the stopwatch?

## Clocks / Measuring Time


* 555 Timer - Original Oscillator

https://www.jameco.com/Jameco/workshop/TechTip/555-timer-tutorial.html
https://www.electronics-tutorials.ws/waveforms/555_timer.html
https://www.build-electronic-circuits.com/555-timer/
https://www.ti.com/lit/ds/symlink/lm555.pdf
https://www.build-electronic-circuits.com/circuit-calculator-conversion/555-timer-calculator/

Astable - Constantly going back / forth

High / low

Duty cycle - % of time in the high side

Frequency - 1 / (High + Low)

Impacted by settings of R1, R2, C1

* Crystal / Oscillator

   * Expose to an electric field - quartz - piezoelectric effect (oscillation)
   * Think 1's / 0's
   * Look at it (small metal with writing as to the frequency)

   * Use Phase Locked Loops to Multiply or Divide
    * Prescalar
   * 25 MHz, 50 MHz, 100 MHz base clock
   * VCO - Voltage Controlled Oscillator

https://www.analog.com/en/resources/analog-dialogue/articles/phase-locked-loop-pll-fundamentals.html

https://www.analog.com/media/en/analog-dialogue/volume-52/number-3/phase-locked-loop-pll-fundamentals.pdf


* Clocks
   * Skew
   * Drift
   * Why would it matter?
   * Reference signal
   * Environmental effects?

Cellular: GPS to synchronize the towers

What can we sync on?  Rise, fall, etc.

* Real-Time Interrupt 

   * Think about the quantum for context switching
   
* TPU - Timing Processing Unit

    * Imagine a 32 bit counter that rolls over - 1x per cycle
       * Tuneable by the pre-scalar
    * Give me an interrupt when either something happens (saving the "time") or give me an interrupt when the time is matched
       * Allow toggling or varying the capture (rise, fall, both)

* External Timing Chip - Example

https://www.nxp.com/docs/en/data-sheet/PCF8523.pdf

Timers - Raspberry Pi

https://www.engineersgarage.com/how-to-use-timer-in-raspberry-pi-part-20-38/

## Application - Pulse Counting

Suppose I want to measure how many "boxes" have gone past on a conveyor belt

Draw - conveyor / LED / photo diode

LED -> Output
Photo Diode -> Input

Count on the rise, fall, both?

## Application - Velocity Detection

Suppose I want to measure the speed of how fast a wheel or gear is moving

Circle -> Holes + Photodiodes

Velocity, Acceleration

How would I measure time from a counter?

Late - Early normalized via the pre-scalar

*Discuss:* Floating point -> yea or nay?

What is floating point?

What if we keep it in the integer domain?  

Is that bad?

How could we try to do that?

## Application - Non-Contact Sensing (Hall)

https://maker.pro/arduino/tutorial/how-to-use-a-hall-effect-sensor-with-arduino

Hall Sensor 

Latching vs. Non-Latching

Application - Cars - How so?

https://www.shopownermag.com/a-closer-look-abs-sensors/




