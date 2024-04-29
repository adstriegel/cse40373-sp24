# Recaps - Second Half

## Lecture 17

* What is the difference between RAM and ROM? SRAM? DRAM?
* What is the typical role for RAM vs. ROM in an embedded system?
* What is OE, WE, CS? Are they high enable or low enable?
* What is a BIU?
* What is EPROM, EEPROM, flash?
* Describe how memory is connected to the bus.
* What is a strobe?
* What is a timing protocol?
* Why are the various timing values necessary?
* What is a boot loader?

## Lecture 18

* What is CAN?
* Describe how CAN works in contrast to SPI, I2C, etc.
* What are the advantages of CAN? 
* What is a CRC?
* What is RTR? 
* How does arbitration work and why is it necessary?
* How fast is CAN?
* What is the minimum number of devices on a CAN bus? Why?
* What does it mean to be deterministic?

## Lecture 19

* What is ODB-II?
* Compare / contrast the following types of displays: 7 segment, LCD, LED
* Compare / contrast: reflective, transmissive, transreflective.
* What is the difference between a LED and a LCD?
* Explain the high level pros and cons of TN vs. MVA vs. IPS.
* How does OLED work?
* What is a LED driver and what is its purpose?

## Lecture 20

* Compare / contrast: switches, potentiometers, encoders.
* What is a jumper wire? What is its purpose?
* Compare / contrast a reed switch versus a hall sensor.
* How is temperature determined?
* How do touch screens work?

## Lecture 21

* What make real-time systems unique?
* Define the terms period and deadline.
* Compare / contrast: hard, firm, soft (see Lecture 22 for the correct notes)
* Why does determining schedule feasibility matter?
* What is RMS? What is the rough scheduling limit for RMS?

## Lecture 22

* What is EDF? LLF?
* Why does the limit for EDF not necessarily apply in the case of multi-core systems?
* Define real-time computing.
* What is priority inversion?
* What is (m,k) scheduling?
* How are power and scheduling related?

## Lecture 23

* What is fault tolerance?
* Compare / contrast: fault, error, failure.
* What is reliability versus availability?
* Compare / contrast: MTTF, MTBF, MTTR.
* Compare / contrast the following types of faults: transient vs. persistent, malicious vs. benign, fail stop.
* What is the difference between safety versus liveness?
* Compare / contrast: masking, non-masking, fail-safe, graceful degradation.

## Lecture 24

* How does one typically drive a motor with a microcontroller (e.g. Pick a Lab)?
* How does the number of components generally impact reliability?
* What is TMR? What is the purpose of the voter?
* What is high availability (HA)? How is it different from TMR?
* What is hot versus a cold standby? What is the difference in terms of how it operates?
* What is a Byzantine fault? Why is it hard to detect?
* What is emergent behavior?
* What is the difference between Fault Avoidance vs. Fault Removal vs. Fault Tolerance?
* Give an example of the following types of redundancy: information, time, physical.
* How does fault tolerance impact SWaP-C?

## Lecture 25

* What is latency? What is delay?
* What are the components that make up latency?
* What is jitter?
* What is HOLB?
* Why is deterministic delay?
* What is a DCF?
* What is the hidden node problem?
* What is the skinny waist?
* What layers of the 7 layer OSI model are important for embedded systems?

## Lecture 26

* What is time synchronization?
* How do the following technologies work for time synchronization: radio station WWVB, NTP, GPS
* What is TSN?
* What is FDMA? TDMA?
* Recap: What is clock skew? What is clock drift?
* What is a mesh network?
* Explain the basics of Bluetooth. What were the key focal points of Bluetooth LE?
* What is Zigbee? How does it differ from Thread?
* Explain the basics of RFID / NFC
* What are the three main types of RFID?

## Lecture 27 

* What is the difference between flash and an EEPROM?
* What is the basic structure of flash? How is it organized?
* What is the typical measurement for the lifetime of flash (MWBF)?
* What are the key battery characteristics?
* What is the difference between capacity and discharge current?
* How does energy storage impact SWaP-C?

## Lecture 28

* How does being tamper proof differ from being tamper resistant?
* Compare / contrast: privacy, integrity, availability attacks.
* What does it mean to operate in an untrusted environment?
* What is a side channel and why does it matter?
* What is SPA? DPA?
* Why does timing matter for the purposes of security?
* What are potential countermeasures in both software and hardware?