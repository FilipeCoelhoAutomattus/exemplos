#define F_CPU 16000000
#include <avr/io.h>
#include <delay.h>

int main(){
DDRB=255; //define que todos os pinos do portb serão saida. o pino D13 do arduino
esta nesse registrador
PORTB=0; //escreve zero no registrador

while(1){
PORTB=~PORTB; //Inverte o estado de todo registrador, 0->1:1->0
_delay_ms(250); //pausa 250 milisegundos
}
return 1; //nunca chegaremos aqui
}
