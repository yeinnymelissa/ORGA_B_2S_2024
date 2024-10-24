#define Pin12 12
#define Pin13 13
#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define Pin5 5
#define Pin6 6
#define Pin7 7
char caracter;

void setup() {
Serial.begin(9600);
pinMode(Pin12, OUTPUT);
pinMode(Pin13, OUTPUT);
pinMode(Pin1, OUTPUT);
pinMode(Pin2, OUTPUT);
pinMode(Pin3, OUTPUT);
pinMode(Pin4, OUTPUT);
pinMode(Pin5, OUTPUT);
pinMode(Pin6, OUTPUT);
pinMode(Pin7, OUTPUT);
}

void loop() {
  Serial.println("PRUEBA");
int contador = 1;
if(contador < 2){
  digitalWrite(Pin4, HIGH);
  digitalWrite(Pin5, HIGH);
  delay(500);
  digitalWrite(Pin2, HIGH);
  delay(500);
  digitalWrite(Pin2, LOW);
  Serial.println("Verifique High");
}
if(Serial.available()) {
caracter = Serial.read();

if(caracter == 'a'){ digitalWrite(Pin12, HIGH);}
if(caracter == 'b'){ digitalWrite(Pin12, LOW);} 
if(caracter == 'c'){ digitalWrite(Pin13, HIGH);}
if(caracter == 'd'){ digitalWrite(Pin13, LOW);}
}
contador += 1;
delay(1000);

}