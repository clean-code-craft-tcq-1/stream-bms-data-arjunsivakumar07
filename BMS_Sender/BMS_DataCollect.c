#include <stdio.h>
#include <stdlib.h>
#include "BMS_DataCollect.h"

/* **************************************************************************************************
* Function    : This function checks whether the BMS Parameter is in given range
* Param       : BMS Parameter min value,max value and Paramter input value
* Returns     : returns value 1 if the paramter is in given range else 0.
* * ************************************************************************************************** */

int isInRange(float current_value, float min_value, float max_value)
{
  if((current_value >= min_value) && (current_value <= max_value))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/* Function Details *******************************************************************************************
* Function Name : BmsSender_ReadTemperture
* Description   : Collect Battery Temperature Data from Sensor/DataSet
* Arguments     : Temperature parameter min value,max value and Error value
* Returns       : Temperature value in float
* *********************************************************************************************************** */

float BmsSender_ReadTemperture()
{
    float Temperature = 0;
    Temperature = RandomNumGenerator(MIN_TEMP,MAX_TEMP);
    if(isInRange(Temperature,MIN_TEMP,MIN_TEMP))
      {
          return Temperature;
      }
      
      return ERROR_TEMP;
}

/* Function Details *******************************************************************************************
* Function Name : Get_BMSChargeRate
* Description   : Collect Battery SOC Data from Sensor/DataSet
* Arguments     : Chargerate parameter min value,max value and Error value
* Returns       : SOC value in float
* *********************************************************************************************************** */

float Get_BMSChargeRate()
{
    float ChargeRate = 0;
    ChargeRate = RandomNumGenerator(MIN_SOC,MAX_SOC);
    if(isInRange(ChargeRate,MIN_SOC,MAX_SOC))
      {
          return ChargeRate;
      }
      
      return ERROR_SOC;
    
}

/* **************************************************************************************************
* Function    : This function to generate a random float number within the limits passed
* Param       :min value,max value
* Returns     : returns Random value
* * ************************************************************************************************** */

float RandomNumGenerator(const float min, const float max)
{
  if(min < max)
  {
    return (max - min) * ((float)rand() / RAND_MAX) + min;
  }
  else
  {
    return 0;
  }
}
