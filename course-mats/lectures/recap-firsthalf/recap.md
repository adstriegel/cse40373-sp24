# Review - Lecture Recaps

## Lecture 01 - 01-16-24

Intro lecture - no specific recap

## Lecture 02 - 01-18-24

* What is a FSM? What is a Markov chain? Why does the difference matter?
* How do you do the following to bits: test, clear, set, toggle?
* How does the size of a pointer relate to the memory addressability?
* What is big endian? Little endian? Which is the Raspberry Pi? Why does it matter?
* What is the MSB? MSb? LSB? LSb?

## Lecture 03 - 01-23-24

* How does pointer math work?
* How do you test for a bit?
* How do you test for multiple bits?
* What is the difference between segmented versus flat memory mapping for devices?
* What is a control register (for a device)? Give examples.
* What is a status register (for a device)? Give examples.
* What is a data register (for a device)? Give examples.  
* Does a read to the same memory address as previously written in an embedded system always yield the same result?

## Lecture 04 - 01-25-24

* What the difference between a polling versus an interrupt-driven approach?
* What is an exception?
* What is a vector table?
* How do you get a function pointer in C?
* What are the sequence of events that happen when an interrupt is raised?
* What is IRQ? XIRQ? PIC?
* What does it mean to have a nested interrupt?
* Are interrupts prioritizable?

## Lecture 05 - 01-30-24

* What is TTL? What is CMOS? What voltage levels do they have?
* What is a schematic? What is the mechanical drawing?
* Explain basic components of a data sheet.  
* Give examples of digital input.
* Give examples of digital output.
* What is V_IH? What is V_IL?
* Is it better to source or to sink current? How does that impact your design?

## Lecture 06 - 02-01-24

* Be able to browse through a datasheet say for the LED2472G.  
* What is a PCB?
* What is a via?
* What is a trace?
* What is a layer?
* What is a silk screen and what is its purpose for a PCB?
* Why are PCBs green?
* What are the following acronyms: DIP, SIP, QFP, SOIC, BGA.  
* What is the difference between SMT and THT?
* What is the purpose of routing and why is it necessary?

## Lecture 07 - 02-06-24

* How is a clock signal generated?
* What is a 555 timer and how does it generally work?
* What is the purpose of a crystal / oscillator?
* What is a Phase Lock Loop? What purpose does it serve?
* What is a prescalar?
* What is clock drift? What is clock skew?
* Name several factors that can create clock drift.
* What is a pulse counter?
* What is a hall sensor?

## Lecture 08 - 02-08-24

* For the Arduino UNO, what does a memory address look like? Why?
* What is Output Compare? How does it work?
* What is PWM?  Describe the different components as they related to PWM.  
* How does PWM typically operate? 
* What is the difference between PWM and how one controls a stepper motor?
* Does the microcontroller typically power a motor? Why or why not?
* What is a microstep?

## Lecture 09 - 02-13-24

* How would one program an Output Compare for Pulse Width Modulation?
* What are the key attributes of an A/D: resolution, min / offset, max, range, step size, sampling rate.  
* Convert analog values to digital and vice versa.
* What is an ADC?
* What is successive approximation?
* What is a flash-based A/D?

## Lecture 10 - 02-15-24

No recap - installation in B19B Fitz for the Raspberry Pi

## Lecture 11 - 02-20-24

* What is a D/A?
* What is a DSP?
* What are the key characteristics for an A/D?
* How do you convert a value from an A/D into its relevant value?
* What is a frame?
* Define the following: start bit, stop bit, parity bit, frame.
* What is the purpose of the start bit?
* How does parallel differ from serial?

## Lecture 12 - 02-22-24

* What is a frame? What is a start bit, stop bit, parity?
* Compute the parity for a given set of data.
* What is SPI? How does it differ from a UART?
* What are the respective pins for SPI?
* What is SS / CS?
* What is baud rate? How does it differ from throughput?
* Compute / translate a movement distance for a stepper motor.
* What is a handshake? What is a strobe?
* What is flow control?
* What is the difference between software and hardware flow control?
* What is RS-232? RS-485? 

## Lecture 13 - 02-27-24

* What are the pins for SPI versus I2C?
* Compare / contrast: UART, SPI, I2C.
* What is 802.3?
* Compare / contrast the following: hub, switch, star, bus.  
* What is PoE?
* What is the difference between licensed versus unlicensed spectrum?
* Where do the following technologies fit (licensed vs. unlicensed): Bluetooth, WiFi, cellular?
* How does wireless impact SWaP-C?
* How is wireless different from wired communications?
* What is interference?