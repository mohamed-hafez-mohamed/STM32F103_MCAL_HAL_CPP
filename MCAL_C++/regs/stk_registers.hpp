/**
 * @file stk_registers.hpp
 * @brief Declarations for the stk_registers.
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */

#ifndef DIO_REGISTERS_HPP
#define DIO_REGISTERS_HPP
/************************************
INCLUDES
************************************/
#include <cstdint>
/************************************
 * MACROS / CONSTANT EXPRESSIONS
 ************************************/
/**
 * @namespace mcal
 * @brief Outer namespace Contains the STK registers and bits
 * @note Any important notes about usage
 * @warning Any warnings about the namespace contents
 * @see Related namespaces or classes
 */
namespace mcal
{
   /**
    * @namespace stk_regs
    * @brief Inner namespace Contains the STK registers
    * @note Any important notes about usage
    * @warning Any warnings about the namespace contents
    * @see Related namespaces or classes
    */
	namespace stk_regs
	{
		constexpr std::uint32_t STK_BASE_ADDRESS  = UINT32_C(0xE000E010);  
      constexpr std::uint32_t STK_CTRL_ADDRESS  = UINT32_C(STK_BASE_ADDRESS + 0x00); 
      constexpr std::uint32_t STK_LOAD_ADDRESS  = UINT32_C(STK_BASE_ADDRESS + 0x04); 
      constexpr std::uint32_t STK_VAL_ADDRESS   = UINT32_C(STK_BASE_ADDRESS + 0x08); 
      constexpr std::uint32_t STK_CALIB_ADDRESS = UINT32_C(STK_BASE_ADDRESS + 0x0C); 
	}
   /**
    * @namespace STK_CTRL
    * @brief Inner namespace Contains the STK_CTRL register bits
    * @note Any important notes about usage
    * @warning Any warnings about the namespace contents
    * @see Related namespaces or classes
    */
   namespace STK_CTRL
   {
      /**
       * @enum stk_ctrl_bits
       * @brief Define the bits position for STK_CTRL register
       */
      enum class stk_ctrl_bits : uint8_t
      {
         ENABLE    = UINT8_C(0),   ///< ENABLE bit position in the STK_CTRL register
         TICKINT   = UINT8_C(1),   ///< TICKINT bit position in the STK_CTRL register
         CLKSOURCE = UINT8_C(2),   ///< CLKSOURCE bit position in the STK_CTRL register
         COUNTFLAG = UINT8_C(16)   ///< COUNTFLAG bit position in the STK_CTRL register
      };
   }
   namespace STK_CALIB
   {
      enum class stk_calib_bits : uint8_t
      {
         TENMS = UINT8_C(0),      ///< TENMS bit position in the STK_CTRL register
         SKEW  = UINT8_C(30),     ///< SKEW bit position in the STK_CTRL register
         NOREF = UINT8_C(31),     ///< NOREF bit position in the STK_CTRL register
      };
   }
}

 /************************************
 * TYPEDEFS
 ************************************/

/************************************

EXPORTED VARIABLES
************************************/

/************************************

GLOBAL FUNCTION PROTOTYPES / CLASS DECLARATIONS
************************************/


#endif // DIO_REGISTERS_HPP

/*******************************************************************************
Change History
 ********************************************************************************
   Date        Who            Change
------------ --------  ------------------------------------------------

 *******************************************************************************/

/*=============================================================================*
 End of File
 *=============================================================================*/