/**
 * @file timer.hpp
 * @brief Declarations for the timer class and exported functions.
 * @author Mohamed Hafez
 * @date 2025-07-22
 * @version 1.0
 */
#ifndef TIMER_HPP
#define TIMER_HPP

/************************************
INCLUDES
************************************/
#include <cstdint>
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
 * @class timer
 * @brief Provides methods to initialize and process port_pin data.
 */
template<typename timer_traits>
class timer:
{
   public:
      using clock_select = typename timer_traits::clock_selection;
      using reg_width = typename timer_traits::register_width_t;
      using count = typename timer_traits::count_t;
      timer(clock_select cs, count max);
      timer(timer const&) = delete;
      timer& operator=(timer const&) = delete;
      count get_count() const;
      static void* operator new(std::size_t)
      {
         return reinterpret_cast<void*> (timer_traits::address);
      }
      static void operator delete(std::size_t)
      {
         // Do nothing
      }
   private:
      reg_width volatile STK_CTRL;
      reg_width volatile STK_LOAD;
      reg_width volatile STK_VAL;
      reg_width volatile STK_CALIB;
};


#endif // TIMER_HPP

/*******************************************************************************
Change History
 ********************************************************************************
   Date        Who            Change
------------ --------  ------------------------------------------------

 *******************************************************************************/

/*=============================================================================*
 End of File
 *=============================================================================*/