int Out1 = 2;
int Out2 = 3;

int Out3 = 4;
int Out4 = 5;

int ENA = 10;
int ENB = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(Out1, OUTPUT);
  pinMode(Out2, OUTPUT);

  pinMode(Out3, OUTPUT);
  pinMode(Out4, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  digitalWrite(Out1, LOW);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Move forward
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(Out1, HIGH);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, HIGH);

  delay(2000);

  //Move backwards
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
  digitalWrite(Out1, LOW);
  digitalWrite(Out2, HIGH);
  digitalWrite(Out3, HIGH);
  digitalWrite(Out4, LOW);

  delay(2000);

  //Turn right
  analogWrite(ENA, 255);
  analogWrite(ENB, 100);
  digitalWrite(Out1, HIGH);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, HIGH);

  delay(2000);

  //Move left
  analogWrite(ENA, 100);
  analogWrite(ENB, 255);
  digitalWrite(Out1, HIGH);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, HIGH);

  delay(2000);
}

