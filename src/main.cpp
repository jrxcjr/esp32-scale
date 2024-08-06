//LOAD CELL LIBRARY
#include "HX711.h"
// https://github.com/bogde/HX711

//Wiring for the load cell
const int LOADCELL_DT_PIN = 2;
const int LOADCELL_SCK_PIN = 4;

HX711 scale;

// CALIBRATION FACTOR
float CalibrationFactor(float scale_reading, float known_weight) {
  Serial.println("READING:");
  Serial.print(scale_reading);

  Serial.println("KNOWN WEIGHT");
  Serial.print(known_weight);

  int calibration_factor;

  return calibration_factor = scale_reading / known_weight;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.begin(4000);
  Serial.println("Hello, ESP32! Device Booted!");

  //Scale setup for reading information
  Serial.begin(57600);
  Serial.println("Starting Scale Setup");
  scale.begin(LOADCELL_DT_PIN, LOADCELL_SCK_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:

  //SCALE SETUP
  if (scale.is_ready()) {
    //Taring Scale
    Serial.println("Scale Setup is Ready");
    Serial.println("Tare, Remove Any Weights from the scale");
    delay(3000);
    scale.tare();
    Serial.println("Tare Done... ");
    
    //setting up known weight
    Serial.println("Place a Known Weight on the Scale...");
    delay(3000);
    scale.set_scale();
    long scale_reading = scale.get_units(10);
    
    
    
    Serial.println("scale_reading: ");
    scale.set_scale(CalibrationFactor(scale_reading, 400));
    delay(100);

    // Calculated & Reading the calibrated weight
    Serial.println("Calibrated Weight: ");
    Serial.print(scale.get_units(10));
    Serial.println("End of Simulation");
  }

  else {
    Serial.println("HX711 not found, please contact support");
  }
}

//FUNCTION TO GROW RAPIDLY THE VALUES FOR THE SCALE

// NEEDED FUNCTIONALITIES:

// TARE FUNCTION
// BUTTON TO TARE THE SCALE
// CLOCK FUNCTION

// LCD SCREEN TO DISPLAY DATA

// CONNECTION VIA BT TO ANOTHER DEVICE
// FUNCTION TO CREATE A NEW DATA STREAM VIA WEBSOCKET?
