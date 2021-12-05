# Timer_interrupts
Timer interrupt using clear timer on compare match(CTC) mode

## Introduction
The program is written as part of a learning series of timers and interrupts using AVR microcontrollers. The timer counts to a predefined value and upon reaching the count
an interrupt is triggered. The interrupt service routine (ISR) causes an LED to toggle.

## Technologies
#### Software
* Arduino IDE
* C language

#### Hardware
* Atmega328pu microcontroller
* USB to Serial Converter (used PL2303 USB to UART converter)
* LED
* 220 ohm resistor
* 10kohm resistor
* button
* 22pf capacitors (2)
* 16 MHZ crystal

## Setup
When using Arduino IDE with Atmega328pu microcontroller, ensure you select the following under Tools menu before uploading:
* Board: "Arduino Nano"
* Processor: "ATmega328P(Old Bootloader)"
* Port: (choose appropriate port in which USB to Serial Converter is connected)
