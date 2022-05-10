#pragma once
/******************************************************************************/
/* File   : infAdc_Det.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_Adc.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      ADC_E_BUSY
   ,  ADC_E_IDLE
   ,  ADC_E_PARAM_GROUP
   ,  ADC_E_PARAM_POINTER
   ,  ADC_E_NOT_DISENGAGED
   ,  ADC_E_NOT_POSSIBLE_TRANSITION
   ,  ADC_E_NOT_PREPARED_PERIPHERAL
   ,  ADC_E_NOT_SUPPORTED_STATE_POWER
   ,  ADC_E_NOTIF_CAPABILITY
   ,  ADC_E_UNINIT
   ,  ADC_E_UNINIT_BUFFER
   ,  ADC_E_WRONG_SRC_TRIGG
   ,  ADC_E_WRONG_MODE_CONV
}Adc_TypeDetErrorCode;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

