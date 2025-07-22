/**
 * @file Dio.cpp
 * @brief Implementation of the Dio class/functions.
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */
/************************************
INCLUDES
************************************/
#include <iostream>
#include "Dio.hpp"
/************************************
EXTERN VARIABLES
************************************/

/************************************
PRIVATE MACROS / DEFINES / CONSTANT EXPRESSIONS
************************************/

/************************************
PRIVATE TYPEDEFS / CLASSES
************************************/

/************************************

STATIC / ANONYMOUS NAMESPACE VARIABLES
************************************/

/************************************

GLOBAL VARIABLES
************************************/

/************************************

STATIC FUNCTION PROTOTYPES
************************************/

/************************************

STATIC FUNCTION IMPLEMENTATION
************************************/

/************************************

GLOBAL FUNCTIONS IMPLEMENTATION
**********************************/
/**
 * @brief Initializes the module.
 */
void GPIO::init() {
internalCounter = 0;
}

/**
 * @brief Processes an input value.
 * @param value The input integer to process.
 * @return Result of processing.
 */
int GPIO::process(int value) {
return value * 2;
}

/*******************************************************************************
Change History
 ********************************************************************************
   Date        Who            Change
------------ --------  ------------------------------------------------

 *******************************************************************************/

/*=============================================================================*
 End of File
 *=============================================================================*/