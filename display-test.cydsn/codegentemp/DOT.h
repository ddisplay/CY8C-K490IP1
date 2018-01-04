/*******************************************************************************
* File Name: DOT.h  
* Version 2.5
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DOT_H) /* Pins DOT_H */
#define CY_PINS_DOT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "DOT_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    DOT_Write(uint8 value) ;
void    DOT_SetDriveMode(uint8 mode) ;
uint8   DOT_ReadDataReg(void) ;
uint8   DOT_Read(void) ;
uint8   DOT_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define DOT_DRIVE_MODE_BITS        (3)
#define DOT_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - DOT_DRIVE_MODE_BITS))
#define DOT_DRIVE_MODE_SHIFT       (0x00u)
#define DOT_DRIVE_MODE_MASK        (0x07u << DOT_DRIVE_MODE_SHIFT)

#define DOT_DM_ALG_HIZ         (0x00u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_DIG_HIZ         (0x01u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_RES_UP          (0x02u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_RES_DWN         (0x03u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_OD_LO           (0x04u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_OD_HI           (0x05u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_STRONG          (0x06u << DOT_DRIVE_MODE_SHIFT)
#define DOT_DM_RES_UPDWN       (0x07u << DOT_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define DOT_MASK               DOT__MASK
#define DOT_SHIFT              DOT__SHIFT
#define DOT_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DOT_PS                     (* (reg32 *) DOT__PS)
/* Port Configuration */
#define DOT_PC                     (* (reg32 *) DOT__PC)
/* Data Register */
#define DOT_DR                     (* (reg32 *) DOT__DR)
/* Input Buffer Disable Override */
#define DOT_INP_DIS                (* (reg32 *) DOT__PC2)


#if defined(DOT__INTSTAT)  /* Interrupt Registers */

    #define DOT_INTSTAT                (* (reg32 *) DOT__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins DOT_H */


/* [] END OF FILE */
