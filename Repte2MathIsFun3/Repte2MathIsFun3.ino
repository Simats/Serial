/****************************************************************
**                                                             **
**                     REPTE 2: Math is fun                    **
**                        Programa nº 3                        **
**                                                             **
**   NOM: Marc Simats                         Data:27/012/17   **
****************************************************************/
//********** Includes *******************************************

//********** Variables ******************************************
int drive_gb = 5;
int drive_mb;

//********** Setup **********************************************
void setup()             // executar una vegada, quan el sketch comenci
{
  Serial.begin(9600);     // configurar la biblioteca del Serial a 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//********** Loop ***********************************************
void loop()     // necesitem estar aqui encara que estigui buit
{
}
