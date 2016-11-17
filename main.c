//all these # below set up the PIC
#include <16F628A.h>
//Configuracao FUSES
#FUSES NOWDT
#FUSES INTRC_IO
#FUSES NOPUT
#FUSES NOPROTECT
#FUSES NOBROWNOUT
#FUSES NOMCLR
#FUSES NOLVP
#FUSES NOCPD

#use delay(clock=4000000)             // Sets crystal oscillator at 4 megahertz
//#use rs232(baud=9600, xmit=PIN_C6, invert) //Sets up serial port output pin & baud rate


#define BUTTON_PIN  PIN_A4  
#define LED_PIN     PIN_B7 


//main program starts here
void main() {


   //Infinite program loop starts.  LED blinks forever.
   while(true){
      if (input(BUTTON_PIN)){
         output_high(LED_PIN);    //send a "1" to pin RB7, making RB7 "High" at 5v
               //this will turn on the LED hooked to RB7
         delay_ms(1000);        //wait half a second, delays for 500ms 
         output_low(LED_PIN);     //send a "0" to pin RB7, making RB7 "Low" at 0v
         delay_ms(1000);      //wait half a second, delays for 500ms
      }
      else{
         output_high(LED_PIN);    //send a "1" to pin RB7, making RB7 "High" at 5v
               //this will turn on the LED hooked to RB7
         delay_ms(500);        //wait half a second, delays for 500ms 
         output_low(LED_PIN);     //send a "0" to pin RB7, making RB7 "Low" at 0v
         delay_ms(500);      //wait half a second, delays for 500ms           
      }
   }
}

/*Notes
You can easily add more LEDs and make them flash in different patterns.
For more readable code, use
#define RED_LED   PIN_B7
#define GREEN_LED PIN_B6
…
…
output_high(RED_LED);
output_high(GREEN_LED);    
*/
