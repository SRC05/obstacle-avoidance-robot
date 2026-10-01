#define ena 11
#define motor1a 9
#define motor1b 10

#define enb 6
#define motor2a 4
#define motor2b 5

#define trig 2
#define echo 3

void setup()
{
  pinMode(ena, OUTPUT);
  pinMode(motor1a, OUTPUT);
  pinMode(motor1b, OUTPUT);
  
  pinMode(enb, OUTPUT);
  pinMode(motor2a, OUTPUT);
  pinMode(motor2b, OUTPUT);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  int raw_value = pulseIn(echo, HIGH);
  serial.println(raw_value);
  
  float distance = raw_value
  
  analogWrite(ena, 100);
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);
  
  delay(5000);
  
  analogWrite(ena, 200);
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);
  
  delay(5000);
  
}