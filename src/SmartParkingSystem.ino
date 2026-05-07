#include <Servo.h>
#include <LiquidCrystal.h>
#include <ESP8266WiFi.h>

Servo gateServo;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Slot sensors
int slot1 = 2;
int slot2 = 3;
int slot3 = 4;
int slot4 = 5;

// Gate sensor
int gateSensor = 6;

// LEDs
int led1 = A0;
int led2 = A1;
int led3 = A2;
int led4 = A3;

int availableSlots = 4;

void setup() {
  Serial.begin(9600);

  pinMode(slot1, INPUT);
  pinMode(slot2, INPUT);
  pinMode(slot3, INPUT);
  pinMode(slot4, INPUT);
  pinMode(gateSensor, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  gateServo.attach(13);
  gateServo.write(0);

  lcd.begin(16, 2);
  lcd.print("Smart Parking");
  delay(2000);
  lcd.clear();
}

void loop() {
  int occupied = 0;

  occupied += (digitalRead(slot1) == LOW);
  occupied += (digitalRead(slot2) == LOW);
  occupied += (digitalRead(slot3) == LOW);
  occupied += (digitalRead(slot4) == LOW);

  availableSlots = 4 - occupied;

  digitalWrite(led1, digitalRead(slot1) == LOW);
  digitalWrite(led2, digitalRead(slot2) == LOW);
  digitalWrite(led3, digitalRead(slot3) == LOW);
  digitalWrite(led4, digitalRead(slot4) == LOW);

  lcd.setCursor(0, 0);
  lcd.print("Available: ");
  lcd.print(availableSlots);
  lcd.print("   ");

  if (digitalRead(gateSensor) == LOW && availableSlots > 0) {
    gateServo.write(90);
    delay(3000);
    gateServo.write(0);
  }

  Serial.print("Available Slots: ");
  Serial.println(availableSlots);

  delay(1000);
}
