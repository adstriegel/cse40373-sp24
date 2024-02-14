# CSE 40373 - Spring 2024 - Assignment 05

**Assigned:** Tuesday, February 13th

**Due Date**: Friday, March 1st, 10 PM

**Group Size:** To be done as a group of up to 4 students

**Assignment Location:** `assignments/assignment05`

## Overview

Your task is to build an intelligent thermostat for capturing and reacting to various analog signals as well as providing various mechanisms for digital input and digital output.  

## Understanding the Assignment

The task for your team is to create an intelligent thermostat that shares several of the properties of devices such as the Google Nest thermostat.  While we do not have a touch screen or the ability to run our devices 24/7, we do have a reasonable set of analog inputs, digital outputs (8x8 matrix), and environmental sensors.  

Think about how a thermostat works.  The temperature of the environment is sensed and then compared to the set point or targeted temperature. 

You should write code to do the following:
* **Temperature with setpoint:** Your thermostat should periodically poll the temperature as well as evaluate that temperature versus the setpoint.  The default display should be the current temperature. 
* **Setpoint-based control:** Your thermostat should activate either the heat or cooling functions any time the temperature is more than 0.5 C from the set-point.  Your code should vary the response curve from 10% to 100% whenever the temperature is between 0.5 C and 5.5 C off from the setpoint for either heating or cooling. 
* **Control LEDs:** The bottom row will be used to emulate digital output.  The following LEDs should be used:
   * Heating – Column 0: This LED should vary between 10 to 100% intensity for Red to mimic the intensity of the heating control.  
   * Cooling – Column 1: This LED should vary between 10 to 100% intensity for Blue to mimic the intensity of the cooling control.
   * Unused – Column 2
   * Fan – Column 3: This LED should vary between 0% and 100%.  You should use Green for the fan to differentiate it versus heating and cooling.
   * Unused – Columns 4-6
   * Power – Column 7: This LED should be lit to denote that your code is running and should stay continuously on.           
* **Display:** You should display either the current temperature or the current setpoint subject to what the user is currently doing.  You may either use the built-in libraries or your own custom display approach provided that the bottom row stays preserved (see earlier).  
   * For example, you could mimic a 7 segment display for the two digits of the temperature that will be displayed (you can safely presume that the temperature will always be between 0 and 99 C or 0 to 99 F).  
* **Setpoint Manipulation:** The joystick should be able to move the setpoint either up or down. The joystick button should be pressed before setpoint manipulation can be entered.  Keep in mind that your control of the heating, cooling, and fan should not stop while you are in the setpoint manipulation mode.  
* **Unit Manipulation:** Moving the joystick to the left or right should select either metric (left, default) or imperial (right) units for display.  The temperature tolerance range for control (0.5 C) should apply the same regardless of the displayed units.  You may require that this can only occur when you are displaying temperature (ex. units cannot be changed while in the setpoint mode).   

## Git Repository

From your group, pick one individual to serve as the "lead." The lead should then invite the other group members to serve as a collaborator for that repository.

## Submission

Make sure to appropriately commit / push.  Only the lead student needs to submit the latest Git hash though all group members are welcome to submit (comments / feedback will be echoed across all team members).  

Remember your general guidelines:  

* Commit early and often as part of the assignment.  This has multiple group members so be careful to appropriately update the code in your local repository.  
* Push your changes when you are absolutely done
* Submit the hash of your final commit via Canvas
* In your `README.md`, feel free to add any additional commentary about what works or does not work with your code. 

## Rubric - 45 points

### General Mechanics - 10 points

* 2 pts - No intervention required for the submission (e.g. it works)
* 2 pt - Right information in `README.MD` - names + e-mail addresses
* 1 pt - Right information in Canvas (commit hash)
* 1 pt - More thane one commit visible on GitHub with appropriate commit messages
* 4 pts - Well-commented / structured code

### Core Operations - 35 points

* 10 points – Correct thermostat operation
* 5 points – Temperature display
* 5 points – Heat, Cool, Fan, Power LEDs 
* 10 points – Setpoint operation
* 5 pts – Unit manipulation in temperature display

