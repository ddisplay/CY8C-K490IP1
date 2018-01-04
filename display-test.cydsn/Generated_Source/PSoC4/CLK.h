/*******************************************************************************
* File Name: CLK.h  
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

#if !defined(CY_PINS_CLK_H) /* Pins CLK_H */
#define CY_PINS_CLK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "CLK_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    CLK_Write(uint8 value) ;
void    CLK_SetDriveMode(uint8 mode) ;
uint8   CLK_ReadDataReg(void) ;
uint8   CLK_Read(void) ;
uint8   CLK_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define CLK_DRIVE_MODE_BITS        (3)
#define CLK_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - CLK_DRIVE_MODE_BITS))
#define CLK_DRIVE_MODE_SHIFT       (0x00u)
#define CLK_DRIVE_MODE_MASK        (0x07u << CLK_DRIVE_MODE_SHIFT)

#define CLK_DM_ALG_HIZ         (0x00u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_DIG_HIZ         (0x01u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_RES_UP          (0x02u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_RES_DWN         (0x03u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_OD_LO           (0x04u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_OD_HI           (0x05u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_STRONG          (0x06u << CLK_DRIVE_MODE_SHIFT)
#define CLK_DM_RES_UPDWN       (0x07u << CLK_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define CLK_MASK               CLK__MASK
#define CLK_SHIFT              CLK__SHIFT
#define CLK_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CLK_PS                     (* (reg32 *) CLK__PS)
/* Port Configuration */
#define CLK_PC                     (* (reg32 *) CLK__PC)
/* Data Register */
#define CLK_DR                     (* (reg32 *) CLK__DR)
/* Input Buffer Disable Override */
#define CLK_INP_DIS                (* (reg32 *) CLK__PC2)


#if defined(CLK__INTSTAT)  /* Interrupt Registers */

    #define CLK_INTSTAT                (* (reg32 *) CLK__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins CLK_H */


/* [] END OF FILE */
