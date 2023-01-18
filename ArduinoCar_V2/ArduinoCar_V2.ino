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

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    String Move = Serial.readString();
    if (Move == "F"){                         // code to make car move forward
      digitalWrite(Out1, HIGH);
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, HIGH);
    }
    else if (Move == "B"){                    // code to make car move backward
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, HIGH);
      digitalWrite(Out3, HIGH);
      digitalWrite(Out4, LOW);
    }
    else if (Move == "L"){                    // code to make car turn left
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, HIGH);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, HIGH);
    }
    else if (Move == "R"){                    // code to make car turn right
      digitalWrite(Out1, HIGH);
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, HIGH);
      digitalWrite(Out4, LOW);
    }
    else if (Move == "S"){                    // code to make car stop
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, LOW);
    }
  }
}
