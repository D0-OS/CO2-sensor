float sensorValue;
int redLed = 13;
int blueLed = 12;
int yellowLed = 11;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  Serial.begin(9600);
  Serial.println("Дай погреться, холодно мне!");
  delay(20000);
}
void loop()
{
  int val;
  sensorValue = analogRead(0);
  Serial.println("Sensor Value: ");
  Serial.print(sensorValue);
  //Serial.print();

    digitalWrite(yellowLed, LOW);
    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, LOW);

  if(sensorValue > 180 && sensorValue <= 350){
    Serial.println(" | Открой окошко, пожалуйста! Душно ппц");
    digitalWrite(yellowLed, HIGH);
  }

  if(sensorValue > 350 && sensorValue <= 600){
    Serial.println(" | У тебя где-то газ протИк!");
    digitalWrite(yellowLed, HIGH);
    digitalWrite(blueLed, HIGH);
  }

  if(sensorValue > 600){
    Serial.println(" | Ты еще живой???");
    digitalWrite(yellowLed, HIGH);
    digitalWrite(blueLed, HIGH);
    digitalWrite(redLed, HIGH);
  }

  
  
  Serial.println("");
  delay(500);
}
