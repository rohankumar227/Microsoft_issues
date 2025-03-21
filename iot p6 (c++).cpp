const int ledPin = 9;
const int ldrPin = A0;

void setup() {
    pinMode (ledPin, OUTPUT);
    pinMode (ldrPin, IUTPUT);
}

void loop() {
    int ldrValue = analogRead(ldrPin);

    if (ldrValue < 500) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }

    delay(100);
}