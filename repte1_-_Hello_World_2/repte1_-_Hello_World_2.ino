/****************************************************************
**                                                             **
**                            Hello World                      **
**                                                             **
**                                                             **
**   NOM: Marc Simats                         Data:30/01/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


//*************************** SETUP *****************************

void setup()              
{
  Serial.begin(9600);    
}


//*************************** LOOP ******************************

void loop()                     
{
  Serial.print("Hello world!");  // prints Hello world!
  delay(1000);
}

//************************ FUNCIONS *****************************
