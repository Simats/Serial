/****************************************************************
**                                                             **
**                     REPTE 2: Math is fun                    **
**                        Programa nº 2                        **
**                                                             **
**   NOM: Marc Simats                         Data:27/012/17   **
****************************************************************/
//********** Includes *******************************************

//********** Variables ******************************************
int a = 5;
int b = 10;
int h = 20;

//********** Setup **********************************************
void setup()
{
  Serial.begin(9600);
  
  Serial.println("Lets calculate a hypoteneuse");

  h = sqrt(a*a + b*b);
      
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h);
}

//********** Loop *************************************************
void loop()
{
}

//********** Funcions *********************************************

