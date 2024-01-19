# Assignment 01 - CSE 40373 - Spring 2024 - Coding

This writeup covers the coding portion of Assignment 1 whereby we will be using Python in conjunction with C.  

## Task 0 - Update Your Path

We will be adding Prof. Bui's `pythin` installation to your path to get access to ZMQ.  Do this either by modifying your profile script with the following line:

`export PATH=/escnfs/home/pbui/pub/pkgsrc/bin:$PATH`

Alternatively, you can just type this manually:

`PATH=/escnfs/home/pbui/pub/pkgsrc/bin:$PATH`

Check your environmental variables by using `env`.  You will know this works by running the Python code in the examples directory.  If it runs, you are good to go.  

## Task 1 - Understanding the Assignment

## The Bigger Picture

Much of the heavy lifting when it comes to the web for the class will be done in Python.  We do this because Python has much nicer libraries to help out with processing JSON files and fetching data via web requests (HTTP).  

However, we cannot always work in our language of choice and sometimes need to handle various ugly / edge cases.  In that case, we are going be bringing the uglier side using C.

At a high level, we are going to be doing the following.  A user will run the C program.  This C program will take input from the user with regards to what queries to make with respect a set of beacon data as gathered previously from a REST API.  Since C is not terribly great at parsing JSON, the C code will send the query request via ZMQ to the Python code.

Our Python code will be our "server" that will largely sit and wait for requests from our C client.  Upon receiving a request from the C program, the Python code will either directly answer the query.  When the Python code resolves the specific request, it will send the data back in a C friendly format (e.g. CSV).  The C code will then display that data back to the user.

So what skills will we be learning on this assignment:

* ZMQ - We will be using ZMQ and network communications to cross between two different processes (one in Python, one in C)
* HTTP - We will be using Python to request data from a remote web server
* JSON - We will be doing more JSON processing for data that comes back from the web server
* CSV - We will once again be converting to a CSV from a JSON but doing this in a way to send from Python to C

### Python Code

The Python code will effectively do the following in a loop:

1. Wait for a request from the C client via ZMQ
2. Process the request from the C client that asks for the information about a beacon via a beacon ID (e.g. XXX-XXXX)
3. Send a reply to the C client either containing the relevant beacon data or `FAILURE - Error Message` 
4. Repeat the loop

### C Code

The C code will do something fairly similar:

1. Wait for input from the user
2. Send it to the Python code via ZMQ
3. Wait for the response from the Python code
4. Display the result
5. Repeat the loop

The C code is much simpler than the Python code. 

## Task 1 - Small Scale Testing

To start, copy over the contents of Assignment 1 in the `example` sub-directory in the class repository to your private repository.  

There are two examples of code in the `example` directory, one that is a client in C and another that is a server in Python.  

You should do the following:

1. Pick a port to use for both of the pieces of code.  Right now, the code uses port 40000.  Offset the 40000 by an appropriate number, e.g. say by 2 or 3 digits from your 900 number.  Make sure to change both the Python code and the C code to use the same port number.
2. Build the C code via `make`
3. In one SSH session, run the Python server.
4. In a different SSH session on the same student machine, run the C client. 

Confirm that a familiar message (`GO`, `IRISH`) properly appears.  

* Starting up a Python ZMQ server
* Running a C ZMQ client
* Sending messages back and forth in the request-reply paradigm

## Task 2 - Make It Go

For Task 2, your task is then to make this all go using the information from Task 1 as your guide along with the following information:

* Put your code in a directory named `solution`.  In the `solution` directory, create two sub-directories, `server` for your Python code and `client` for your C code.
* Use a similar port number to the one that you picked for Task 1.  Make sure that the port number is the same for both the server as well as the client, e.g. the client connects to the port on the server.  

When you are finished, you should have the following directory setup:

```
# Your README.md goes here
assignment01/
assignment01/data/
assignment01/example/
assignment01/solution/
# Your Python server
assignment01/solution/server/
# Your C client (.c, Makefile, etc.)
assignment01/solution/client/
```

### Task 2a - Server Behavior (Basic)

* All data for the server can be found underneath the following URL. Note that the URL is borrowing from a past course offering for the data location.  

`http://ns-mn1.cse.nd.edu/sysprogfa23/assignment08/data`

* The default directory should be `2019-01-21`. This directory contains only one JSON file (`0.json`).
   * The URL will be: `http://ns-mn1.cse.nd.edu/sysprogfa23/assignment08/data/2019-01-21/0.json`
   * The file is also present in the `data` sub-directory to assist with testing and inspection.   
* The server by default should load the default information on startup.
* The server should process and respond to a beacon as requested from the client.  All data should be sent in a CSV friendly format and include:
  * `factory_id, name, battery_level, battery_updated_date, hardware` 
  * Note that this is the order of the fields - use the actual data when sending information
* If the beacon ID is not found, send `FAILURE - ` along with an appropriate error message

### Task 2b - Client Behavior (Basic)

* The client should expect to read information via input via `stdin`.  You can expect that `exit` will cause the client to gracefully exit / quit.
* The client will read in from `stdin` which will be the name of a beacon whereby it asks for the information about a single beacon.  
   * An example valid beacon name is `TESS-STATIC-00716`.  Other valid beacon names are `TESS-STATIC-02526` and `TESS-STATIC-00623`.  
   * The returned information should be in a CSV-friendly format as noted earlier 
   * For the client, simply print the information as received from the server

In short, the client should expect an input and keep looping until the `exit` input is received.  

## Submission

**REMEMBER:** We will only be testing your code on the CSE student machines.  If you choose to develop on your Mac or Windows machine, we will not attempt to replicate your same setup.  Your code will be graded as it runs on the student machine.  

The submission will be the same procedure as past assignments.  That means:

* Commit early and often as part of the assignment
* Push your changes when you are absolutely done
* Submit the hash of your final commit via Canvas
* In your `README.md`, feel free to add any additional commentary about what works or does not work with your code. 

## Rubric - 32 points

### General Mechanics - 10 points

* 2 pts - No intervention required for the submission
* 1 pt - Right information in `README.MD` - name + e-mail address
* 1 pt - Right information in Canvas (commit hash)
* 1 pt - More thane one commit visible on GitHub with appropriate commit messages
* 5 pts - Well-commented / structured code

### Client / Server Functionality - 22 points

* 3 pts - Well-structured Python code
* 3 pts - Well-structured C code
* 10 pts - Correctly queries for all test cases for valid beacons and returns correct result
   * 5 pts - Correct data fields are present
   * 5 pts - Correct responses  
* 3 pts - Exits properly
* 3 pts - Properly handles bad beacon queries
