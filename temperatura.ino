/*Autor: Luis Clavijo (WhitesoundCl)
  Modifiquen el codigo Como ustedes quieran :)

//sensor de temperatura (lm35),
//mirado desde el lado plano
// / I \
// 1 2 3
// G T V
// N E C
// D M C

/*para medir la temperatura el transistor tiene un rango de 0 a 100* (0 a 5000  mV);
cada 10 mv es 1 grado C!.  para calcularlo con analogread() hay que hacer calculo!
El valor que nos puede dar analog read es de 0 a 1023
Entonces que tenemos..?
0-5000mv
0-1023... 
Tenemos que hacer que esos valores encajen!
El calculo es el siguiente :
analogRead() * 5000 / 1023
lo que nos da es un valor en mV!
Y ese valor tendriamos que dividirlo por 10 (recordando que cada 10 mV es un grado)
lo cual nos da la temperatura del sensor!

Supongo que el calculo seria 
temperatura = analogRead() * 5000 / 1023 /10

Para convertir los grados en algo "deducible" gracias a un servomotor 
hay que hacer este calculo
temperatura * 180 / 40
180 es es maximo angulo de giro de un servomotor (0-180);
40 es el maximo de temperatura que queremos representar 
temperatura es la temperatura!

Para realizar el proyecto necesitas:
1 Servo (Cualquier tamaño);
3 Diodos LED (Cualquier color);
3 Resistencias de 220 Ohms;
1 Integrado LM35 (Si quieres puedes colocar mas, para obtener una segunda opinion de la lectura );


*/
#include <Servo.h> 
 
 
                
#include "variables.h" //cada variable en una sola pestaña


void setup() {
#include "setup.h" 

}

void loop() {
  
#include "loop.h"
  
}
