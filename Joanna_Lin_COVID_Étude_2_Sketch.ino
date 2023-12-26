// ultrasonic
const int trigPin = 8;
const int echoPin = 9;

float duration, distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
//  ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  if (distance > 200) {
    return NULL;
  }

  Serial.println(distance);
  delay (100);
}
