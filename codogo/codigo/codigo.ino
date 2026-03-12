const int pinoLDR = 4;
const int pinoLED = 23;


int valorLuz = 0;

const int limiteEscuridao = 1500; 

void setup() {
  Serial.begin(115200);
  
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoLDR, INPUT);
  
  Serial.println("Sistema de monitoramento de luz iniciado.");
}

void loop() {
  valorLuz = analogRead(pinoLDR);
  

  Serial.print("Intensidade de Luz: ");
  Serial.println(valorLuz);


  if (valorLuz < limiteEscuridao) {
    digitalWrite(pinoLED, HIGH);
    Serial.println("LED ACESO");
  } else {
    digitalWrite(pinoLED, LOW);
    Serial.println("LED APAGADO");
  }

  delay(500); 
}