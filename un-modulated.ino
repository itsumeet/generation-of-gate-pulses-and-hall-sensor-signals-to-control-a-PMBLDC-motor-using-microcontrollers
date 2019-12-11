
#include <avr/io.h>
#include <util/delay.h>

// Output signals
int T1 = 1;
int T2 = 2;
int T3 = 3;
int T4 = 4;
int T5 = 5;
int T6 = 6;

// Hall effect sensor 
int H1 = 7;
int H2 = 8;
int H3 = 9;  


void setup() {
  //Initialize Input
  pinMode(H1, INPUT);
  pinMode(H2, INPUT);
  pinMode(H3, INPUT);  
  //Initialize Output
  pinMode(T1, OUTPUT);
  pinMode(T2, OUTPUT);
  pinMode(T3, OUTPUT);
  pinMode(T4, OUTPUT);
  pinMode(T5, OUTPUT);
  pinMode(T6, OUTPUT);
}

/*void timer1_pwm_setup(void)
{
   // output pins
   DDRD |= (1 << PB5) | (1 << PB6) | (1 << PB7);

   // non-inverting modes for fast pwm
   TCCR1A |= (1 << COM1A1) | (1 << COM1B1) | (1 << COM1C1) | (1 << WGM12) | (1 << WGM11) | (1 << WGM10);

   // prescalar 8
   TCCR1B |= (1 << CS11);        
  }
*/
void loop() {
  // Unmodulated 
  // Read hall effect sensor signals
int  Ha = digitalRead(H1);
int  Hb = digitalRead(H2);
int

Hc = digitalRead(H3);
  // 101
  if (Ha == HIGH && Hb == LOW && Hc == HIGH)
    {
      digitalWrite(T1, HIGH);
      digitalWrite(T2, LOW);
      digitalWrite(T3, LOW);
      digitalWrite(T4, LOW);
      digitalWrite(T5, LOW);
      digitalWrite(T6, HIGH);
      }      
  // 100
  if (Ha == HIGH && Hb == LOW && Hc == LOW )
    {
      digitalWrite(T1, HIGH);
      digitalWrite(T2, HIGH);
      digitalWrite(T3, LOW);
      digitalWrite(T4, LOW);
      digitalWrite(T5, LOW);
      digitalWrite(T6, LOW);
      }
  // 110
  if (Ha == HIGH && Hb == HIGH && Hc == LOW )
    {
      digitalWrite(T1, LOW);
      digitalWrite(T2, HIGH);
      digitalWrite(T3, HIGH);
      digitalWrite(T4, LOW);
      digitalWrite(T5, LOW);
      digitalWrite(T6, LOW);
      }      
  // 010
  if (Ha == LOW && Hb == HIGH && Hc == LOW )
    {
      digitalWrite(T1, LOW);
      digitalWrite(T2, LOW);
      digitalWrite(T3, HIGH);
      digitalWrite(T4, HIGH);
      digitalWrite(T5, LOW);
      digitalWrite(T6, LOW);
      }      
  // 011
  if (Ha == LOW && Hb == HIGH && Hc == HIGH )
    {
      digitalWrite(T1, LOW);
      digitalWrite(T2, LOW);
      digitalWrite(T3, LOW);
      digitalWrite(T4, HIGH);
      digitalWrite(T5, HIGH);
      digitalWrite(T6, LOW);
      }      
  // 001
  if (Ha == LOW && Hb == LOW && Hc == HIGH )
    {
      digitalWrite(T1, LOW);
      digitalWrite(T2, LOW);
      digitalWrite(T3, LOW);
      digitalWrite(T4, LOW);
      digitalWrite(T5, HIGH);
      digitalWrite(T6, HIGH);
      }     
 /* // Modulated
  OCR1A = 1000;
  delay();
  OCR1B = 1000;
  delay();
  OCR1C = 1000;*/    
}

