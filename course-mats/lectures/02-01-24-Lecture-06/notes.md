# Notes - Lecture 6 - 02-01-24

We will now continue and look at circuit layouts, specifically PCBs and continue with our discussions of digital I/O.  

## Agenda

* Circuits to View
* Stopwatch - Primer
* Circuits, Schematics, Mechanical Drawings
* Disassembly
* PCBs, Mounts, Routing, Troubleshooting 

## Activity 1 - Pass Around

* Burned Out Circuit - Dishwasher
* Motherboard - CPU / Processor

## Activity 2 - Pass Around

* Stopwatch - How fast can you double tap?

## Circuits / Schematics

* Datasheet
* Schematic
* Mechanical Drawing

* Sense HAT Information: [Raspberry Pi Sense HAT](https://www.raspberrypi.com/documentation/accessories/sense-hat.html)
* [ST LED2472G](https://www.st.com/en/power-management/led2472g.html)
   * See the PowerPoint slides for a deeper dive

## Activity 3 - V-Tech Disassembly

* Take apart the V-Tech cars
* Can we find any of the chips

## PCBs / Layouts

What is a PCB?

[Printed Circuit Board](https://www.analog.com/en/resources/glossary/printed-circuit.html): Non-conductive material with conductive lines printed or etched.  Electronic components are mounted on top of the board and traces connect the respective components.  

* Layers / complexity
   * One / two layer - what does it mean?
   * Multi-layer - what is involved?

[PCB Overview Video](https://www.youtube.com/watch?v=YJr-kHy6STg)

Mount via either through-hole or surface mount

IC - Integrated Circuit

* *Through-hole packages*
   * Drill a hole through the PCB
   * DIP, SIP - Dual / Single In-Line Package
   * Can have a socket that allows us to insert / remove the chip

* *Surface mount*
   * Mounted on top of the PCB
   * Variety of packages - key is that it is "on the surface"

Two rows - ICs

Quad - all of the edges

### Surface Mount

[Surface Mounts](https://maker.pro/blog/surface-mount-component-packaging-types-sizing-and-standards)

SOIC - Small Outline Integrated Circuit (>= 14 pins)
QFP - Quad Flat Package (32 to 256 pins)
BGA - Ball Grid Array underneath

Leaded - Has a lead - (not lead like Pb)

Why does the type of mount matter?

What lends itself well to prototyping?

Breadboard vs. requiring a PCB

## Circuit Design - Routing

* https://www.raypcb.com/pcb-routing/#:~:text=Routing%20is%20the%20process%20of,signal%20integrity%20and%20electromagnetic%20compatibility.
* https://www.pcbway.com/blog/PCB_Basic_Information/What_is_a_PCB_Via_PCB_Knowledge_ce45ad4e.html


Netlist - What are the various networks of circuits that need to be connected?
   * Think of the logical schematic that we had earlier

Major Steps
1. Connecting Pins
2. Completing Connections
3. Managing Density
4. Minimizing Length
5. Minimizing Interference (Coupling between sensitive traces)
6. Maintain Manufacturability

## Layers / Troubleshooting

Why is this routing / PCB design potentially hard?

Parallel vs. Serial
   * Address, Control, Data - How many pins?
   * Look at the motherboard (same length)

How could we fix a PCB?

X-Acto Knife, Wires, Soldering, etc.


