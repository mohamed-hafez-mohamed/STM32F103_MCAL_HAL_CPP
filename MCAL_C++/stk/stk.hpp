/**
 * @file stk.hpp
 * @brief Declarations for the stk class and exported functions.
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */
#ifndef STK_HPP
#define STK_HPP

/************************************
INCLUDES
************************************/
#include <cstdint>
#include "stk_registers.hpp"
#include "timer.hpp"
/************************************
 * MACROS / CONSTANT EXPRESSIONS
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/
namespace stk0
{
   enum class clock_selection : uint8_t
   {
      source       = UINT8_C(0),
      source_div_2 = UINT8_C(1),
      source_div_4 = UINT8_C(2),
      source_div_8 = UINT8_C(3)
   };
}

typedef struct stk
{
   std::uintptr_t address{mcal::stk_regs::STK_BASE_ADDRESS};
   using count_t = uint32_t;
   using register_width_t = uint32_t;
} stk0_traits;

using stk0 = timer<stk0_traits>;
// Define new stk object
// stk0 &s0 = {*new stk {stk0::clock_selection::source_div_2, 250}};
/************************************
EXPORTED VARIABLES
************************************/

/************************************

GLOBAL FUNCTION PROTOTYPES / CLASS DECLARATIONS
************************************/

#endif // STK_HPP

/*******************************************************************************
Change History
 ********************************************************************************
   Date        Who            Change
------------ --------  ------------------------------------------------

 *******************************************************************************/

/*=============================================================================*
 End of File
 *=============================================================================*/