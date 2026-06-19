// Line Follower Robot
// Arduino UNO + L298N + 2 IR Sensors

#define ENA 5
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
#define ENB 6

#define LEFT_SENSOR 2
#define RIGHT_SENSOR 3

int speedMotor = 150;

void forward() {
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void left() {
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void stopRobot() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LEFT_SENSOR, INPUT);
  pinMode(RIGHT_SENSOR, INPUT);
}

void loop() {
  int leftSensor = digitalRead(LEFT_SENSOR);
  int rightSensor = digitalRead(RIGHT_SENSOR);

  // For most IR sensors:
  // Black line = LOW
  // White surface = HIGH

  if (leftSensor == LOW && rightSensor == LOW) {
    forward();
  }
  else if (leftSensor == LOW && rightSensor == HIGH) {
    left();
  }
  else if (leftSensor == HIGH && rightSensor == LOW) {
    right();
  }
  else {
    stopRobot();
  }
}
