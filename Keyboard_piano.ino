/*************************************
 * Program : Project 52. Keyboard piano
 * Input   : 8 Tombol push
 * Output  : BUZZER
 * 125 Proyek Arduino Inkubatek
 * www.tokotronik.com
 * ***********************************/
void setup(){
  for(char i=2; i<10; i++){
    pinMode(i,INPUT);
    digitalWrite(i,HIGH);
  }
}

void loop(){
  if(digitalRead(2)==LOW) tone(10,264); //Do
  else if(digitalRead(3)==LOW) tone(10,297);  //Re
  else if(digitalRead(4)==LOW) tone(10,330);  //Mi
  else if(digitalRead(5)==LOW) tone(10,352);  //Fa
  else if(digitalRead(6)==LOW) tone(10,396);  //Sol
  else if(digitalRead(7)==LOW) tone(10,440);  //La
  else if(digitalRead(8)==LOW) tone(10,495);  //Si
  else if(digitalRead(9)==LOW) tone(10,528);  //Do
  else noTone(10);
}
