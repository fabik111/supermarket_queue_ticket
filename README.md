# [COVID-19] Supermarket Queue Ticket System
## Abstract
Since the Prime Minister Giuseppe Conte
decreed the "Red zone" over all the italian territory (DPCM 8 MARCH '20), supermarkets have limited the number of person inside at the same time.

This has caused long queues outside supermarkets in many Italian cities.

A solution for this problem is introducing a ticketing system, so all customers have assigned a date and time (time slot) when they can do shopping.

## Solution Description
The supermarket' manager must define the maximum number of people who can be inside at the same time. The manager must define, also, the maximum time where clients can be inside.

In this way we are setting the time slots

Clients have to take their ticket in which will be indicated their date when they can reach the supermarket. Also, they must be on time and respect the assigned time slot.

## Technical Description
In this project several technologies were involved:
* Arduino MKR family board (1000, 1010 or GSM)
* ArduinoIoTCloud to set the parameter
* Adafruit Thermal Printer to print ticket
* Ultrasonic sensor HC-SR04 to detect the client presence and automatically print the ticket (so nobody has to touch anything ;))

## TO DO
* Handle opening and closing shop hours
* Test the solution with a printer (Unfortunately I don't have any)
* Create a board provisioning script that uses Arduino API
* A packaging


This project is distributed under License Creative Commons CC BY-NC-SA

<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License</a>.