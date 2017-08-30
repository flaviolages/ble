// 
// Projeto Sensor Hall com BLE HC 06
//
// Por Flávo Lages
//
// 29/08/2017


// Inclui Biblioteca
//#include <SoftwareSerial.h>
//SoftwareSerial SoftSerial(10, 11); // RX, TX 

// Configuração dos Terminais 
//
//
byte led    = 13; // Led incicadir de status 
byte sensor = 8; // Sensor Hall em pull-down
byte sts    = 0; // Recebe status
//
//
// End


void setup() {

// OUTPU'S 
pinMode(led, OUTPUT);
pinMode(sensor, OUTPUT);

// Serial
Serial.begin(9600);

// Serial Software
//SoftSerial.begin(38400);


}

void loop() {

// Litura do sensor
sts = digitalRead(sensor);


// Verifica o status do sensor
if(sts == HIGH){
    // Se fechado desliga o led e não envia sinal. 
        delay(500);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        Serial.println("Fechado...");
    
}else{
    
    // Se aberto liga o led e envia sinal via bluetooth. 
    //
    // Código
    //



      // Verifica se ainda esta aberto e trata com protocolo
      while(sts == LOW){
        sts = digitalRead(sensor);

        // Protocolo
        //
        // Código
        //


        delay(500);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        Serial.println("Aberto...");
        
    
       }// Fim while

    
}




}





