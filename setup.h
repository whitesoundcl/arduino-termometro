Serial.begin(9600); //begin!
myservo.attach(9);
pinMode(13,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

//Inicio de calibracion
//inicio de HUD

Serial.println("¡Inicializando!");
Serial.println("calibrando servomotor");
delay(500);
Serial.print("Posicion 0...");
myservo.write(0); 
delay(500);
Serial.println("OK");
Serial.print("Posicion 180...");
myservo.write(176); 
delay(500);
Serial.println("OK");
Serial.println("");
Serial.println("Calculando");

//termino de calibracion
//termino de HUD
