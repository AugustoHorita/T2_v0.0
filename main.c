//all these # below set up the PIC
#include <16F877A.h>
#device adc=8
#FUSES NOWDT      //No Watch Dog Timer
#FUSES HS         //Highspeed Osc > 4mhz
#FUSES PUT        //Power Up Timer
#FUSES NOPROTECT  //Code not protected from reading
#FUSES NODEBUG    //No Debug mode for ICD
#FUSES NOBROWNOUT //No brownout reset
#FUSES NOLVP      //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOCPD      //No EE protection
#use delay(clock=20000000)             // Sets crystal oscillator at 20 megahertz
#use rs232(baud=9600, xmit=PIN_C6, invert) //Sets up serial port output pin & baud rate

//main program starts here
void main() {
   //Infinite program loop starts.  LED blinks forever.
   while(true){
      output_high(PIN_B7);    //send a "1" to pin RB7, making RB7 "High" at 5v
            //this will turn on the LED hooked to RB7
      delay_ms(500);        //wait half a second, delays for 500ms 
      output_low(PIN_B7);     //send a "0" to pin RB7, making RB7 "Low" at 0v
      delay_ms(500);      //wait half a second, delays for 500ms
   }
}

/*Notes
You can easily add more LEDs and make them flash in different patterns.
For more readable code, use
#define RED_LED   PIN_B7
#define GREEN_LED PIN_B6
�
�
output_high(RED_LED);
output_high(GREEN_LED);    
*/
