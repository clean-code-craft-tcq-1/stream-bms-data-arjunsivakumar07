/* **************************************************************************************************
* File Name   : BMS_DataSender.c
* Author      : Arjun Sivakumar
* * ************************************************************************************************** */
/* **************************************** Header Files **************************************************** */
#include "BMS_DataSender.h"
#include "BMS_DataCollect.h"
#include "stdio.h"
#include "string.h"

/* ***************************************** Variables ****************************************************** */
SendStatus(*SendData[])(float, float) = {sendToConsole};

/* **************************************************************************************************
* Function      : This function sends BMS parameter value to console as an input
* Paramters     : None
* Returns       : Validity status if the inputs are printed  on console
* ***************************************************************************************************** */

SendStatus BMS_SendData(SendType sendType)
{
  float Temperature;
  float ChargeRate;
  SendStatus Validity_status;

  Temperature = BmsSender_ReadTemperture();
  ChargeRate = Get_BMSChargeRate();

  Validity_status = SendData[sendType](Temperature, ChargeRate);
  
  return status;
}
/* **************************************************************************************************
* Function      : This function Prints BMS parameter value on console
* Paramters     : Temperature and ChargeRate
* Returns       : Validity status if the inputs are printed on console
* ***************************************************************************************************** */
SendStatus Print_ToConsole(float Temperature, float ChargeRate) {
  
  printf("Temperature:%+06.1f,SOC:%05.1f$\n", Temperature,ChargeRate);
  
  return SENTSUCCESSFULLY;
}