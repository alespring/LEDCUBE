 #include <stdlib.h> 
 #include  <avr/io.h> 
 #include <avr/interrupt.h>

 
#define LED1_EIN PORTA |= (1<<PA0);
#define LED2_EIN PORTA |= (1<<PA1);
#define LED3_EIN PORTA |= (1<<PA2);
#define LED4_EIN PORTA |= (1<<PA3);
#define LED5_EIN PORTA |= (1<<PA4);


#ifndef F_CPU
#define F_CPU    20000000
#endif		
			

#define IRQS_PER_SECOND    1000						// Fuer optimale Genauigkeit muss
													// IRQS_PER_SECOND ein Teiler von F_CPU sein
													// und IRQS_PER_SECOND ein Vielfaches von 100.
													// Ausserdem muss gelten F_CPU / IRQS_PER_SECOND <= 65536
													// 500 µs //

#define IRQS_PER_10MS     (IRQS_PER_SECOND / 1000)	// Anzahl IRQs pro 10 Millisekunden

// Gültigkeitsprüfung.
// Bei ungeeigneten Werten gibt es einen Compilerfehler
#if (F_CPU/IRQS_PER_SECOND > 65536) || (IRQS_PER_10MS < 1) || (IRQS_PER_10MS > 255)
#   error Diese Werte fuer F_CPU und IRQS_PER_SECOND
#   error sind ausserhalb des gueltigen Bereichs!
#endif


 uint8_t ms, ms10, ms100, sec;
 uint8_t test;

ISR(TIMER1_COMPA_vect)
{
  static uint8_t interrupt_num_10ms;				// zaehlvariable deklarieren
      
    if (++interrupt_num_10ms == IRQS_PER_10MS)    	// interrupt_num_10ms erhöhen und mit Maximalwert vergleichen
    {
        interrupt_num_10ms = 0;						// interrupt_num_10ms zurücksetzen
		ms++;										//jede Miliisekunde
      
    }
	
	if(ms==10) //alle zehn millisekunden
	{
		ms = 0;
		ms10++;
	}
	
	if(ms10==10)//alle hundert millisekunden
	{
		ms10=0;
		ms100++;
		
	}
	
	if(ms100==10)//alle sekunden
	{
		ms100 = 0;
		sec++;
		test++;
		
	}
	
}//End of ISR



void cube(uint8_t y, uint8_t z, uint8_t x)
	{
		switch(y)
		{
			case 1:	  //Ebene1
						switch(z)
						{
							case 1:	//Reihe1
										DDRA |= (1<<PA0);//Pin A0
										PORTA |= (1<<PA0);//HIGH Pin A0
										
										switch(x)
										{
												case 1:	//position
														
														DDRD |= (1<<PD7);//Pin D7
														PORTD &= ~(1<<PD7);// LOW Pin D7
														
														break;
												
												case 2:	//Position
														DDRD |= (1<<PD6);//Pin D6
														PORTD &= ~(1<<PD6);//LOW Pin D6
														
														break;
										
										
												case 3:	//Position
														DDRD |= (1<<PD5);//Pin5
														PORTD &= ~(1<<PD5);//LOW Pin5
														
														break;
										
										
												case 4:	//Position
														DDRD |= (1<<PD4);//Pin4
														PORTD &= ~(1<<PD4);//LOW Pin4
														
														break;
										
										
												case 5:	//Position
														DDRD |= (1<<PD3);//Pin3
														PORTD &= ~(1<<PD3);//LOW Pin3
														
														break;
							
										
										}//ende switch
							
							break;
							
							
							case 2:	//Reihe2
                                    DDRA |= (1<<PA1);//Pin A1
									PORTA |= (1<<PA1);//HIGH Pin A1
                                    
										switch(x)
										{
												case 1:	//Position
														DDRD |= (1<<PD7);//Pin D7
														PORTD &= ~(1<<PD7);//LOW
														
														break;
												
												case 2:	//Position
														DDRD |= (1<<PD6);//Pin D6
														PORTD &= ~(1<<PD6);//LOW
														
														break;
												
												case 3:	//Position
														DDRD |= (1<<PD5);//Pin D5
														PORTD &= ~(1<<PD5);//LOW
														
														break;
												
												case 4:		//Position
														DDRD |= (1<<PD4);//Pin D4
														PORTD &= ~(1<<PD4);//LOW
														
														break;
												
												case 5:	//Positon
														DDRD |= (1<<PD3);//Pin D3
														PORTD &= ~(1<<PD3);//LOW
														
														break;
								
										
										}//ende switch	
										
							break;
							
							
							case 3:	//Reihe3
                                    DDRA |= (1<<PA2);//Pin A2
                                    PORTA |= (1<<PA2);//HIGH Pin A2
										switch(x)
										{
												case 1:
														DDRD |= (1<<PD7);//Pin D7
														PORTD &= ~(1<<PD7);//LoW D7
														
														break;
												
												case 2:
														DDRD |= (1<<PD6);//Pin D6
														PORTD &= ~(1<<PD6);//LOW Pin D6
														
														break;
												
												case 3:
														DDRD |= (1<<PD5);//Pin D5
														PORTD &= ~(1<<PD5);//LOW D5
														
														break;
												
												case 4:
														DDRD |= (1<<PD4);//Pin D4
														PORTD &= ~(1<<PD4);//LOW D4
														
														break;
												
												case 5:
														DDRD |= (1<<PD3);//Pin D3
														PORTD &= ~(1<<PD3);//LOW D3
														
														break;
										
										}//ende switch
										
							break;
							
							
							case 4:	//Reihe4
									DDRA |= (1<<PA3);//Pin A3
									PORTA |= (1<<PA3);//HIGH Pin A3
										
										switch(x)
										{
												case 1:
														
														DDRD |= (1<<PD7);//Pin D3
														PORTD &= ~(1<<PD7);//LOW D7
														
														break;
												
												case 2:
														
														DDRD |= (1<<PD6);//Pin D6
														PORTD &= ~(1<<PD6);//LOW D6
														
														break;
												
												case 3:
														
														DDRD |= (1<<PD5);//Pin D5
														PORTD &= ~(1<<PD5);//LOW D5
														
														break;
												
												case 4:
														
														DDRD |= (1<<PD4);//Pin D4
														PORTD &= ~(1<<PD4);//LOW D4
														
														break;
												
												case 5:
														
														DDRD |= (1<<PD3);//Pin D3
														PORTD &= ~(1<<PD3);//LOW D3
														
														break;
										
										}//ende switch
										
							break;
							
							
							case 5:	//Reihe5
										DDRA |= (1<<PA4);//Pin A4
										PORTA |= (1<<PA4);//HIGH A4
										
										switch(x)
										{
												
												case 1:
														
														DDRD |= (1<<PD7);//Pin D7
														PORTD &= ~(1<<PD7);//LOW D7
														
														break;
												
												case 2:
														
														DDRD |= (1<<PD6);//Pin D6
														PORTD &= ~(1<<PD6);//LOW D6
														
														break;
												
												case 3:
														
														DDRD |= (1<<PD5);//Pin D5
														PORTD &= ~(1<<PD5);//LOW D5
														
														break;
												
												case 4:
														
														DDRD |= (1<<PD4);//Pin D4
														PORTD &= ~(1<<PD4);//LOW D4
														
														break;
												
												case 5:
														
														DDRD |= (1<<PD3);//Pin D3
														PORTD &= ~(1<<PD3);//LOW D3
														
														break;
										}//ende switch
	
							break;
							
						}//ende switch
						
			break;
 
			case 2:	  //Ebene2
						switch(z)
						{
							case 1:
									DDRA |= (1<<PA0);//Pin A0
									PORTA &= ~(1<<PA0);//LOW A0
									
									switch(x)
									{
											case 1:
													DDRD |= (1<<PD7);//Pin D2
													PORTD |= (1<<PD7);//HIGH D7
												
											break;
												
												
											case 2:
													DDRD |= (1<<PD6);//Pin D6
													PORTD |= (1<<PD6);//HIGH D6
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);//Pin D5
													PORTD |= (1<<PD5);//HIGH D5
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);//Pin D4
													PORTD |= (1<<PD4);//HIGH D4
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);//Pin D3
													PORTD |= (1<<PD3);//HIGH D3
												
											break;
												
										
									}//ende switch
										
							break;
							
							case 2:
									DDRA |= (1<<PA1);//Pin A1
									PORTA &= ~(1<<PA1);//LOW A1
									
									switch(x)
									{
											case 1:
													DDRD |= (1<<PD7);//Pin D7
													PORTD |= (1<<PD7);//HIGH D7
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);//Pin D6
													PORTD |= (1<<PD6);//HIGH D6
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);//Pin D5
													PORTD |= (1<<PD5);//HIGH D5
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);//Pin D4
													PORTD |= (1<<PD4);//HIGH D4
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);//Pin D3
													PORTD |= (1<<PD3);//HIGH D3
												
											break;
										
									}//ende switch							
							
							break;
							
							case 3:
									DDRA |= (1<<PA2);//Pin A2
									PORTA &= ~(1<<PA2);//LOW A2
									
									switch(x)
									{
											case 1:
													DDRD |= (1<<PD7);//Pin D7
													PORTD |= (1<<PD7);//HIGH D7
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);//Pin D6
													PORTD |= (1<<PD6);///HIGH D6
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);//Pin D5
													PORTD |= (1<<PD5);//HIGH D5
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);//Pin D4
													PORTD |= (1<<PD4);//HIGH D4
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);//Pin 3
													PORTD |= (1<<PD3);//HIG D3
												
											break;
										
										}//ende switch
							
							break;
							
							
							case 4:
									DDRA |= (1<<PA3);//Pin A3
									PORTA &= ~(1<<PA3);//LOW A3
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD7);//Pin D7
													PORTC |= (1<<PD7);//HIGH D7
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);//Pin D6
													PORTD |= (1<<PD6);//HIGH D6
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);//Pin D5
													PORTD |= (1<<PD5);//HIGH D5
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);//Pin D4
													PORTD |= (1<<PD4);//HIGH D4
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);//Pin D3
													PORTD |= (1<<PD3);//HIGH D3
												
											break;	
										
									}//ende switch
							
							break;
							
							case 5:
									DDRA |= (1<<PA4);//Pin A4
									PORTA &= ~(1<<PA4);//LOW A4
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PD7);//Pin D7
													PORTC |= (1<<PD7);//HIGH D7
												
											break;
												
												
											case 2: 
													DDRD |= (1<<PD6);//Pin D6
													PORTD |= (1<<PD6);//HIGH D6
												
											break;
												
												
											case 3:
													DDRD |= (1<<PD5);//Pin D5
													PORTD |= (1<<PD5);//HIGH D5
												
											break;
												
												
											case 4:
													DDRD |= (1<<PD4);//Pin D4
													PORTD |= (1<<PD4);//HIGH D4
												
											break;
												
												
											case 5:
													DDRD |= (1<<PD3);//Pin D3
													PORTD |= (1<<PD3);//HIGH D3
												
											break;	
										
										}//ende switch
							
							break;
							
							
						}//ende switch
						
			break;
						
			
			case 3:		//Ebene3
						switch(z)
						{
							case 1:
									DDRA |= (1<<PA0);//Pin A0
									PORTA |= (1<<PA0);//HIGH A0
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC5);//Pin C5
													PORTC &= ~(1<<PC5);//LOW C5
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PC4);//Pin C4
													PORTC &= ~(1<<PC4);//LOW C4
												
											break;
												
												
											case 3:
													DDRC |= (1<<PC3);//Pin C3
													PORTC &= ~(1<<PC3);//LOW C3
												
											break;
												
												
											case 4:
													DDRC |= (1<<PC6);//Pin C6
													PORTC &= ~(1<<PC6);//LOW C6
												
											break;
												
												
											case 5:
													DDRC |= (1<<PC7);//Pin C7
													PORTC &= ~(1<<PC7);//LOW C7
												
											break;
										
									}//ende switch
							
							break;
										
						
							
							case 2:
										
									DDRA |= (1<<PA1);//Pin A1
									PORTA |= (1<<PA1);//HIGH A1
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC5);//Pin C5
													PORTC &= ~(1<<PC5);//LOW C5
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PC4);//Pin C4
													PORTC &= ~(1<<PC4);//LOW C4
												
											break;
												
												
											case 3:
													DDRC |= (1<<PC3);//Pin C3
													PORTC &= ~(1<<PC3);//LOW C3
												
											break;
												
												
											case 4:
													DDRC |= (1<<PC6);//Pin C6
													PORTC &= ~(1<<PC6);//LOW C6
												
											break;
												
												
											case 5:
													DDRC |= (1<<PC7);//Pin C7
													PORTC &= ~(1<<PC7);//LOW C7
												
											break;
										
									}//ende switch
							
							
							
							break;
							
							case 3:
									DDRA |= (1<<PA2);//Pin A2
									PORTA |= (1<<PA2);//HIGH A2
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC5);//Pin C5
													PORTC &= ~(1<<PC5);//LOW C5
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PC4);//Pin C4
													PORTC &= ~(1<<PC4);//LOW C4
												
											break;
												
												
											case 3:
													DDRC |= (1<<PC3);//Pin C3
													PORTC &= ~(1<<PC3);//LOW C3
												
											break;
												
												
											case 4:
													DDRC |= (1<<PC6);//Pin C6
													PORTC &= ~(1<<PC6);//LOW C6
												
											break;
												
												
											case 5:
													DDRC |= (1<<PC7);//Pin C7
													PORTC &= ~(1<<PC7);//LOW C7
												
											break;
										
									}//ende switch
                            break;        
                            
							case 4:
									DDRA |= (1<<PA3);//Pin A3
									PORTA |= (1<<PA3);//HIGH A3
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC5);//Pin C5
													PORTC &= ~(1<<PC5);//LOW C5
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PC4);//Pin C4
													PORTC &= ~(1<<PC4);//LOW C4
												
											break;
												
												
											case 3:
													DDRC |= (1<<PC3);//Pin C3
													PORTC &= ~(1<<PC3);//LOW C3
												
											break;
												
												
											case 4:
													DDRC |= (1<<PC6);//Pin C6
													PORTC &= ~(1<<PC6);//LOW C6
												
											break;
												
												
											case 5:
													DDRC |= (1<<PC7);//Pin C7
													PORTC &= ~(1<<PC7);//LOW C7
												
											break;
										
									}//ende switch
							break;
                            
							case 5:
							        DDRA |= (1<<PA4);//Pin A4
									PORTA |= (1<<PA4);//HIGH A4
									
									switch(x)
									{
											case 1:
													DDRC |= (1<<PC5);//Pin C5
													PORTC &= ~(1<<PC5);//LOW C5
												
											break;
												
												
											case 2: 
													DDRC |= (1<<PC4);//Pin C4
													PORTC &= ~(1<<PC4);//LOW C4
												
											break;
												
												
											case 3:
													DDRC |= (1<<PC3);//Pin C3
													PORTC &= ~(1<<PC3);//LOW C3
												
											break;
												
												
											case 4:
													DDRC |= (1<<PC6);//Pin C6
													PORTC &= ~(1<<PC6);//LOW C6
												
											break;
												
												
											case 5:
													DDRC |= (1<<PC7);//Pin C7
													PORTC &= ~(1<<PC7);//LOW C7
												
											break;
										
									}//ende switch
                        break;
                
						}//ende switch	
						
						
			break;
			
			
			case 4:		//Ebene4
						switch(z)
						{
								case 1:
										DDRA |= (1<<PA0);//Pin A0
										PORTA &= ~(1<<PA0);//LOW A0
										
											switch(x)
											{
                                                case 1:
														DDRC |= (1<<PC5);//Pin C5
														PORTC |= (1<<PC5);//HIGH C5
                                                break;
												
                                                case 2:
														DDRC |= (1<<PC4);//Pin C4
														PORTC |= (1<<PC4);//HIGH C4
														
                                                break;        
												
                                                case 3:
														DDRC |= (1<<PC3);//Pin C3
														PORTC |= (1<<PC3);//HIGH C3
														
                                                break;        
												
                                                case 4:
														DDRC |= (1<<PC6);//Pin C6
														PORTC |= (1<<PC6);//HIGH C6
														
                                                break;        
												
                                                case 5:
														DDRC |= (1<<PC7);//Pin C7
														PORTC |= (1<<PC7);//HIGH C7	
														
                                                break;
										
										}//ende switch
							
								break;
							
								case 2: 
										DDRA |= (1<<PA1);//Pin A1
										PORTA &= ~(1<<PA1);//LOW A1	
										
											switch(x)
											{
                                                case 1:
														DDRC |= (1<<PC5);//Pin C5
														PORTC |= (1<<PC5);//HIGH C5
                                                break;
												
                                                case 2:
														DDRC |= (1<<PC4);//Pin C4
														PORTC |= (1<<PC4);//HIGH C4
														
                                                break;        
												
                                                case 3:
														DDRC |= (1<<PC3);//Pin C3
														PORTC |= (1<<PC3);//HIGH C3
														
                                                break;        
												
                                                case 4:
														DDRC |= (1<<PC6);//Pin C6
														PORTC |= (1<<PC6);//HIGH C6
														
                                                break;        
												
                                                case 5:
														DDRC |= (1<<PC7);//Pin C7
														PORTC |= (1<<PC7);	//HIGH C7
														
                                                break;
										
										}//ende switch
							break;
							
							case 3:
									DDRA |= (1<<PA2);//Pin A2
									PORTA &= ~(1<<PA2);//LOW A2
									
											switch(x)
											{
												case 1:
														DDRC |= (1<<PC5);//Pin C5
														PORTC |= (1<<PC5);//HIGH C5
                                                break;
												
                                                case 2:
														DDRC |= (1<<PC4);//Pin C4
														PORTC |= (1<<PC4);//HIGH C4
														
                                                break;        
												
                                                case 3:
														DDRC |= (1<<PC3);//Pin C3
														PORTC |= (1<<PC3);//HIGH C3
														
                                                break;        
												
                                                case 4:
														DDRC |= (1<<PC6);//Pin C6
														PORTC |= (1<<PC6);//HIGH C6
														
                                                break;        
												
                                                case 5:
														DDRC |= (1<<PC7);//C7
														PORTC |= (1<<PC7);//HIGH C7
														
                                                break;
										
										}//ende switch
							break;
							
							case 4:
									DDRA |= (1<<PA3);//Pin A3
									PORTA &= ~(1<<PA3);//LOW A3
									
											switch(x)
											{
												case 1:
														DDRC |= (1<<PC5);//Pin C5
														PORTC |= (1<<PC5);//HIGH C5
                                                break;
												
                                                case 2:
														DDRC |= (1<<PC4);//Pin C4
														PORTC |= (1<<PC4);//HIGH C4
														
                                                break;        
												
                                                case 3:
														DDRC |= (1<<PC3);//Pin C3
														PORTC |= (1<<PC3);//HIGH C3
														
                                                break;        
												
                                                case 4:
														DDRC |= (1<<PC6);//Pin C6
														PORTC |= (1<<PC6);//HIGH C6
														
                                                break;        
												
                                                case 5:
														DDRC |= (1<<PC7);//Pin C7
														PORTC |= (1<<PC7);//HIGH C7	
														
                                                break;
										
										}//ende switch
							break;
							
							case 5:
									DDRA |= (1<<PA4);//Pin A4
									PORTA &= ~(1<<PA4);//LOW A4
									
										switch(x)
										{
												case 1:
														DDRC |= (1<<PC5);//Pin C5
														PORTC |= (1<<PC5);//HIGH C5
                                                break;
												
                                                case 2:
														DDRC |= (1<<PC4);//Pin C4
														PORTC |= (1<<PC4);//HIGH C4
														
                                                break;        
												
                                                case 3:
														DDRC |= (1<<PC3);//Pin C3
														PORTC |= (1<<PC3);//HIGH C3
														
                                                break;        
												
                                                case 4:
														DDRC |= (1<<PC6);//Pin C6
														PORTC |= (1<<PC6);//HIGH C6
														
                                                break;        
												
                                                case 5:
														DDRC |= (1<<PC7);//Pin C7
														PORTC |= (1<<PC7);//HIGH C7
														
                                                break;
										
										}//ende switch
                            break;						
	
						}//ende switch
						
			break;
						
			
			case 5:		//Ebene5
                    
						switch(z)
						{
							case 1:
                                    DDRA |= (1<<PA0);//Pin A0
									PORTA |= (1<<PA0);//HIGH A0
                                    DDRB = 0x00;
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);//Pin B0
                                                        PORTB &= ~(1<<PB0);//LOW B0
												
												break;
                                                   
												case 2:
                                                        DDRB |= (1<<PB1);//Pin B1
                                                        PORTB &= ~(1<<PB1);//LOW B1
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);//Pin B2
                                                        PORTB &= ~(1<<PB2);//LOW B2
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);//Pin B3
                                                        PORTB &= ~(1<<PB3);//LOW B3
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);//Pin B4
                                                        PORTB &= ~(1<<PB4);//LOW B4
												
												break;
										
										}//ende switch
                            break;
							
							case 2:
									DDRA |= (1<<PA1);//Pin A1
									PORTA |= (1<<PA1);//HIGH A1
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);//Pin B0
                                                        PORTB &= ~(1<<PB0);//LOW B0
												
												break;
                                                   
												case 2:
                                                        DDRB |= (1<<PB1);//Pin B1
                                                        PORTB &= ~(1<<PB1);//LOW B1
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);//Pin B2
                                                        PORTB &= ~(1<<PB2);//LOW B2
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);//Pin B3
                                                        PORTB &= ~(1<<PB3);//LOW B3
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);//Pin B4
                                                        PORTB &= ~(1<<PB4);//LOW B4
												
												break;
										
										}//ende switch					
							break;
                            
							case 3:
									DDRA |= (1<<PA2);//Pin A2
									PORTA |= (1<<PA2);//HIGH A2
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);//Pin B0
                                                        PORTB &= ~(1<<PB0);//LOW B0
												
												break;
                                                   
												case 2:
                                                        DDRB |= (1<<PB1);//Pin B1
                                                        PORTB &= ~(1<<PB1);//LOW B1
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);//Pin B2
                                                        PORTB &= ~(1<<PB2);//LOW B2
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);//Pin B3
                                                        PORTB &= ~(1<<PB3);//LOW B3
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);//Pin B4
                                                        PORTB &= ~(1<<PB4);//LOW B4
												
												break;
										
										}//ende switch
							break;
                            
							case 4:
									DDRA |= (1<<PA3);//Pin A3
									PORTA |= (1<<PA3);//HIGH A3
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);//Pin B0
                                                        PORTB &= ~(1<<PB0);//LOW B0
												
												break;
                                                   
												case 2:
                                                        DDRB |= (1<<PB1);//Pin B1
                                                        PORTB &= ~(1<<PB1);//LOW B1
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);//Pin B2
                                                        PORTB &= ~(1<<PB2);//LOW B2
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);//Pin B3
                                                        PORTB &= ~(1<<PB3);//LOW B3
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);//Pin B4
                                                        PORTB &= ~(1<<PB4);//LOW B4
												
												break;
										
										}//ende switch
                            break;
							
							case 5:
									DDRA |= (1<<PA4);//Pin A4
									PORTA |= (1<<PA4);//HIGH A4
                                    
										switch(x)
										{
												case 1:
                                                        DDRB |= (1<<PB0);//Pin B0
                                                        PORTB &= ~(1<<PB0);//LOW B0
												
												break;
                                                   
												case 2:
                                                        DDRB |= (1<<PB1);//Pin B1
                                                        PORTB &= ~(1<<PB1);//LOW B1
												break;
												
												case 3:
                                                        DDRB |= (1<<PB2);//Pin B2
                                                        PORTB &= ~(1<<PB2);//LOW B2
												
												break;
												
												case 4:
                                                        DDRB |= (1<<PB3);//Pin B3
                                                        PORTB &= ~(1<<PB3);//LOW B3
												
												break;
												
												case 5:
                                                        DDRB |= (1<<PB4);//Pin B4
                                                        PORTB &= ~(1<<PB4);//LOW B4
												
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
	
	TCCR1A = 0;					// Timer1: keine PWM

    // Timer1 ist Zähler: Clear Timer on Compare Match (CTC, Mode #4)
    // Timer1 läuft mit vollem MCU-Takt: Prescale = 1
#if defined (CTC1) && !defined (WGM12)
   TCCR1B = (1 << CTC1)  | (1 << CS10);
#elif !defined (CTC1) && defined (WGM12)
   TCCR1B = (1 << WGM12) | (1 << CS10);
#else
#error Keine Ahnung!
#endif

    // OutputCompare für gewünschte Timer1 Frequenz
    // TCNT1 zählt immer 0...OCR1A, 0...OCR1A, ... 
    // Beim überlauf OCR1A -> OCR1A+1 wird TCNT1=0 gesetzt und im nächsten
    // MCU-Takt eine IRQ erzeugt.
    OCR1A = (unsigned short) ((unsigned long) F_CPU / IRQS_PER_SECOND-1);

    // OutputCompareA-Interrupt für Timer1 aktivieren
#if defined (TIMSK1)
    TIMSK1 |= (1 << OCIE1A);
#elif defined (TIMSK)
    TIMSK  |= (1 << OCIE1A);
#else
#error Keine Ahnung!
#endif
	sei();
	
	
	
	ms=0;
	ms10=0;
	ms100=0;
	sec=0;
	test=0;
	
	

	
   /* cube(4, 5, 4);
    cube(3, 5, 5);
    cube(2, 5, 4);
    cube(1, 5, 5);*/
    
   
   
    
    
	
	
	
	
 	  	while(1) 
    { 
	 cube(1, 3, 1);
    cube(2, 3, 	1);
	cube(3, 3, 1);
	cube(4, 3, 1);
	cube (5, 3, 1);
	
	//cube(test, 5, 5);
	
		
		/*DDRA |= (1<<PA3);
		DDRB |= (1<<PB4);
		
		PORTA |= (1<<PA3);
		PORTB &= ~(1<<PB4);*/
	
		
 	}// end of while 
 
 
 	return 0; 
 }//end of main 
