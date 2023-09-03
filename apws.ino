int water;
void setup() {
    pinMode(8, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(6, INPUT);
}

void loop() {

    water=digitalRead(6); 

    if (water==LOW) 
    {
        
        digitalWrite(8, LOW);
        digitalWrite(2, LOW);
    }

    else
    {
        digitalWrite(2, HIGH);
        digitalWrite(8, HIGH);
        delay(500);
        digitalWrite(8, LOW);
    } 
    delay(200);
}