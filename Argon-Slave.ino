
#include <Wire.h>

 
void setup() {
    Serial.begin(9600);
    Wire.begin(0x8);
    Wire.onReceive(receiveEvent);

}
void receiveEvent(int howMany)
{

    while( Wire.available()){

         int c = Wire.read();
         if( 0 < c & c <= 20 )
         {
             Serial.println("Too Dark"); 
         }
         else if( 20 < c & c <= 30 )
         {
             Serial.println("Dark"); 
         }
         else if( 30 < c & c  <= 40 )
         {
             Serial.println("Medium"); 
         }
          else if( 40 < c & c <= 60 )
         {
             Serial.println("Bright"); 
         }
          else if( 60 < c & c <= 100 )
         {
             Serial.println("Too Bright"); 
         }
         else
         {
             Serial.println("Invalid Data"); 
         }

    }

}




void loop() {
   delay(100);
}



