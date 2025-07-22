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

/************************************
EXPORTED VARIABLES
************************************/

/************************************

GLOBAL FUNCTION PROTOTYPES / CLASS DECLARATIONS
************************************/

/**
 * @class Dio
 * @brief Provides methods to initialize and process Dio data.
 */
template<typename address_type, typename reg_type, const address_type port, const reg_type bit_pos>
class Dio
{
   public:
      Dio() = default;
		virtual ~Dio();
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
         port_inp_type::bit_get();
      }
      static void toggle()
      {
         // Toggle the port output value.
         port_pin_type::bit_not();
      }
	private:
      static constexpr address_type pdir = port - 1U;
      static constexpr address_type pinp = port - 2U;
	// Type definition of the port data register.
   typedef reg_access<address_type, reg_type, port, bit_pos> port_pin_type;
   // Type definition of the port direction register.
   typedef reg_access<address_type, reg_type, pdir, bpos> port_dir_type;
   // Type definition of the port input register.
   typedef reg_access<address_type, reg_type, pinp, bit_pos> port_inp_type;
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