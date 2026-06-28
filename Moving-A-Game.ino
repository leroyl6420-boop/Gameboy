#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCL A5
#define SDA A4
#define X A0
#define Y A1
#define Push 4

int x = 0;
int y = 0;

#define OLED_RESET -1
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#define SCREEN_ADDRESS 0x3C

void setup() {
  Serial.begin(9600);
  pinMode(Push, INPUT_PULLUP);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
}

void loop() {
  int xVal = analogRead(X);
  int yVal = analogRead(Y);

  if (xVal > 800){
   x++;
  }
  if (yVal > 800){
   y++;
  }
  if (x < 0){
    x = 1;
  }
  if (y < 0){
    y = 1;
  }
  if (xVal < 220){
    x = x-1;
  }
  if (yVal < 220){
    y = y-1;
  }
  if (x > 12){
    x = 12;
  }
  if (y > 6){
    y = 6;
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(x * 10, y * 10);
  display.print("A");
  display.display();
  delay(100);
}
