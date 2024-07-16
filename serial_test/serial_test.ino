void setup() {
    Serial.begin(9600);
}

void loop() {
    String data = "hello world";
    Serial.println(data);
    delay(1000);
}
