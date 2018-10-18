# Kinetic-FA18

Kinetic Modeling FA 2018 at Parsons


## UPDATE: It Works!


## Includes

* Arduino Code and Sketches
* Images
* Screenshot of Serial Monitor

## What Went Wrong

* Serial appears to blank after certain number of pull requests
* USB ports faulty (is this a motor shiel problem?)
* Tested with multiple versions of every single piece, from motors, to program computers (iMAC 2015 5k, MacBook Pro 2016)
* Bailed on Photo Cell and moved to Potentiometer for more control
* Possibly (probably) using wrong motor


## Thoughts

Seems to be some weird things going on with such a large influx of libraries. Motor appears to respond to code in loop, but lack of input and failing Serial monitor for unknow reasons (Universal Serial Bus, power supply, parts, code..?) make troubleshooting and altering tedious and unsuccessful.

The timeout from the USB was one of the most common issues. Overall, the lack of proper serial communication was likley the main downfall of this fproject.

![alt text](https://github.com/fozzest/Kinetic-FA18/blob/master/Screen%20Shot%202018-10-17%20at%206.05.33%20PM.png)

