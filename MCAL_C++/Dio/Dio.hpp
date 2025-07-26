/**
 * @file Dio.hpp
 * @brief Declarations for the Dio class and exported functions.
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */
#ifndef GPIO_HPP
#define GPIO_HPP

/************************************
INCLUDES
************************************/
#include "register_access.hpp"
/************************************
 * MACROS / CONSTANT EXPRESSIONS
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/
enum class ports : uint8_t
{
   port_a, port_b, port_c
};

enum class pin : uint8_t
{
   //PORTA PINS
   PINA0,
   PINA1,
   PINA2,
   PINA3,
   PINA4,
   PINA5,
   PINA6,
   PINA7,
   PINA8,
   PINA9,
   PINA10,
   PINA11,
   PINA12,
   PINA13,
   PINA14,
   PINA15,
   //PORTB PINS
   PINB0,
   PINB1,
   PINB2,
   PINB3,
   PINB4,
   PINB5,
   PINB6,
   PINB7,
   PINB8,
   PINB9,
   PINB10,
   PINB11,
   PINB12,
   PINB13,
   PINB14,
   PINB15,
   //PORTB PINS
   PINC0,
   PINC1,
   PINC2,
   PINC3,
   PINC4,
   PINC5,
   PINC6,
   PINC7,
   PINC8,
   PINC9,
   PINC10,
   PINC11,
   PINC12,
   PINC13,
   PINC14,
   PINC15
};

enum class mode : uint8_t
{
   input, output, analog
};
/************************************
EXPORTED VARIABLES
************************************/

/************************************

GLOBAL FUNCTION PROTOTYPES / CLASS DECLARATIONS
************************************/

/**
 * @class port_pin
 * @brief Provides methods to initialize and process port_pin data.
 */
template<typename address_type, typename reg_type, const address_type port, const reg_type bit_pos>
class port_pin
{
   public:
      port_pin() = default;
		virtual ~port_pin();
		static void set_direction_output()
      {
         // Set the port pin direction to output.
         port_dir_type::bit_set();
      }
      static void set_direction_input()
      {
         // Set the port pin direction to input.
         port_dir_type::bit_clr();
      }
      static void set_pin_high()
      {
         // Set the port output value to high.
         port_pin_type::bit_set();
      }
      static void set_pin_low()
      {
         // Set the port output value to low.
         port_pin_type::bit_clr();
      }
		static bool read_input_value()
      {
         // Read the port input value.
         return port_inp_type::bit_get();
      }
      static void toggle()
      {
         // Toggle the port output value.
         port_pin_type::bit_not();
      }
	private:
      static constexpr address_type pdir = port - 1U;
      static constexpr address_type pinp = port - 2U;
	// Type alias of the port data register.
   using reg_access<address_type, reg_type, port, bit_pos> = port_pin_type;
   // Type alias of the port direction register.
   using reg_access<address_type, reg_type, pdir, bpos> = port_dir_type;
   // Type alias of the port input register.
   using reg_access<address_type, reg_type, pinp, bit_pos> = port_inp_type;
};

template<typename address_type, ports port>
class Dio
{
   public:
      Dio();
      virtual ~Dio();
   void set_pin_mode(pin, mode)
   {
      // use pdir
   }
   private:
      static constexpr address_type pdir = (port * UINT16_C(1024)) + MCAL::dio_reg::CRL;
   using reg_access<address_type, reg_type, pdir, bpos> = port_dir_type;
};
#endif // DIO_HPP

/*******************************************************************************
Change History
 ********************************************************************************
   Date        Who            Change
------------ --------  ------------------------------------------------

 *******************************************************************************/

/*=============================================================================*
 End of File
 *=============================================================================*/