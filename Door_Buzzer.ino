const int trigPin = 8;
const int echoPin = 9;
const int buzzPin = 10;
long distance;
long duration;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 50) {

    digitalWrite(buzzPin, HIGH);

  }
  else {
    digitalWrite(buzzPin, LOW); /*Delete this else{} if you want your buzzer to ring infinitely once door opening is detected. You can set a delay too for the alarm to switch off.*/
  }

  }
