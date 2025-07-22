/**
 * @file Dio_registers.hpp
 * @brief Declarations for the Dio_registers class and exported functions.
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
namespace mcal
{
	namespace dio_reg
	{
		constexpr std::uint32_t DIO_A_BASE_ADDRESS = UINT32_C(0x40010800);  
      constexpr std::uint32_t DIO_B_BASE_ADDRESS = UINT32_C(0x40010C00);
      constexpr std::uint32_t DIO_C_BASE_ADDRESS = UINT32_C(0x40011000);
      
      /*!<**************************Offset Definition********************************/
      constexpr std::uint8_t CRL = UINT8_C(0x00);
      constexpr std::uint8_t CRH = UINT8_C(0x04);
      constexpr std::uint8_t IDR = UINT8_C(0x08);
      constexpr std::uint8_t ODR = UINT8_C(0x0C);
      constexpr std::uint8_t BSR = UINT8_C(0x10);
      constexpr std::uint8_t BRR = UINT8_C(0x14);
      constexpr std::uint8_t LCK = UINT8_C(0x18);
      /*!<***************************Register Address for PORTA**********************/
      constexpr std::uint32_t DIOA_CRL = DIO_A_BASE_ADDRESS + CRL;
      constexpr std::uint32_t DIOA_CRH = DIO_A_BASE_ADDRESS + CRH;
      constexpr std::uint32_t DIOA_IDR = DIO_A_BASE_ADDRESS + IDR;
      constexpr std::uint32_t DIOA_ODR = DIO_A_BASE_ADDRESS + ODR;
      constexpr std::uint32_t DIOA_BSR = DIO_A_BASE_ADDRESS + BSR;
      constexpr std::uint32_t DIOA_BRR = DIO_A_BASE_ADDRESS + BRR;
      constexpr std::uint32_t DIOA_LCK = DIO_A_BASE_ADDRESS + LCK;
      
      /*!<***************************Register Address for PORTB**********************/
      constexpr std::uint32_t DIOB_CRL = DIO_B_BASE_ADDRESS + CRL;
      constexpr std::uint32_t DIOB_CRH = DIO_B_BASE_ADDRESS + CRH;
      constexpr std::uint32_t DIOB_IDR = DIO_B_BASE_ADDRESS + IDR;
      constexpr std::uint32_t DIOB_ODR = DIO_B_BASE_ADDRESS + ODR;
      constexpr std::uint32_t DIOB_BSR = DIO_B_BASE_ADDRESS + BSR;
      constexpr std::uint32_t DIOB_BRR = DIO_B_BASE_ADDRESS + BRR;
      constexpr std::uint32_t DIOB_LCK = DIO_B_BASE_ADDRESS + LCK;
      
      /*!<***************************Register Address for PORTC**********************/
      constexpr std::uint32_t DIOC_CRL = DIO_C_BASE_ADDRESS + CRL;
      constexpr std::uint32_t DIOC_CRH = DIO_C_BASE_ADDRESS + CRH;
      constexpr std::uint32_t DIOC_IDR = DIO_C_BASE_ADDRESS + IDR;
      constexpr std::uint32_t DIOC_ODR = DIO_C_BASE_ADDRESS + ODR;
      constexpr std::uint32_t DIOC_BSR = DIO_C_BASE_ADDRESS + BSR;
      constexpr std::uint32_t DIOC_BRR = DIO_C_BASE_ADDRESS + BRR;
      constexpr std::uint32_t DIOC_LCK = DIO_C_BASE_ADDRESS + LCK;
      /*!<*********************************Bits Definitions************************/
      constexpr std::uint8_t DIO_LCK_LCKK = UINT8_C(0x16);
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