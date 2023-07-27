/******************************************************************************/
/* File   : McalAdc.c                                                         */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "infMcalAdcSwcApplEcuM.h"

#include "uC_Adc.h"
#include "CfgMcalAdc.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

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
static void AP2_vInit(void){
   APM0 |= 1u << 2;
}

static void ADC_vInitChannel2(void){
   ADCA0VCR02   = CfgMcalAdc_cADCA0VCR02; //TBD: Optimization possible?
   ADCA0ADCR    = CfgMcalAdc_cADCA0ADCR;
   ADCA0SMPCR   = CfgMcalAdc_cADCA0SMPCR;
   ADCA0SFTCR   = CfgMcalAdc_cADCA0SFTCR;
   ADCA0SGCR1   = CfgMcalAdc_cADCA0SGCR1;
   ADCA0SGVCSP1 = CfgMcalAdc_cADCA0SGVCSP1;
   ADCA0SGVCEP1 = CfgMcalAdc_cADCA0SGVCEP1;
}

static void ADC_vInterruptSG1(uint8 u8SetMKP){
   TBADCA0I0 = 1;
   RFADCA0I0 = 0;
   if(1 == u8SetMKP){MKADCA0I0 = 0;}
   else             {MKADCA0I0 = 1;}
}

FUNC(void, MCALADC_CODE) infMcalAdcSwcApplEcuM_vInitFunction(void){
   AP2_vInit();
   ADC_vInitChannel2();
   ADC_vInterruptSG1(0);
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

