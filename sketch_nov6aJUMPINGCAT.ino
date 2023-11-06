//Code sampled from Basic LED Matrix code provided on Slack
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>

// create and instance of the library
Adafruit_IS31FL3731 matrix = Adafruit_IS31FL3731();

void setup() {

  Serial.begin(9600);
  if (!matrix.begin()) {
    Serial.println("IS31 not found");
    while (1)
      ;
  }
  Serial.println("let's gooooooo");
}


void loop() {
  //FRAME 1
  matrix.clear();

  matrix.drawPixel(3, 0, 255);
  matrix.drawPixel(3, 1, 255);
  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);

  matrix.drawPixel(4, 4, 255);
  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);
  matrix.drawPixel(4, 8, 255);

  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);
  matrix.drawPixel(5, 7, 255);

  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 255);
  matrix.drawPixel(6, 6, 255);
  matrix.drawPixel(6, 7, 255);

  matrix.drawPixel(7, 0, 255);
  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 172);
  matrix.drawPixel(7, 6, 255);
  matrix.drawPixel(7, 7, 255);
  matrix.drawPixel(7, 8, 255);

//column with eye
  matrix.drawPixel(8, 1, 255);
  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 172);
  matrix.drawPixel(8, 6, 255);
  matrix.drawPixel(8, 7, 255);

  matrix.drawPixel(9, 0, 255);
  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 172);
  matrix.drawPixel(9, 6, 255);
  matrix.drawPixel(9, 7, 255);
  matrix.drawPixel(9, 8, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 4, 255);
  // delay
  delay(500);


  //FRAME 2
  matrix.clear();

  matrix.drawPixel(2, 0, 255);
  matrix.drawPixel(2, 1, 255);

  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);

  matrix.drawPixel(4, 4, 255);
  matrix.drawPixel(4, 5, 172);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);
  matrix.drawPixel(4, 8, 255);

  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 172);
  matrix.drawPixel(5, 6, 255);
  matrix.drawPixel(5, 7, 255);

  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 172);
  matrix.drawPixel(6, 6, 255);
  matrix.drawPixel(6, 7, 255);

  matrix.drawPixel(7, 0, 255);
  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 172);
  matrix.drawPixel(7, 6, 255);
  matrix.drawPixel(7, 7, 255);
  matrix.drawPixel(7, 8, 255);

  matrix.drawPixel(8, 1, 255);
  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 172);
  matrix.drawPixel(8, 6, 255);
  matrix.drawPixel(8, 7, 255);

  matrix.drawPixel(9, 0, 255);
  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 172);
  matrix.drawPixel(9, 6, 255);
  matrix.drawPixel(9, 7, 255);
  matrix.drawPixel(9, 8, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 4, 255);
  delay(500);

  //FRAME 3
  matrix.clear();

  matrix.drawPixel(2, 0, 255);
  matrix.drawPixel(2, 1, 255);

  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);

  matrix.drawPixel(4, 4, 255);
  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);

  matrix.drawPixel(5, 3, 255);
  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);

  matrix.drawPixel(6, 3, 172);
  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 255);
  matrix.drawPixel(6, 6, 255);

  matrix.drawPixel(7, 0, 255);
  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 172);
  matrix.drawPixel(7, 6, 255);
  matrix.drawPixel(7, 7, 255);
  matrix.drawPixel(7, 8, 255);

  matrix.drawPixel(8, 1, 255);
  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 172);
  matrix.drawPixel(8, 6, 255);

  matrix.drawPixel(9, 0, 255);
  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 172);
  matrix.drawPixel(9, 6, 255);
  matrix.drawPixel(9, 7, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 4, 255);
  delay(500);

  //FRAME 4
  matrix.clear();
  matrix.drawPixel(2, 0, 255);
  matrix.drawPixel(2, 1, 255);

  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);

  matrix.drawPixel(4, 4, 255);
  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);

  matrix.drawPixel(5, 3, 255);
  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);

  matrix.drawPixel(6, 3, 172);
  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 255);
  matrix.drawPixel(6, 6, 255);

  matrix.drawPixel(7, 0, 255);
  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 172);
  matrix.drawPixel(7, 6, 255);
  matrix.drawPixel(7, 7, 255);

  matrix.drawPixel(8, 1, 255);
  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 172);
  matrix.drawPixel(8, 6, 255);

  matrix.drawPixel(9, 0, 255);
  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 172);
  matrix.drawPixel(9, 6, 255);
  matrix.drawPixel(9, 7, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 4, 255);
  delay(500);

  //FRAME 5
  matrix.clear();

  matrix.drawPixel(3, 0, 255);
  matrix.drawPixel(3, 1, 255);
  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);

  matrix.drawPixel(4, 4, 255);
  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);

  matrix.drawPixel(5, 3, 255);
  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);

  matrix.drawPixel(6, 3, 172);
  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 255);
  matrix.drawPixel(6, 6, 255);

  matrix.drawPixel(7, 0, 255);
  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 172);
  matrix.drawPixel(7, 6, 255);
  matrix.drawPixel(7, 7, 255);

  matrix.drawPixel(8, 1, 255);
  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 172);
  matrix.drawPixel(8, 6, 255);

  matrix.drawPixel(9, 0, 255);
  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 172);
  matrix.drawPixel(9, 6, 255);
  matrix.drawPixel(9, 7, 255);
  matrix.drawPixel(9, 8, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 4, 255);
  delay(500);

  //FRAME 6
  matrix.clear();

  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);

  matrix.drawPixel(4, 0, 255);
  matrix.drawPixel(4, 1, 255);
  matrix.drawPixel(4, 4, 255);
  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);

  matrix.drawPixel(5, 3, 255);
  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);

  matrix.drawPixel(6, 3, 172);
  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 255);
  matrix.drawPixel(6, 6, 255);

  matrix.drawPixel(7, 0, 255);
  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 172);
  matrix.drawPixel(7, 6, 255);
  matrix.drawPixel(7, 7, 255);
  matrix.drawPixel(7, 8, 255);

  matrix.drawPixel(8, 1, 255);
  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 4, 255);
  matrix.drawPixel(8, 5, 172);
  matrix.drawPixel(8, 6, 255);

  matrix.drawPixel(9, 0, 255);
  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 172);
  matrix.drawPixel(9, 6, 255);
  matrix.drawPixel(9, 7, 255);
  matrix.drawPixel(9, 8, 255);

  matrix.drawPixel(10, 1, 255);
  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 4, 255);
  delay(500);


  //FRAME 7
  matrix.clear();

  matrix.drawPixel(3, 3, 255);
  matrix.drawPixel(3, 4, 255);

  matrix.drawPixel(4, 1, 255);
  matrix.drawPixel(4, 2, 255);
  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 172);
  matrix.drawPixel(4, 8, 255);

  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);
  matrix.drawPixel(5, 7, 255);

  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 172);
  matrix.drawPixel(6, 6, 255);
  matrix.drawPixel(6, 7, 255);

  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 255);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 255);
  matrix.drawPixel(7, 6, 172);
  matrix.drawPixel(7, 7, 255);
  matrix.drawPixel(7, 8, 255);

  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 3, 255);
  matrix.drawPixel(8, 5, 255);
  matrix.drawPixel(8, 6, 172);
  matrix.drawPixel(8, 7, 255);

  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 255);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 255);
  matrix.drawPixel(9, 6, 172);
  matrix.drawPixel(9, 7, 255);
  matrix.drawPixel(9, 8, 255);

  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 3, 255);
  matrix.drawPixel(10, 5, 255);
  delay(500);

  //FRAME 8
  matrix.clear();

  matrix.drawPixel(3, 1, 255);
  matrix.drawPixel(3, 2, 255);
  matrix.drawPixel(3, 3, 255);
  matrix.drawPixel(3, 4, 255);

  matrix.drawPixel(4, 5, 255);
  matrix.drawPixel(4, 6, 255);
  matrix.drawPixel(4, 7, 255);
  matrix.drawPixel(4, 8, 255);

  matrix.drawPixel(5, 4, 255);
  matrix.drawPixel(5, 5, 255);
  matrix.drawPixel(5, 6, 255);
  matrix.drawPixel(5, 7, 255);

  matrix.drawPixel(6, 4, 172);
  matrix.drawPixel(6, 5, 172);
  matrix.drawPixel(6, 6, 255);
  matrix.drawPixel(6, 7, 255);

  matrix.drawPixel(7, 1, 255);
  matrix.drawPixel(7, 2, 172);
  matrix.drawPixel(7, 3, 255);
  matrix.drawPixel(7, 4, 255);
  matrix.drawPixel(7, 5, 255);
  matrix.drawPixel(7, 6, 172);
  matrix.drawPixel(7, 7, 255);
  matrix.drawPixel(7, 8, 255);

  matrix.drawPixel(8, 2, 255);
  matrix.drawPixel(8, 3, 255);
  matrix.drawPixel(8, 5, 255);
  matrix.drawPixel(8, 6, 172);
  matrix.drawPixel(8, 7, 255);

  matrix.drawPixel(9, 1, 255);
  matrix.drawPixel(9, 2, 172);
  matrix.drawPixel(9, 3, 255);
  matrix.drawPixel(9, 4, 255);
  matrix.drawPixel(9, 5, 255);
  matrix.drawPixel(9, 6, 172);
  matrix.drawPixel(9, 7, 255);
  matrix.drawPixel(9, 8, 255);

  matrix.drawPixel(10, 2, 255);
  matrix.drawPixel(10, 3, 255);
  matrix.drawPixel(10, 5, 255);
  delay(500);
}
