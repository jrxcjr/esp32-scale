## Feature List

This is an expected feature list for the project, here's a list of all of the expected features and the steps taken to reach every step

Based on the Outline Speedrunning Technique ([Outline Speedrunning](https://learnhowtolearn.org/how-to-build-extremely-quickly/?utm_source=tldrwebdev))

## Phase 0 

This is the first functional prototype that deems the basic intent of the project as fulfilled

Used Stack:
* C++
* Platform.io

### Weight Reading

On this topic, it is expected that the scale can read weight consistently. 

#### Screens

The project is expected to have a screen, how this is going to be done, we do not know, as this might be open to change to get a larger screen.

#### Buttons

The project will probably have two or three buttons: one for taring the scale, one to start a time taking scale reading and another button (or potentiometer) to move through the menus for config.

### SPIFFS Config

Spiffs configs to store information as Calibration factors and WIFI Credentials to avoid needing recalibration to be hardcoded.

### Wireless Comms 

This project should have access to wifi and transmit information via websockets to a local network address that has a websocket server awaiting the details from the timed measure. This might be done via Bluetooth or wifi, not decided yet, probably bluetooth for the ease of internet-less access.

### Testing

The base project, will need to have some testing capabilities to avoid breaking the already developed code.

#### Results Visualization

If time allows, this project might have a way to visualize the data received, how that will be done, is up to details, don't know if there will be a python script or a node-red application.

## Phase 2 

This might come if the result of phase 1 is enough to keep the project going, the project might be available for testing by others when that happens.

### Battery powering

This might come if the prototype developed above is considered to be advantageous to have a battery socket. The batteries that will power the system probably will come in a AA or AAA package, to avoid dealing with charging systems and power modulation sub-modules

#### Deep sleep/shutdown toggle

This needs to be implemented if the battery route is taken to avoid depleting the battery quickly.

### Menu 

There might be a way to manipulate the scale via the menu on the screen, if a better screen is provided or we can make do with a 16x2 i2c lcd.

#### Text input

This raises the question for the text input, how that is going to be done, is a hill that we will deal with later on.


## Phase 3 

This might come when we decide that the product is finished enough to be considered "sellable" and the project is documented enough to end up needing the sharp edges to be sanded down for normal users.

### Custom PCB 

If the project advances enough and is in a nice usable state, a custom pcb might be needed to shrink even further the form factor for the project. This will entail a lot of studies in KICAD and eletronics theory. (if possible, the esp32 and the hx711 should be socketable for ease of maintenance.)

### Wifi Assistant Connection

This might come in a second stage if the connection via wifi is decided that is the way to go and the connection might have some ways to deal with it.

### Companion app

Probably won't be done unless the product gets to phase 3, it is a huge overhead for development for a not that great result.

### Web interface

This is probably the way to go on this regard, on how to save information to spiffs and fetch data from the measures

### Historical data

When the development is done, we will try to support general data collection and historical regression/data visualization.
