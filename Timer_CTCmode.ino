#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

ISR(TIMER1_COMPA_vect){
  PORTD ^= (1<<PORTD4); //toggle LED
}

int main(void){
    DDRD |= 0x10;  //set PD4 to output for LED

    OCR1A  = 15625; //set total timer ticks
    TCCR1B |= (1<<WGM12); //set CTC mode
    TCCR1B |= (1<<CS12) | (1<<CS10); //set prescaler to 1024

    sei(); //enable global interrupt
    TIMSK1 = (1<<OCIE1A); //enable output compare match A

    while(1){
      _delay_ms(500);  
    }
}
