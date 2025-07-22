/**
 * @file register_access.hpp
 * @brief Provide register_access class template to allow any mcal module to access any registers
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */
#ifndef REGISTER_ACCESS_HPP
#define REGISTER_ACCESS_HPP

/************************************
INCLUDES
************************************/

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
template<typename addr_type, typename reg_type, typename bits_type, const addr_type addr>
class reg_map
{
   public:
   static reg_type& value()
   {
      return *reinterpret_cast<volatile reg_type*>(addr);
   }
   static bits_type& bits()
   {
      return *reinterpret_cast<volatile bits_type*>(addr);
   }
};

template<typename address_type, typename reg_type, const address_type reg_address, const reg_type reg_value>
class register_access 
{
	public:
	   static void reg_set()
		{ 
			*reinterpret_cast<volatile reg_type*> (reg_address) = reg_value;
		}
      static void reg_and()
		{ 
			*reinterpret_cast<volatile reg_type*> (reg_address) &= reg_value;
		}
      static void reg_or ()
		{ 
			*reinterpret_cast<volatile reg_type*> (reg_address) |= reg_value;
		}
      static void bit_set(std::uint8_t bit_pos)
		{ 
			*reinterpret_cast<volatile reg_type*> (reg_address) |= reg_type(reg_type(1U) << bit_pos);
		}
      static void bit_clr(std::uint8_t bit_pos)
		{ 
			*reinterpret_cast<volatile reg_type*> (reg_address) &= ~(reg_type(reg_type(1U) << bit_pos));
		}
      static void bit_not(std::uint8_t bit_pos)
		{ 
			*reinterpret_cast<volatile reg_type*> (reg_address) ^= reg_type(reg_type(1U) << bit_pos);
		}
      static bool bit_get(std::uint8_t bit_pos)
		{ 
			return ((*reinterpret_cast<volatile reg_type*> (reg_address)) >> bit_pos) & reg_type(1U);
		}
		static reg_type reg_get()
		{ 
			return *reinterpret_cast<volatile reg_type*> (reg_address);
		}
};

#endif // REGISTER_ACCESS

/*******************************************************************************
Change History
 ********************************************************************************
   Date        Who            Change
------------ --------  ------------------------------------------------

 *******************************************************************************/

/*=============================================================================*
 End of File
 *=============================================================================*/