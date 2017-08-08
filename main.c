 #include <stdlib.h> 
 #include  <avr/io.h> 
 

	
 int main(void) 
 { 
 	DDRD = 0xFF; // alle Port_D auf Ausgang setzen 
 	PORTD = 0x00; // alle Port_D auf HIGH gesetzt 
	
	
 	  	while(1) 
    { 
 
 	}// end of while 
 
 
 	return 0; 
 }//end of main 
