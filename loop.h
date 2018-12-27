
//Inicio del Loop
//Inicia con lectura de Temperatura para luego determinar si el integrado se encuentra bien conectado
mv = (analogRead(sensor) * 5000L) / 1023;  //Lee la temperatura
temperatura = mv / 10;                     //la transforma en Cº
//delay(2000);


if(temperatura >= 100){                           //este es el IF que corre si la temperatura es mayor que 100, ya que naturalmente la temperatura ambiente va de 0 a 40 C, 
  Serial.println("Algo anda mal..");              //por lo que si marca 100 o mas, es que hay un problema con el integrado. este if puede ser perfectamente omitido o modificado 
  Serial.print("Las lecturas no son normales:");  //para cambiar su valor de lectura incorrecta.
  Serial.print(temperatura);
  Serial.println(" C");
  Serial.println("¿Esta el integrado conectado?");
  myservo.write(179);                   
  digitalWrite(4,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH); 
  delay(2000);  //
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  myservo.write(0);
  delay(2000); //
  return;
}

digitalWrite(4,LOW);
digitalWrite(2,LOW);//apaga los leds indicadores de progreso que quedan encendidos luego de que el loop  vuelve a comenzar.
digitalWrite(3,LOW);


 




delay(500);

long v1;  //primera lectura
mv = (analogRead(sensor) * 5000L) / 1023;
v1 = mv / 10;
digitalWrite(2,HIGH);

delay(2000);

long v2; //Segunda lectura
mv = (analogRead(sensor) * 5000L) / 1023;
v2 = mv / 10;
digitalWrite(3,HIGH);


delay(2000);


long v3; //tercera lectura
mv = (analogRead(sensor) * 5000L) / 1023;
v3 = mv / 10;

digitalWrite(4,HIGH);


delay(2000);


//8 segundos;

long promedio;   //sacamos el promedio de todas las lecturas
promedio = (v1 + v2 + v3);
promedio = (promedio/3);
angulo = (promedio * 180) /40;  //transforma el calculo en un angulo para el servo
myservo.write(angulo); 

delay(500);
//inicio del hud del puerto serial
#include "HUD.h"
//termino del hud del puerto serial
delay(500);



    
  
