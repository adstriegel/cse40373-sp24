# Course Project

Create a well-developed project during the second half of the semester.  Your project should be done in a group with at least one other person.  The project should have the following elements: usage of a microcontroller (Raspberry Pi, Arduino, etc.), some elements of a cyber-physical system (sensing, actuation, or both), and some sort of network element / centralized data storage / logging (e.g. a way to figure out what happened along with the physical world manipulation if appropriate).

The project will evolve durign the first half of March and to a lesser extent as well during late March and April.  The project will culminate in a final submitted and documented code repository and a pre-recorded demo on the last day of class in the lab in Fitzpatrick B19B (optional supplemental demonstration). 

## Project Due Dates

* March 1st - Concept - Identify group members and submit 2-3 sentences to Canvas
* March 7th - Concept - Present in class your concept idea through 2-3 slides. Offer feedback to other course concepts.
* March 22nd - Project Proposal - Write up a 1-3 page document describing your project, the rough approach, and needed equipment.
* April 5th - Status Report 1 - Submit a brief status report including a status writeup and an accompanying video demonstrating one portion of the project
* April 19th - Status Report 2 - Submit a brief status report including an updated status writeup and an accompanying video demonstrating two portions of the project
* April 30th - Demo Day (In Lab) - Demonstrate your project in class in the lab via a pre-recorded video that can be supplemented with an in-lab demo. Submit your code and accompanying documentation via Github.  

## Potential Ideas

* WiFi sensing - Gather data via monitor mode and the respective Linux system information as to the nearby environmental information.  Fuse that with GPS or say a phone to sense patterns of life or other interesting attributes.
* Proximity sensing via beacons - Using a Raspberry Pi (or Arduino or other inexpensive microcontroller), sense various Bluetooth beacons to estimate proximity and interactions under the assumption that each person is using / wearing a Bluetooth beacon on their person.  Determine how best to inexpensively instrument a classroom (or lab) and how to extract / synchronize data amongst your respective sensors.  
* Sound sending / classroom interactions - Add a microphone to the Raspberry Pi and process the measured sound to determine when individuals are talking using various open source packages.  Try to extract various aspects of the sound and its respective components to identify different speakers if at all possible or other interesting attributes.  Examine if one or more Raspberry Pi nodes could be used and fused together and try to offer feedback via the LED as to interaction quality.
* Smart CSE Locker - Design an improved lock for the Raspberry Pi locker which allows for a smartphone challenge / response (maybe text) or other authentication mechanism rather than remembering a particular combination.  Include various security aspects (security cameras) to safeguard the equipment.  
* Smart food tray - Using a combination of cameras and weight sensors, create a smart food measuring system that could be deployed in the dining hall (assuming one adds / weighs or adds / removes for verification).
* Improved concession inventory - Using a combination of sensors (e.g. open, weight), create smart inventory tools that could help better monitor the state of a given concession stand (e.g. estimate the amount of hot chocolate or lemonade left).  Explore how inexpensively such a sensor could be done and how best to connect that sensor.  
* Smart bathroom / queuing - Explore mechanisms for how to best measure and monitor occupancy and line length for the restrooms during a football game or even within a given building (e.g. McKenna Conference Center).  
* Campus smart safety - Explore how various aspects on campus could offer improved safety ranging from sparse areas (e.g. running around the lake) to dealing with game day monitoring / normal campus flow.  Solutions could involve mounting on campus lightpoles, near doors, or even tethered drones / rooftop options throughout campus.  
