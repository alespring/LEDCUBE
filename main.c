 #include <stdlib.h> 
 #include  <avr/io.h> 
 
#define LED1_EIN PORTA |= (1<<PA0);
#define LED2_EIN PORTA |= (1<<PA1);
#define LED3_EIN PORTA |= (1<<PA2);
#define LED4_EIN PORTA |= (1<<PA3);
#define LED5_EIN PORTA |= (1<<PA4);




void cube(uint8_t y, uint8_t z, uint8_t x)
	{
		switch(y)
		{
			case 1:		
						switch(z)
						{
							case 1:
										DDRA |= (1<<PD0);
										PORTA |= (1<<PD0);
										
										switch(x)
										{
												case 1:
														
														DDRD |= (1<<PD7);
														PORTD &= ~(1<<PD7);
														
														break;
												
												case 2:
														DDRD |= (1<<PD6);
														PORTD &= ~(1<<PD6);
														
														break;
										
										
												case 3:
														DDRD |= (1<<PD5);
														PORTD &= ~(1<<PD5);
														
														break;
										
										
												case 4:
														DDRD |= (1<<PD4);
														PORTD &= ~(1<<PD4);
														
														break;
										
										
												case 5:
														DDRD |= (1<<PD3);
														PORTD &= ~(1<<PD3);
														
														break;
							
										
										}//ende switch
							
							break;
							
							
							case 2:
                                    DDRA |= (1<<PD1);
									PORTA |= (1<<PD1);
                                    
										switch(x)
										{
												case 1:
														DDRD |= (1<<PD7);
														PORTD &= ~(1<<PD7);
														
														break;
												
												case 2:
														DDRD |= (1<<PD6);
														PORTD &= ~(1<<PD6);
														
														break;
												
												case 3:
														DDRD |= (1<<PD5);
														PORTD &= ~(1<<PD5);
														
														break;
												
												case 4:
														DDRD |= (1<<PD4);
														PORTD &= ~(1<<PD4);
														
														break;
												
												case 5:
														DDRD |= (1<<PD3);
														PORTD &= ~(1<<PD3);
														
														break;
								
										
										}//ende switch	
										
							break;
							
							
							case 3:
                                    DDRA |= (1<<PD2);
                                    PORTA |= (1<<PD2);
										switch(x)
										{
												case 1:
														DDRD |= (1<<PD7);
														PORTD &= ~(1<<PD7);
														
														break;
												
												case 2:
														DDRD |= (1<<PD6);
														PORTD &= ~(1<<PD6);
														
														break;
												
												case 3:
														DDRD |= (1<<PD5);
														PORTD &= ~(1<<PD5);
														
														break;
												
												case 4:
														DDRD |= (1<<PD4);
														PORTD &= ~(1<<PD4);
														
														break;
												
												case 5:
														DDRD |= (1<<PD3);
														PORTD &= ~(1<<PD3);
														
														break;
										
										}//ende switch
										
							break;
							
							
							case 4:
									DDRA |= (1<<PD3);
									PORTA |= (1<<PD3);
										
										switch(x)
										{
												case 1:
														
														DDRD |= (1<<PD7);
														PORTD &= ~(1<<PD7);
														
														break;
												
												case 2:
														
														DDRD |= (1<<PD6);
														PORTD &= ~(1<<PD6);
														
														break;
												
												case 3:
														
														DDRD |= (1<<PD5);
														PORTD &= ~(1<<PD5);
														
														break;
												
												case 4:
														
														DDRD |= (1<<PD4);
														PORTD &= ~(1<<PD4);
														
														break;
												
												case 5:
														
														DDRD |= (1<<PD3);
														PORTD &= ~(1<<PD3);
														
														break;
										
										}//ende switch
										
							break;
							
							
							case 5:
										DDRA |= (1<<PD4);
										PORTA |= (1<<PD4);
										
										switch(x)
										{
												
												case 1:
														
														DDRD |= (1<<PD7);
														PORTD &= ~(1<<PD7);
														
														break;
												
												case 2:
														
														DDRD |= (1<<PD6);
														PORTD &= ~(1<<PD6);
														
														break;
												
												case 3:
														
														DDRD |= (1<<PD5);
														PORTD &= ~(1<<PD5);
														
														break;
												
												case 4:
														
														DDRD |= (1<<PD4);
														PORTD &= ~(1<<PD4);
														
														break;
												
												case 5:
														
														DDRD |= (1<<PD3);
														PORTD &= ~(1<<PD3);
														
														break;
										}//ende switch
	
							break;
							
						}//ende switch
						
			break;
 
			case 2:		
						switch(z)
						{
							case 1:
									DDRA |= (1<<PD0);
									PORTA &= ~(1<<PD0);
									
									switch(x)
									{
											case 1:
													DDRD |= (1<<PD7);
													PORTD |= (1<<PD7);
												
											break;
												
												
											case 2:
													DDRD |= (1<<PD6);
													PORTD |= (1<<PD6);
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);
													PORTD |= (1<<PD5);
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);
													PORTD |= (1<<PD4);
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);
													PORTD |= (1<<PD3);
												
											break;
												
										
									}//ende switch
										
							break;
							
							case 2:
									DDRA |= (1<<PD1);
									PORTA &= ~(1<<PD1);
									
									switch(x)
									{
											case 1:
													DDRD |= (1<<PD7);
													PORTD |= (1<<PD7);
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);
													PORTD |= (1<<PD6);
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);
													PORTD |= (1<<PD5);
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);
													PORTD |= (1<<PD4);
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);
													PORTD |= (1<<PD3);
												
											break;
										
									}//ende switch							
							
							break;
							
							case 3:
									DDRA |= (1<<PD2);
									PORTA &= ~(1<<PD2);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC7);
													PORTC |= (1<<PC7);
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);
													PORTD |= (1<<PD6);
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);
													PORTD |= (1<<PD5);
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);
													PORTD |= (1<<PD4);
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);
													PORTD |= (1<<PD3);
												
											break;
										
										}//ende switch
							
							break;
							
							
							case 4:
									DDRA |= (1<<PD3);
									PORTA &= ~(1<<PD3);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC7);
													PORTC |= (1<<PC7);
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);
													PORTD |= (1<<PD6);
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);
													PORTD |= (1<<PD5);
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);
													PORTD |= (1<<PD4);
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);
													PORTD |= (1<<PD3);
												
											break;	
										
									}//ende switch
							
							break;
							
							case 5:
									DDRA |= (1<<PD4);
									PORTA &= ~(1<<PD4);
									
									switch(x)
									{
												case 1:
													DDRC |= (1<<PD7);
													PORTC |= (1<<PD7);
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);
													PORTD |= (1<<PD6);
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);
													PORTD |= (1<<PD5);
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);
													PORTD |= (1<<PD4);
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);
													PORTD |= (1<<PD3);
												
											break;	
										
										}//ende switch
							
							break;
							
							
						}//ende switch
						
			break;
						
			
			case 3:		
						switch(z)
						{
							case 1:
									DDRA |= (1<<PD0);
									PORTA |= (1<<PD0);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD5);
													PORTC &= ~(1<<PD5);
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PD4);
													PORTC &= ~(1<<PD4);
												
											break;
												
												
											case 3:
													DDRC |= (1<<PD3);
													PORTC &= ~(1<<PD3);
												
											break;
												
												
											case 4:
													DDRC |= (1<<PD6);
													PORTC &= ~(1<<PD6);
												
											break;
												
												
											case 5:
													DDRC |= (1<<PD7);
													PORTC &= ~(1<<PD7);
												
											break;
										
									}//ende switch
							
							break;
										
						
							
							case 2:
										
									DDRA |= (1<<PD1);
									PORTA |= (1<<PD1);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD5);
													PORTC &= ~(1<<PD5);
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PD4);
													PORTC &= ~(1<<PD4);
												
											break;
												
												
											case 3:
													DDRC |= (1<<PD3);
													PORTC &= ~(1<<PD3);
												
											break;
												
												
											case 4:
													DDRC |= (1<<PD6);
													PORTC &= ~(1<<PD6);
												
											break;
												
												
											case 5:
													DDRC |= (1<<PD7);
													PORTC &= ~(1<<PD7);
												
											break;
										
									}//ende switch
							
							
							
							break;
							
							case 3:
									DDRA |= (1<<PD2);
									PORTA |= (1<<PD2);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD5);
													PORTC &= ~(1<<PD5);
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PD4);
													PORTC &= ~(1<<PD4);
												
											break;
												
												
											case 3:
													DDRC |= (1<<PD3);
													PORTC &= ~(1<<PD3);
												
											break;
												
												
											case 4:
													DDRC |= (1<<PD6);
													PORTC &= ~(1<<PD6);
												
											break;
												
												
											case 5:
													DDRC |= (1<<PD7);
													PORTC &= ~(1<<PD7);
												
											break;
										
									}//ende switch
                            break;        
                            
							case 4:
									DDRA |= (1<<PD3);
									PORTA |= (1<<PD3);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD5);
													PORTC &= ~(1<<PD5);
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PD4);
													PORTC &= ~(1<<PD4);
												
											break;
												
												
											case 3:
													DDRC |= (1<<PD3);
													PORTC &= ~(1<<PD3);
												
											break;
												
												
											case 4:
													DDRC |= (1<<PD6);
													PORTC &= ~(1<<PD6);
												
											break;
												
												
											case 5:
													DDRC |= (1<<PD7);
													PORTC &= ~(1<<PD7);
												
											break;
										
									}//ende switch
							break;
                            
							case 5:
							        DDRA |= (1<<PD4);
									PORTA |= (1<<PD4);
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD5);
													PORTC &= ~(1<<PD5);
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PD4);
													PORTC &= ~(1<<PD4);
												
											break;
												
												
											case 3:
													DDRC |= (1<<PD3);
													PORTC &= ~(1<<PD3);
												
											break;
												
												
											case 4:
													DDRC |= (1<<PD6);
													PORTC &= ~(1<<PD6);
												
											break;
												
												
											case 5:
													DDRC |= (1<<PD7);
													PORTC &= ~(1<<PD7);
												
											break;
										
									}//ende switch
                        break;
                
						}//ende switch	
						
						//ALLE PC AUF PD UMSCHREIBEN
			break;
			
			
			case 4:		
						switch(z)
						{
								case 1:
										DDRA |= (1<<PD0);
										PORTA &= ~(1<<PD0);
										
											switch(x)
											{
                                                case 1:
													
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
													
													DDRC |= (1<<PD5);
													PORTC |= (1<<PD5);
                                                break;
												
                                                case 2: 
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
													
													DDRC |= (1<<PD4);
													PORTC |= (1<<PD4);
                                                break;        
												
                                                case 3:
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
											
													DDRC |= (1<<PD3);
													PORTC |= (1<<PD3);
                                                break;        
												
                                                case 4:
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
											
													DDRC |= (1<<PD6);
													PORTC |= (1<<PD6);
                                                break;        
												
                                                case 5:
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
											
													DDRC |= (1<<PD7);
													PORTC |= (1<<PD7);	
                                                break;
										
										}//ende switch
							
							break;
							
							case 2: DDRA |= (1<<PD0);
                                    PORTA &= ~(1<<PD0);
										
											switch(x)
											{
											case 1:
													
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
													
													DDRC |= (1<<PD5);
													PORTC |= (1<<PD5);
                                            break;
												
											case 2: 
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
													
													DDRC |= (1<<PD4);
													PORTC |= (1<<PD4);
                                            break;        
												
											case 3:
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
											
													DDRC |= (1<<PD3);
													PORTC |= (1<<PD3);
                                            break;        
												
											case 4:
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
											
													DDRC |= (1<<PD6);
													PORTC |= (1<<PD6);
                                            break;        
												
											case 5:
													//DDRA |= (1<<PA0);
													//PORTA &= ~(1<<PA0);
											
													DDRC |= (1<<PD7);
													PORTC |= (1<<PD7);	
											break;
										
										}//ende switch	
							break;
							
							case 3:
									DDRA |= (1<<PA2);
									PORTA &= ~(1<<PA2);
									
										switch(x)
										{
												case 1:
														DDRC |= (1<<PC5);
														PORTC |= (1<<PC5);
												
												break;
												
												case 2:
														DDRC |= (1<<PC4);
														PORTC |= (1<<PC4);
												
												break;
												
												case 3:
														DDRC |= (1<<PC3);
														PORTC |= (1<<PC3);
												
												break;
												
												case 4:
														DDRC |= (1<<PC6);
														PORTC |= (1<<PC6);
												
												break;
												
												case 5:
														DDRC |= (1<<PC7);
														PORTC |= (1<<PC7);
												
												break;
										
										}//ende switch
							break;
							
							case 4:
									DDRA |= (1<<PD3);
									PORTA &= ~(1<<PD3);
									
										switch(x)
										{
												case 1:
														DDRC |= (1<<PC5);
														PORTC |= (1<<PC5);
												
												break;
												
												case 2:
														DDRC |= (1<<PC4);
														PORTC |= (1<<PC4);
												
												break;
												
												case 3:
														DDRC |= (1<<PC3);
														PORTC |= (1<<PC3);
												
												break;
												
												case 4:
														DDRC |= (1<<PC6);
														PORTC |= (1<<PC6);
												
												break;
												
												case 5:
														DDRC |= (1<<PC7);
														PORTC |= (1<<PC7);
												
												break;
										
										}//ende switch
							break;
							
							case 5:
									DDRA |= (1<<PA4);
									PORTA &= ~(1<<PD4);
									
										switch(x)
										{
												case 1:
														DDRC |= (1<<PC5);
														PORTC |= (1<<PC5);
												
												break;
												
												case 2:
														DDRC |= (1<<PC4);
														PORTC |= (1<<PC4);
												
												break;
												
												case 3:
														DDRC |= (1<<PC3);
														PORTC |= (1<<PC3);
												
												break;
												
												case 4:
														DDRC |= (1<<PC6);
														PORTC |= (1<<PC6);
												
												break;
												
												case 5:
														DDRC |= (1<<PC7);
														PORTC |= (1<<PC7);
												
												break;
										
										}//ende switch
                            break;						
	
						}//ende switch
						
			break;
						
			
			case 5:	
                    
						switch(z)
						{
							case 1:
                                    DDRA |= (1<<PA0);
									PORTA |= (1<<PA0);
                                    DDRB = 0x00;
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);
                                                        PORTB &= ~(1<<PB0);
												
												break;
                                                   
												case 2:
                                                        DDRB |= (1<<PB1);
                                                        PORTB &= ~(1<<PB1);
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);
                                                        PORTB &= ~(1<<PB2);
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);
                                                        PORTB &= ~(1<<PB3);
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);
                                                        PORTB &= ~(1<<PB4);
												
												break;
										
										}//ende switch
                            break;
							
							case 2:
									DDRA |= (1<<PA1);
									PORTA |= (1<<PA1);
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);
                                                        PORTB &= ~(1<<PB0);
												
												break;
                                                 
												case 2:
                                                        DDRB |= (1<<PB1);
                                                        PORTB &= ~(1<<PB1);
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);
                                                        PORTB &= ~(1<<PB2);
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);
                                                        PORTB &= ~(1<<PB3);
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);
                                                        PORTB &= ~(1<<PB4);
												
												break;
										
										}//ende switch					
							break;
                            
							case 3:
									DDRA |= (1<<PA2);
									PORTA |= (1<<PA2);
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);
                                                        PORTB &= ~(1<<PB0);
												
												break;
                                                 
												case 2:
                                                        DDRB |= (1<<PB1);
                                                        PORTB &= ~(1<<PB1);
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);
                                                        PORTB &= ~(1<<PB2);
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);
                                                        PORTB &= ~(1<<PB3);
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);
                                                        PORTB &= ~(1<<PB4);
												
												break;
										
										}//ende switch
							break;
                            
							case 4:
									DDRA |= (1<<PA3);
									PORTA |= (1<<PA3);
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);
                                                        PORTB &= ~(1<<PB0);
												
												break;
                                                 
												case 2:
                                                        DDRB |= (1<<PB1);
                                                        PORTB &= ~(1<<PB1);
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);
                                                        PORTB &= ~(1<<PB2);
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);
                                                        PORTB &= ~(1<<PB3);
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);
                                                        PORTB &= ~(1<<PB4);
												
												break;
										
										}//ende switch
                            break;
							
							case 5:
									DDRA |= (1<<PA4);
									PORTA |= (1<<PA4);
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);
                                                        PORTB &= ~(1<<PB0);
												
												break;
                                                  
												case 2:
                                                        DDRB |= (1<<PB1);
                                                        PORTB &= ~(1<<PB1);
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);
                                                        PORTB &= ~(1<<PB2);
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);
                                                        PORTB &= ~(1<<PB3);
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);
                                                        PORTB &= ~(1<<PB4);
												
												break;
										
										}//ende switch
							break;
                            
						}//ende switch
						
			break;
	
		}//ende switch
	}//ende void
    
    
	
	
	
	/*ISR(TIMER1_COMPA_vect)
    {
    
    }*/
    
    
 int main(void) 
 { 
 	DDRA = 0x00; // alle Port_D auf Ausgang setzen 
 	//PORTA = 0x00; // alle Port_D auf HIGH gesetzt 
	DDRB = 0x00;
	DDRC = 0x00;
	DDRD =0x00;
	
	cube(5, 5, 5);
    cube(4, 5, 4);
    cube(3, 5, 5);
    cube(2, 5, 4);
    cube(1, 5, 5);
    
    /*cube(5, 3, 4);
    cube(4, 3, 4);
    cube(3, 3, 3);
    cube(2, 3, 3);
    cube(1, 3, 3);
    */
    
    
	
	
	
	
 	  	while(1) 
    { 
		
		/*DDRA |= (1<<PA3);
		DDRB |= (1<<PB4);
		
		PORTA |= (1<<PA3);
		PORTB &= ~(1<<PB4);*/
	
		
 	}// end of while 
 
 
 	return 0; 
 }//end of main 
