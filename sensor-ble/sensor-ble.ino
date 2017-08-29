// 
// Projeto Sensor Hall com BLE HC 06
//
// Por Flávo Lages
//
// 29/08/2017



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


}

void loop() {

// Litura do sensor
sts = digitalRead(sensor);


// Verifica o status do sensor
if(sts == HIGH){
    // Se fechado desliga o led e não envia sinal. 
    digitalWrite(led, LOW);
    
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


        delay(100);
        digitalWrite(led, HIGH);
        delay(100);
        digitalWrite(led, LOW);
    
       }// Fim while

    
}




}





