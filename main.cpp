#include <SPI.h>

byte address=0x00;
int CS=10;
int digitalPotWrite(int value){
  digitalWrite(CS,LOW);
  SPI.transfer(address);
  SPI.transfer(value);
  digitalWrite(CS,HIGH);}
void setup(){
  pinMode(CS, OUTPUT);
  SPI.begin();
    digitalPotWrite(1);}


void loop(){
  for(int i=0;i<128;i++){
    digitalPotWrite(i);
    delay(5);
    }
    digitalPotWrite(1);
  }


  
