#include <T2open_v0.h>

void main()
{
   setup_adc_ports(ALL_ANALOG);

   //Example blinking LED program
   while(true)
   {
      output_low(LED_PIN);
      delay_ms(DELAY);
      output_high(LED_PIN);
      delay_ms(DELAY);
   }

}
