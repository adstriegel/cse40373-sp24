# CSE 40373 - Spring 2024 - Assignment 03

**Assigned:** Monday, January 29th

**Due Date**: Friday, February 10rd, 10 PM

**Group Size:** To be done individually

**Assignment Location:** `assignments/assignment03`

In this assignment, we will be building a stoplight controller using the 8x8 LED matrix for our respective outputs.  In addition, we will also have a crosswalk input that can be triggered by the joystick.

## Overview of the Assignment

* [Raspberry Pi Sense HAT Emulator](https://trinket.io/sense-hat)

We will use the Rasbperry Pi Sense HAT board and its 8x8 LED matrix to emulate control of a stoplight.  Our goal is to create a stoplight with the following properties.

* Four directions of the stoplight (N, S, E, W) along with a green arrow.
   * For the arrow, use a slightly different shade of green.  
   * The N, S, E, W stoplight should be located roughly in the middle at the top, bottom, left, and right.  
* A cross-walk go / no go indicator in the corners that uses green and red for the respective E/W and N/S pairs.
   * The up or down arrow for N/S cross request and the left or right arrow for the E/W cross request.  
* The timing sequence should be as follows:
   * Green arrow for 10 seconds (no green)
   * Green for 30 seconds
   * Yellow for 10 seconds
   * Red for the remainder
* The crosswalk by default should stay red.  When tapped or prompted, the crosswalk should be set to walk for 20 seconds on the green, 5 seconds of flashing red, the rest red.
* It may help to sketch out the approach as a large finite state machine.  
* You may choose whatever time interval makes sense.  

## Assignment

Write the control code to realize the stoplight controller using Python and test / confirm your code using the emulator linked above.  Your file should be named `stoplight.py`.

This will be first code that you will test on the actual Raspberry Pi in Assignment 4.s

## Submission

**REMEMBER:** We will only be testing your code on the emulator.  

The submission will be the same procedure as past assignments.  That means:

* Commit early and often as part of the assignment
* Push your changes when you are absolutely done
* Submit the hash of your final commit via Canvas
* In your `README.md`, feel free to add any additional commentary about what works or does not work with your code. 

## Rubric - 45 points

### General Mechanics - 10 points

* 2 pts - No intervention required for the submission (e.g. it works)
* 1 pt - Right information in `README.MD` - name + e-mail address
* 1 pt - Right information in Canvas (commit hash)
* 1 pt - More thane one commit visible on GitHub with appropriate commit messages
* 5 pts - Well-commented / structured code

### Stoplight Functionality - 35 points

* 10 pts - The core red, yellow, and green operation works
* 10 pts - The green arrow properly works
* 15 pts - The crosswalk prompt and execution works correctly




