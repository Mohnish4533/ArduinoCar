// checking weather pins were damaged

int in1, in2, in3, in4;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);

  in1 = digitalRead(8);
  in2 = digitalRead(9);
  in3 = digitalRead(10);
  in4 = digitalRead(11);

  Serial.println(in1);
  Serial.println(in2);
  Serial.println(in3);
  Serial.println(in4);
  Serial.println("\n");

  delay(2000);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  in1 = digitalRead(8);
  in2 = digitalRead(9);
  in3 = digitalRead(10);
  in4 = digitalRead(11);

  Serial.println(in1);
  Serial.println(in2);
  Serial.println(in3);
  Serial.println(in4);
  Serial.println("\n");

  delay(2000);
}
