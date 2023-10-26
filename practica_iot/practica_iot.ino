int luz_verde = 11;
int luz_roja = 12;
int luz_amar = 13;
int time_delay=1000;

char opt;

void setup() {
  pinMode(luz_verde, OUTPUT);
  digitalWrite(luz_verde, LOW);
  Serial.begin(9600);  ///9600 baudios unidad de medida de tranferencia de pulso electrico

  pinMode(luz_roja, OUTPUT);
  digitalWrite(luz_roja, LOW);
  Serial.begin(9600);

  pinMode(luz_amar, OUTPUT);
  digitalWrite(luz_amar, LOW);
  Serial.begin(9600);



  // put your setup code here, to run once:
}

void loop() {
  if (Serial.available() > 0) {
    opt = Serial.read();

    if (opt == '1') {
      Serial.write("luz verde ON");
      digitalWrite(luz_verde, HIGH);
    } else {
      if (opt == '2') {
        Serial.print("Luz verde OFF");
        digitalWrite(luz_verde, LOW);
      }
    }

      if (opt == '3') {
        Serial.write("luz roja ON");
        digitalWrite(luz_roja, HIGH);
      } else {
        if (opt == '4') {
          Serial.print("Luz roja OFF");
          digitalWrite(luz_roja, LOW);
        }
      }
        if (opt == '5') {
          Serial.write("luz Amarilla ON");
          digitalWrite(luz_amar, HIGH);
        } else {
          if (opt == '6') {
            Serial.print("Luz Amarilla OFF");
            digitalWrite(luz_amar, LOW);
          }
        }

        if (opt == '7') {
          Serial.write("Encender Todo");
          digitalWrite(luz_verde,HIGH);
          digitalWrite(luz_roja,HIGH);
          digitalWrite(luz_amar,HIGH);
        } else {
          if (opt == '8') {
            Serial.print("Apagar Todo");
            digitalWrite(luz_verde,LOW);
            digitalWrite(luz_roja,LOW);
            digitalWrite(luz_amar,LOW);
          }
        }
         
      if (opt == '9') {
          Serial.write("luz Intermitente");
          digitalWrite(luz_verde, HIGH);
          digitalWrite(luz_roja, HIGH);
          digitalWrite(luz_amar, HIGH);
          delay(time_delay);
          digitalWrite(luz_verde,LOW);
          digitalWrite(luz_roja,LOW);
          digitalWrite(luz_amar,LOW);
          delay(time_delay);
          digitalWrite(luz_verde, HIGH);
          digitalWrite(luz_roja, HIGH);
          digitalWrite(luz_amar, HIGH);
          delay(time_delay);
          digitalWrite(luz_verde,LOW);
          digitalWrite(luz_roja,LOW);
          digitalWrite(luz_amar,LOW);
        digitalWrite(luz_verde, HIGH);
          digitalWrite(luz_roja, HIGH);
          digitalWrite(luz_amar, HIGH);
          delay(time_delay);
          digitalWrite(luz_verde,LOW);
          digitalWrite(luz_roja,LOW);
          digitalWrite(luz_amar,LOW);
          delay(time_delay);
          digitalWrite(luz_verde, HIGH);
          digitalWrite(luz_roja, HIGH);
          digitalWrite(luz_amar, HIGH);
          delay(time_delay);
          digitalWrite(luz_verde,LOW);
          digitalWrite(luz_roja,LOW);
          digitalWrite(luz_amar,LOW);
        

        } 
        }



        // put your main code here, to run repeatedly:
      }

