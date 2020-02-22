# BMW-E90-Seat-CAN
Emulate BMW CAN to allow for functional powered/heated seats

*This all began with a friend wanting to install BMW E90 seats in his 3rd Gen 4Runner...*

Utilizes an Arduino Uno with a CAN-BUS Shield V2 (https://www.seeedstudio.com/CAN-BUS-Shield-V2.html).

Need to install the Seeed-Studio CAN_BUS_Shield library from here:  https://github.com/Seeed-Studio/CAN_BUS_Shield/archive/master.zip

Seats are part of a the BMW K-CAN network which includes all of the body control modules (A/C, infotainment, instrument cluster, seats, car access system, etc.)

NOTE:  This information is currently valid for the E-series chassis in and around the year 2011-ish.  I'll try to write down some more specific information on this in the future.

With regards to the CAN-BUS shield, I utilized the DB9 connector with the following pin-out:

- Pin 2 - Signal Ground (Optional)
- Pin 3 - CAN High
- Pin 5 - CAN Low

I power the Arduino utilizing a barrel connector connected to a DC 12V to 5V buck converter good for 2A (more than enough).

**This is a work in progress** and has only yet been tested utilizing a Raspberry Pi with a similar CAN hat.  In theory, everything should work the same with the Arduino.  I'll be getting around to testing this soon.

<a href="https://ibb.co/hHqFL3x"><img src="https://i.ibb.co/hHqFL3x/IMG-20200221-222630.jpg" alt="IMG-20200221-222630" border="0"></a> <a href="https://ibb.co/z2jyFfh"><img src="https://i.ibb.co/z2jyFfh/IMG-20200221-222701.jpg" alt="IMG-20200221-222701" border="0"></a>
