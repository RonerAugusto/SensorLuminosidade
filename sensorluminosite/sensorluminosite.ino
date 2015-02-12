int val=0;  //variavel para ler status do pino

void setup (){
  
pinMode (13,OUTPUT);
Serial.begin(9600);//usar porta serial para comunicaçao 
  
  
  
}

void loop 
(){
  
  
  
  
  val=analogRead(2);  //le o valor do sensor 
  Serial.println(val);
  
  
  if (val >= 700){
    
  digitalWrite(13,HIGH);  //se o valor lido pelo sensor como maior ou igual a 700 ele acende 
  delay(val);
  
  }else
  
  {
  digitalWrite(13,LOW);
  delay(val);
  }

}
