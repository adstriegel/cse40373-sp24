# Notes - Lecture 11 - 02-20-24

Course project
Implement A/D code, discuss D/As (DSPs later), begin discussing serial ports 

## Agenda



## Reference Links


## Review - Due Dates

* Assignment 4 - This Friday - Show proof of your stoplight code running on a real Raspberry Pi.  Only one needed per group - pick the code that you want to run
* Assignment 5 - Next Friday - Smart Thermostat.  This is the last coding-specific one.  There will be extra credit / tinkering assignments after break but that is it.  This is a group assignment and can be tested entirely via the on-line Python Sense HAT emulator.
* Project Concept - Next Friday - Two to three sentences+ submitted via Canvas
* Mid-Term Exam Notes - Due prior to class for extra credit
* Course Feedback - Due the Friday before spring break
* Project Concept Slides - Put together 2-3 slides to describe your project concept.  Can be very informal. Due the Friday before spring break to be uploaded.  

Discuss - Why was Assignment 3 and why will Assignment 5 be vague?

## Prompt - Review A/Ds

See the handout for A/Ds. Identify the relevant attributes, read and process the A/D value

## Course Project

### Project Due Dates

* March 1st - Concept - Identify group members and submit 2-3 sentences to Canvas
* March 7th - Concept - Present in class your concept idea through 2-3 slides. Offer feedback to other course concepts.
* March 22nd - Project Proposal - Write up a 1-2 page document describing your project, the rough approach, and needed equipment.
* April 5th - Status Report 1 - Submit a brief status report demonstrating at least one component of your project
* April 19th - Status Report 2 - Submit a brief status report demonstrating two working components of your project and narrate aspects of your code / solution
* April 30th - Demo Day (In Lab) - Demonstrate your project in class in the lab. Submit your code and accompanying documentation via Github.   

See the handout for the course project 

Course concept is due Friday, March 1st, same as Assignment 5.

What do you need?
* CPS - Sensing, Actuation, both
* Network / data storage element - have a mechanism for remote data storage
* Raspberry Pi, Arduino, or other appropriate microcontroller
* Some limited funds for acquiring boards / etc. but generally work with what you have
* Should be reasonably commensurate with your group size
* If you can, try to involve multiple computational elements (e.g. 2x RPis, RPi + Arduino, etc.)

### Examples

* WiFi sensing - Gather data via monitor mode and the respective Linux system information as to the nearby environmental information.  Fuse that with GPS or say a phone to sense patterns of life or other interesting attributes.
* Proximity sensing via beacons - Using a Raspberry Pi (or Arduino or other inexpensive microcontroller), sense various Bluetooth beacons to estimate proximity and interactions under the assumption that each person is using / wearing a Bluetooth beacon on their person.  Determine how best to inexpensively instrument a classroom (or lab) and how to extract / synchronize data amongst your respective sensors.  
* Sound sending / classroom interactions - Add a microphone to the Raspberry Pi and process the measured sound to determine when individuals are talking using various open source packages.  Try to extract various aspects of the sound and its respective components to identify different speakers if at all possible or other interesting attributes.  Examine if one or more Raspberry Pi nodes could be used and fused together and try to offer feedback via the LED as to interaction quality.
* Smart CSE Locker - Design an improved lock for the Raspberry Pi locker which allows for a smartphone challenge / response (maybe text) or other authentication mechanism rather than remembering a particular combination.  Include various security aspects (security cameras) to safeguard the equipment.  
* Smart food tray - Using a combination of cameras and weight sensors, create a smart food measuring system that could be deployed in the dining hall (assuming one adds / weighs or adds / removes for verification).
* Improved concession inventory - Using a combination of sensors (e.g. open, weight), create smart inventory tools that could help better monitor the state of a given concession stand (e.g. estimate the amount of hot chocolate or lemonade left).  Explore how inexpensively such a sensor could be done and how best to connect that sensor.  
* Smart bathroom / queuing - Explore mechanisms for how to best measure and monitor occupancy and line length for the restrooms during a football game or even within a given building (e.g. McKenna Conference Center).  
* Campus smart safety - Explore how various aspects on campus could offer improved safety ranging from sparse areas (e.g. running around the lake) to dealing with game day monitoring / normal campus flow.  Solutions could involve mounting on campus lightpoles, near doors, or even tethered drones / rooftop options throughout campus.  

## Digital to Analog

What is different about going from digital to analog?

Think about the broader control loop

Many times - we will actuate with digital control to in turn influence the real world.  Sometimes we will send digital signals where we can about various components or we need the discrete levels of control. 

D/A - Same properties as A/D, just in reverse

Think about successive approximation

DSP - Digital Signal Processor

Take the EE signals / DSP class

## Serial 

What is it / why?

Time versus space tradeoff - PCBs

UART - Define

What are the basics of a frame?

Preamble
Data
Parity

Discuss parity as a review - even / odd / ECC

Bus versus point to point

Address

Wakeup / Wake on LAN

Baud Rate

Throughput

What is our effective data rate?

How do we know when to sample?

How can we synchronize?

Remember the issues with clocks - which ones matter?
