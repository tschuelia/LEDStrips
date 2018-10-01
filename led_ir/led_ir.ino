#include <IRremote.h>

IRsend irsend;

long lastMotionMillis = 0;
bool ledEnabled = false;

void disableLed() {
  if (ledEnabled) {
    Serial.println("Disable LED");
    toggleLed();
  } else {
    Serial.println("LED already disabled");
  }
}

void enableLed() {
  if (ledEnabled) {
    Serial.println("LED already enabled");
  } else {
    Serial.println("Enable LED");
    toggleLed();
  }
}

void toggleLed() {
  ledEnabled = !ledEnabled;
  irsend.sendNEC(0xFF02FD, 32);
}

void setup() {
  pinMode(8, INPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  for (;;) {
    if (lastMotionMillis > 0 && (millis() - lastMotionMillis > 60000)) {
      disableLed();
      lastMotionMillis = 0;
    } else if (digitalRead(8) == HIGH) {
      enableLed();
      lastMotionMillis = millis();
    }
    delay(100);
  }
}
