/*******************************************************************************
* File Name: Blanking.h  
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

#if !defined(CY_PINS_Blanking_H) /* Pins Blanking_H */
#define CY_PINS_Blanking_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Blanking_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Blanking_Write(uint8 value) ;
void    Blanking_SetDriveMode(uint8 mode) ;
uint8   Blanking_ReadDataReg(void) ;
uint8   Blanking_Read(void) ;
uint8   Blanking_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Blanking_DRIVE_MODE_BITS        (3)
#define Blanking_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Blanking_DRIVE_MODE_BITS))
#define Blanking_DRIVE_MODE_SHIFT       (0x00u)
#define Blanking_DRIVE_MODE_MASK        (0x07u << Blanking_DRIVE_MODE_SHIFT)

#define Blanking_DM_ALG_HIZ         (0x00u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_DIG_HIZ         (0x01u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_RES_UP          (0x02u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_RES_DWN         (0x03u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_OD_LO           (0x04u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_OD_HI           (0x05u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_STRONG          (0x06u << Blanking_DRIVE_MODE_SHIFT)
#define Blanking_DM_RES_UPDWN       (0x07u << Blanking_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define Blanking_MASK               Blanking__MASK
#define Blanking_SHIFT              Blanking__SHIFT
#define Blanking_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Blanking_PS                     (* (reg32 *) Blanking__PS)
/* Port Configuration */
#define Blanking_PC                     (* (reg32 *) Blanking__PC)
/* Data Register */
#define Blanking_DR                     (* (reg32 *) Blanking__DR)
/* Input Buffer Disable Override */
#define Blanking_INP_DIS                (* (reg32 *) Blanking__PC2)


#if defined(Blanking__INTSTAT)  /* Interrupt Registers */

    #define Blanking_INTSTAT                (* (reg32 *) Blanking__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins Blanking_H */


/* [] END OF FILE */
