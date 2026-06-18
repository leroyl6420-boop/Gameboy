#include <Arduino.h>
#include <Wire.h>
#define RED_LED 11
#define YELLOW_LED 10
#define GREEN_LED 8
#define BLUE_LED 9
#define RED_BUTTON 5
#define YELLOW_BUTTON 4
#define GREEN_BUTTON 2 
#define BLUE_BUTTON 3
int b1 = random(8, 12);
  int b2 = random(8, 12);
  int b3 = random(8, 12);
  int b4 = random(8, 12);
  int b5 = random(8, 12);
  int b6 = random(8, 12);
  int b7 = random(8, 12);
  int b8 = random(8, 12);
  int b9 = random(8, 12);
  int b10 = random(8, 12);
  int b11 = random(8, 12);
  int b12 = random(8, 12);
  int b13 = random(8, 12);
  int b14 = random(8, 12);
  int b15 = random(8, 12);
  int b16 = random(8, 12);
  int b17 = random(8, 12);
  int b18 = random(8, 12);
  int b19 = random(8, 12);
  int b20 = random(8, 12);
int numbers [20] = {b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20}; 
int cycle = 0;


void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_BUTTON, INPUT_PULLUP);
  pinMode(YELLOW_BUTTON, INPUT_PULLUP);
  pinMode(GREEN_BUTTON, INPUT_PULLUP);
  pinMode(BLUE_BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  cycle++;
  int loop = 0;
  do {
    digitalWrite(numbers[loop], HIGH);
    delay(1000);
    digitalWrite(numbers[loop], LOW);
    delay(1000);
    loop++;
  } while (loop < cycle);

}
