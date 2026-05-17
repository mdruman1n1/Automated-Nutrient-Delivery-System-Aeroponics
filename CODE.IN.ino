// Include libraries for sensors and LCD
#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Pin setup
#define DHTPIN 2
#define DHTTYPE DHT22
#define PH_SENSOR A0
#define EC_SENSOR A1
#define TRIG_PIN 3
#define ECHO_PIN 4

// Relay control pins
#define RELAY_MIST 5
#define RELAY_PH_UP 6
#define RELAY_PH_DOWN 7
#define RELAY_REFILL 8

// Create sensor and LCD objects
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Try 0x3F if 0x27 doesn't work

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
  lcd.backlight();

  // Set pin modes
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(RELAY_MIST, OUTPUT);
  pinMode(RELAY_PH_UP, OUTPUT);
  pinMode(RELAY_PH_DOWN, OUTPUT);
  pinMode(RELAY_REFILL, OUTPUT);

  // Start with all relays OFF
  digitalWrite(RELAY_MIST, LOW);
  digitalWrite(RELAY_PH_UP, LOW);
  digitalWrite(RELAY_PH_DOWN, LOW);
  digitalWrite(RELAY_REFILL, LOW);
}

void loop() {
  // Simulated values (you can replace with real sensor readings later)
  float temp = 25.0;
  float humidity = 55.0;
  float phValue = 6.8;
  int ecValue = 350;
  float distance = 15.0; // cm, from ultrasonic

  // Display on Serial Monitor
  Serial.print("Temp: "); Serial.print(temp);
  Serial.print(" C, Humidity: "); Serial.print(humidity);
  Serial.print(" %, pH: "); Serial.print(phValue);
  Serial.print(", EC: "); Serial.print(ecValue);
  Serial.print(", Distance: "); Serial.print(distance); Serial.println(" cm");

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("pH:");
  lcd.print(phValue);
  lcd.print(" T:");
  lcd.print(temp);
  lcd.setCursor(0, 1);
  lcd.print("H:");
  lcd.print(humidity);
  lcd.print("% D:");
  lcd.print(distance);

  // Pump control logic
  if (phValue > 6.5) {
    digitalWrite(RELAY_PH_DOWN, HIGH);  // Add acid
    Serial.println("PH Down Pump ON");
  } else {
    digitalWrite(RELAY_PH_DOWN, LOW);
  }

  if (phValue < 5.5) {
    digitalWrite(RELAY_PH_UP, HIGH);  // Add base
    Serial.println("PH Up Pump ON");
  } else {
    digitalWrite(RELAY_PH_UP, LOW);
  }

  if (ecValue < 400) {
    digitalWrite(RELAY_MIST, HIGH);  // Mist nutrients
    Serial.println("Misting ON");
  } else {
    digitalWrite(RELAY_MIST, LOW);
  }

  if (distance > 20) {
    digitalWrite(RELAY_REFILL, HIGH);  // Refill tank
    Serial.println("Refill ON");
  } else {
    digitalWrite(RELAY_REFILL, LOW);
  }

  delay(5000); // Wait 5 seconds before next reading
}

