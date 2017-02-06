/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 5;
int b = 10;
int c = 20;

//********** Setup ****************************************************************
void setup()              // executar una vegada cuan comença el sketch
{
  Serial.begin(9600);     //  configurar la biblioteca de sèrie en 9600 bps

  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // afegir
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicació
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divisió
  Serial.println(c / b);

  Serial.print("c % b = ");       // mòdul
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta
  Serial.println(b - c);
}

//********** Loop *****************************************************************
void loop()  // necessitem que estigui aqui encara que estigui buit
{
}

//********** Funcions *************************************************************
