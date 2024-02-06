# CSE 40373 - Spring 2024 - Assignment 04

**Assigned:** Monday, February 5th

**Due Date**: Friday, February 16th, 10 PM

**Group Size:** To be done as a group of up to 4 students

**Assignment Location:** `assignments/assignment04`

Note that there will not be any code for this assignment but rather setting up Linux on a Raspberry Pi of your choosing in the lab and running one of your group member's piece of code from Assignment 3.

## Task 1 - Install an OS

Your primary task for this assignment will be to identify your group members and then to work together to install Raspbian on a Raspberry Pi of your choosing.  Generally, this should take roughly an hour or so with all of your group working together.

First, you will want to pick a Raspberry Pi to work with.  Each group will have a "home" Raspberry Pi to use though we will share the information about all of the respective Raspberry Pi devices in a shared Google Sheet.  You can see the Assignment 4 assignment in Canvas for a link to the Google Sheet (ND login required).

You will want to grab the "kit" and to grab a keyboard / mouse as well as find an appropriate monitor to use.  The network access will come from the WiFi AP in the lab set up especially for B19b.  Note that the usage of `eduroam` is a bit more complicated due to the need for user authentication so we have a custom AP dedicated just for the lab to simplify access. You will also want a USB adapter to allow you to reformat / write the SD card appropriately.  

Next, pick a particular Raspberry Pi Linux distribution to use for your installation.  You will want to do a bit of reading.  You are welcome to pick a distribution with a fully fledged desktop GUI if you would like or you can go more bare bones without a GUI.  The SD cards have plenty of space so there should not be any issues.  Download that distribution and format the SD card appropriately locating instructions appropriate for your laptop OS (e.g. Windows or Mac OS).

**Note: Be careful and pick the SD card to format / install, not your actual laptop SSD**

Take that freshly formatted / flashed SD card and then boot your Raspberry Pi.  Follow the various prompts taking care to read / understand the various choices (defaults are generally OK).  For the WiFi information, see Canvas for the respective information.  Add the respective admin user name and password to the Google Sheet.  

Provided that you get everything up / working, your final step is to enable your Raspberry Pi to be accessible via SSH.  Read up on how to do that and properly enable SSH.  

Join your laptop to the same SSID where the Raspberry Pi is connected and then confirm that SSH access works by using the IP address of the Raspberry Pi.  

Install any appropriate libraries / etc. that might be helpful, particularly Python 3 and the support for the Raspberry Pi Sense HAT.  

## Task 2 - Make it Go

For Task 2, first grab a Sense HAT from the locker and try running one or more of the examples on the Pi.

Once that is confirmed to be operational, try out your code from Assignment 3.

## Submission

Capture a few images that confirm that your code is working (the run command via the terminal, digital output with the LEDs lit up in a few states) and submit a PDF containing those pictures as well as identifying information about your group members.  For at least one of the pictures, make sure to include some sort of date / time identifier to confirm when the picture was taken (e.g. another phone showing the date or say a watch doing the same).

Submit that PDF via Canvas.  




