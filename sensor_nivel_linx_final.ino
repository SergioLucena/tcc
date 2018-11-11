/****************************************************************************************
**  Sensor de nível de água de reservatórios
**
**  ver. 1.3
**
**  Sergio de Lucena Reynaldo
**
**  Unicesumar - Ponta Grossa - 2018
**
**
****************************************************************************************/

//Inclui todas as bibliotecas usadas pelo LINX
#include <SPI.h>
#include <Wire.h>



//Inclui dispositivo de cabeçalho específico do Sketch>>Importa biblioteca (LinxChipkitMax32.h)
//Inclui LINX escuta do Sketch>>Importa biblioteca (LinxSerialListener.h)
#include <LinxArduinoUno.h>
#include <LinxSerialListener.h>

//Cria um ponteiro para LINX objeto instanciado no Setup()
LinxArduinoUno* LinxDevice;

//Initializa LINX e escuta a porta
void setup()
{
  //Dispositivo LINX instanciado
  LinxDevice = new LinxArduinoUno();

  //LINXT escuta está pré instanciado, chama o início e passa o ponteiro A para o LINX e o canal UART escuta
  LinxSerialConnection.Start(LinxDevice, 0);
}

void loop()
{
  //Escuta novos pacotes do LabVIEW
  LinxSerialConnection.CheckForCommands();

}


