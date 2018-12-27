Servo myservo; 

const int sensor = 0; //lm35
const int ledUno = 2;
const int ledDos = 3;
const int ledTres = 4;

int incomingByte = 0;
int mensaje = 0;

long mv;
long temperatura;
long angulo;
