int Out1 = 2;
int Out2 = 3;

int Out3 = 4;
int Out4 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(Out1, OUTPUT);
  pinMode(Out2, OUTPUT);

  pinMode(Out3, OUTPUT);
  pinMode(Out4, OUTPUT);

  digitalWrite(Out1, LOW);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Move forward
  digitalWrite(Out1, HIGH);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, HIGH);

  //Move backwards
  digitalWrite(Out1, LOW);
  digitalWrite(Out2, HIGH);
  digitalWrite(Out3, HIGH);
  digitalWrite(Out4, LOW);

  //Turn right
  digitalWrite(Out1, HIGH);
  digitalWrite(Out2, LOW);
  digitalWrite(Out3, HIGH);
  digitalWrite(Out4, LOW);

  //Move forward
  digitalWrite(Out1, LOW);
  digitalWrite(Out2, HIGH);
  digitalWrite(Out3, LOW);
  digitalWrite(Out4, HIGH);
}

