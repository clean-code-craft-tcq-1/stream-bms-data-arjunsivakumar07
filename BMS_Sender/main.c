/* File Details ***********************************************************************************************
* File Name   :    main.c
* Author      : Arjun Sivakumar
* Description : Battery Management System(BMS) Temperature & SOC Data Sends for every 1 Seconds
* Functions   : main
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include"BMS_DataCollect.h"
#include"BMS_DataSender.h"

/* Function Details *******************************************************************************************
* Function Name : main
* Description   : main function to transmit data for every 1 seconds
* Arguments     : -
* Returns       : 0
* *********************************************************************************************************** */
int main() {
    
    for(int i=0;i <= 10;i++)
    {
    BMS_SendData(TO_CONSOLE);
    }
    
    return 0;
}
