/**
 * @file timer.cpp
 * @brief Implementation of the timer class/functions.
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */
/************************************
INCLUDES
************************************/
#include "stk_registers.hpp"
#include "timer.hpp"
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
 * @class timer
 * @brief Provides methods to initialize and process port_pin data.
 */
template<typename timer_traits>
timer<timer_traits>::timer(clock_select cs, count max) : STK_CTRL{cs << mcal::STK_CTRL::stk_ctrl_bits::CLKSOURCE}, STK_LOAD{max}
{}

template<typename timer_traits>
typename timer_traits::count_t timer<timer_traits>::get_count() const
{
  return STK_VAL;
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