/*******************************************************************************
* File Name: ZERO.h  
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

#if !defined(CY_PINS_ZERO_H) /* Pins ZERO_H */
#define CY_PINS_ZERO_H

#include "cytypes.h"
#include "cyfitter.h"
#include "ZERO_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    ZERO_Write(uint8 value) ;
void    ZERO_SetDriveMode(uint8 mode) ;
uint8   ZERO_ReadDataReg(void) ;
uint8   ZERO_Read(void) ;
uint8   ZERO_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define ZERO_DRIVE_MODE_BITS        (3)
#define ZERO_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - ZERO_DRIVE_MODE_BITS))
#define ZERO_DRIVE_MODE_SHIFT       (0x00u)
#define ZERO_DRIVE_MODE_MASK        (0x07u << ZERO_DRIVE_MODE_SHIFT)

#define ZERO_DM_ALG_HIZ         (0x00u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_DIG_HIZ         (0x01u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_RES_UP          (0x02u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_RES_DWN         (0x03u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_OD_LO           (0x04u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_OD_HI           (0x05u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_STRONG          (0x06u << ZERO_DRIVE_MODE_SHIFT)
#define ZERO_DM_RES_UPDWN       (0x07u << ZERO_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define ZERO_MASK               ZERO__MASK
#define ZERO_SHIFT              ZERO__SHIFT
#define ZERO_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ZERO_PS                     (* (reg32 *) ZERO__PS)
/* Port Configuration */
#define ZERO_PC                     (* (reg32 *) ZERO__PC)
/* Data Register */
#define ZERO_DR                     (* (reg32 *) ZERO__DR)
/* Input Buffer Disable Override */
#define ZERO_INP_DIS                (* (reg32 *) ZERO__PC2)


#if defined(ZERO__INTSTAT)  /* Interrupt Registers */

    #define ZERO_INTSTAT                (* (reg32 *) ZERO__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins ZERO_H */


/* [] END OF FILE */
