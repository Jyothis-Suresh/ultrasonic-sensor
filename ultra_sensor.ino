#define trigPin 8
#define echoPin 7

long duration;
long distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,INPUT);
  pinMode(echoPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);

  digitalWrite(echoPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = duration/58.2;

  Serial.println(distance);
  delay(50);

}
