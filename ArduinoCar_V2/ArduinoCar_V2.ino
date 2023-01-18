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

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    String Move = Serial.readString();
    if (Move == "F"){             // code to make car move forward
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);    
      digitalWrite(Out1, HIGH);      
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, HIGH);
    }
    else if (Move == "B"){        // code to make car move backward
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, HIGH);
      digitalWrite(Out3, HIGH);
      digitalWrite(Out4, LOW);
    }
    else if (Move == "L"){        // code to make car turn left on spot
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, HIGH);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, HIGH);
    }
    else if (Move == "R"){        // code to make car turn right on spot
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      digitalWrite(Out1, HIGH);
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, HIGH);
      digitalWrite(Out4, LOW);
    }
    else if (Move == "FR"){       // code to make car turn right while moving forwards
      analogWrite(ENA, 255);
      analogWrite(ENB, 150);
      digitalWrite(Out1, HIGH);      
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, HIGH);
    }
    else if (Move == "FL"){       // code to make car turn left while moving forwards
      analogWrite(ENA, 150);
      analogWrite(ENB, 255);
      digitalWrite(Out1, HIGH);      
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, HIGH);
    }
    else if (Move == "BR"){       // code to make car turn right while moving backwards
      analogWrite(ENA, 255);
      analogWrite(ENB, 150);
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, HIGH);
      digitalWrite(Out3, HIGH);
      digitalWrite(Out4, LOW);
    }    
    else if (Move == "BL"){       // code to make car turn left while moving backwards
      analogWrite(ENA, 150);
      analogWrite(ENB, 255);
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, HIGH);
      digitalWrite(Out3, HIGH);
      digitalWrite(Out4, LOW);
    }        
    else if (Move == "S"){        // code to make car stop
      digitalWrite(Out1, LOW);
      digitalWrite(Out2, LOW);
      digitalWrite(Out3, LOW);
      digitalWrite(Out4, LOW);
    }
  }
}
