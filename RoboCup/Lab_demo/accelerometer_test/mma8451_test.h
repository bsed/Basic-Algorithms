/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2011-2012 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
***************************************************************************//*!
*
* @file rtc.h
*
* @author a13984
*
* @version 0.0.1
*
* @date Sep 5, 2011
*
* @brief appliu16Cation entry point which performs appliu16Cation specific tasks. 
*
*******************************************************************************
*
******************************************************************************/



#ifndef MMA8451_TEST_H_
#define MMA8451_TEST_H_

/******************************************************************************
* Includes
******************************************************************************/
#include "common.h" /* include peripheral declarations */
/******************************************************************************
* Constants
******************************************************************************/

/******************************************************************************
* globe function
******************************************************************************/
extern void AccelInit(void);
extern void AccelRead(void);
extern void AccelDemo(void);

/******************************************************************************
* Variable
******************************************************************************/
extern uint16_t u16TiltDelay;
//extern unsigned long ti_task;
#endif