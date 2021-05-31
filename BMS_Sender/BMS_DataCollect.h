/* *************************************************************************
* File Name   :	BMS_CollectData.h
* Description : Header file for BMS Collect Data Collection
* ************************************************************************* */
#ifndef BMS_DataCollect_h
#define BMS_DataCollect_h

#include <stdio.h>
#include <stdlib.h>
/* ******************************* Defines ******************************* */


#define MIN_TEMP    -50.0
#define MAX_TEMP    100.0
#define ERROR_TEMP  255.0
#define MIN_SOC     0.0
#define MAX_SOC     100.0
#define ERROR_SOC   255.0



/* ***************************** Prototypes ***************************** */
int isInRange(float current_value, float min_value, float max_value);
float BmsSender_ReadTemperture();
float Get_BMSChargeRate();
float RandomNumGenerator(const float min, const float max);

#endif
