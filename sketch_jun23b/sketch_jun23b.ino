#include <TimerOne.h>
int timer = 1;
int timer2 = 60;
void setup(){
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 pinMode(thisPin, OUTPUT);
 Timer1.initialize(1000000);
Timer1.attachInterrupt( timerIsr );
 }
 
}
int hi=0;
int hd=0;
int md=0;
int mi=0;
int sd=0;
int si=0;

void leds (int x)
{
 switch(x)
 {
 case 0:
 delay(timer);
 for (int thisPin = 7; thisPin <= 12; thisPin++) {
 digitalWrite(thisPin, HIGH);
 }
 
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 for (int thisPin = 7; thisPin <= 12; thisPin++) {
 digitalWrite(thisPin, HIGH);
 }
 
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 break;
 
 
 case 1:
 delay(timer);
 digitalWrite(11, HIGH);
 digitalWrite(6, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(12, HIGH);
 digitalWrite(6, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer); 
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, HIGH);
 }
 
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 delay(timer);
 digitalWrite(6, LOW);
 delay(timer);
 digitalWrite(6, HIGH);
 delay(timer);
 digitalWrite(6, LOW);
 delay(timer);
 break;
 
 
 case 2:
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 break;
 
 
 case 3:
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 break;
 
 
 case 4:
 delay(timer);
 digitalWrite(9, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(9, HIGH);
 digitalWrite(11, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(9, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, HIGH);
 }
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 break;
 
 
 case 5:
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 break;
 
 
 case 6:
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 break;
 
 
 case 7:
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(8, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 break;
 
 
 case 8:
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 break;
 
 
 case 9:
 delay(timer);
 digitalWrite(7, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 digitalWrite(6, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(13, HIGH);
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 for (int thisPin = 7; thisPin <= 12; thisPin++) {
 digitalWrite(thisPin, HIGH);
 }
 delay(timer);
 for (int thisPin = 6; thisPin <= 13; thisPin++) {
 digitalWrite(thisPin, LOW);
 }
 delay(timer);
 break;
 
 
 case 10:
 delay(timer);
 delay(timer);
 digitalWrite(8, HIGH);
 digitalWrite(11, HIGH);
 delay(timer);
 delay(timer);
 digitalWrite(8, LOW);
 digitalWrite(11, LOW);
 delay(timer);
 delay(timer);
 break;
 }
}
 


void tiempo(int ii,int di,int ic,int dc, int id, int dd)
{
  
 leds (ii);
 leds (di);
 leds (10);
 leds (ic);
 leds (dc);
 leds (10);
 leds (id);
 leds (dd);
 // leds (11);
 delay(timer2);
}


void loop()
{
 tiempo(hi,hd,mi,md,si,sd);
}
 void timerIsr()
 {
 sd++;
 if(sd == 10)
 {
 sd=0;
 si++;
 }
 if(si==6)
 {
 sd=0;
 si=0;
 md++;
 }
 if (md==10)
 {
 sd=0;
 si=0;
 md=0;
 mi++;
 }
 if (mi==6)
 {
 sd=0;
 si=0;
 md=0;
 mi=0;
 hd++;
 }
 if (hd == 10)
 {
 sd=0;
 si=0;
 md=0;
 mi=0;
 hd=0;
 hi++;
 }
 if (hi==2 && hi==5)
 {
 sd=0;
 si=0;
 md=0;
 mi=0;
 hd=0;
 hi=0;
 }
 tiempo(hi,hd,mi,md,si,sd);

 }

