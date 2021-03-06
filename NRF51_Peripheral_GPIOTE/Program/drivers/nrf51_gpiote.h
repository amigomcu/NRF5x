/* #include "nrf51_gpiote.h" */

#ifndef __NRF51_GPIOTE_H
#define __NRF51_GPIOTE_H

#include "nrf51_system.h"
/*====================================================================================================*/
/*====================================================================================================*/
typedef enum {
  GPIOTE_CH0 = 0,
  GPIOTE_CH1,
  GPIOTE_CH2,
  GPIOTE_CH3
} GPIOTE_CH_TypeDef;

typedef struct {
  GPIOTE_CH_TypeDef GPIOTE_CH;
  // Line 0-3
  uint32_t GPIOTE_Pin;
  // Pin 0-31
  uint32_t GPIOTE_Mode;
  // GPIOTE_CONFIG_MODE_Disabled - Disabled.
  // GPIOTE_CONFIG_MODE_Event    - Channel configure in event mode.
  // GPIOTE_CONFIG_MODE_Task     - Channel configure in task mode.
  uint32_t GPIOTE_Polarity;
  // NRF_GPIOTE_POLARITY_LOTOHI - Low to high.
  // NRF_GPIOTE_POLARITY_HITOLO - High to low.
  // NRF_GPIOTE_POLARITY_TOGGLE - Toggle.
  uint32_t GPIOTE_OutInit;
  // NRF_GPIOTE_INITIAL_VALUE_LOW  - Initial low output when in task mode.
  // NRF_GPIOTE_INITIAL_VALUE_HIGH - Initial high output when in task mode.
} GPIOTE_InitTypeDef;
/*====================================================================================================*/
/*====================================================================================================*/
void    GPIOTE_Init( GPIOTE_CH_TypeDef GPIOTE_CH, GPIOTE_InitTypeDef *GPIOTE_InitStruct );
void    GPIOTE_Cmd( GPIOTE_CH_TypeDef GPIOTE_CH, FunctionalState NewState );
uint8_t GPIOTE_EvenCheck( GPIOTE_CH_TypeDef GPIOTE_CH );
void    GPIOTE_EvenClear( GPIOTE_CH_TypeDef GPIOTE_CH );
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 
