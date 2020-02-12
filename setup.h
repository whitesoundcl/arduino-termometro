Serial.begin(9600); //begin!
myservo.attach(9);
pinMode(13,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

//Inicio de calibracion
//inicio de HUD

Serial.println(F("¡Inicializando!"));
Serial.println(F("calibrando servomotor"));
delay(500);
Serial.print(F("Posicion 0..."));
myservo.write(0); 
delay(500);
Serial.println(F("OK"));
Serial.print(F("Posicion 180..."));
myservo.write(176); 
delay(500);
Serial.println(F("OK"));
Serial.println(F(""));
Serial.println(F("Calculando"));

//termino de calibracion
//termino de HUD
