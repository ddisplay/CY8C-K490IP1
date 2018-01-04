/*******************************************************************************
* File Name: ZERO.c  
* Version 2.5
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "ZERO.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        ZERO_PC =   (ZERO_PC & \
                                (uint32)(~(uint32)(ZERO_DRIVE_MODE_IND_MASK << (ZERO_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (ZERO_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: ZERO_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void ZERO_Write(uint8 value) 
{
    uint8 drVal = (uint8)(ZERO_DR & (uint8)(~ZERO_MASK));
    drVal = (drVal | ((uint8)(value << ZERO_SHIFT) & ZERO_MASK));
    ZERO_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: ZERO_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  ZERO_DM_STRONG     Strong Drive 
*  ZERO_DM_OD_HI      Open Drain, Drives High 
*  ZERO_DM_OD_LO      Open Drain, Drives Low 
*  ZERO_DM_RES_UP     Resistive Pull Up 
*  ZERO_DM_RES_DWN    Resistive Pull Down 
*  ZERO_DM_RES_UPDWN  Resistive Pull Up/Down 
*  ZERO_DM_DIG_HIZ    High Impedance Digital 
*  ZERO_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void ZERO_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(ZERO__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: ZERO_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro ZERO_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 ZERO_Read(void) 
{
    return (uint8)((ZERO_PS & ZERO_MASK) >> ZERO_SHIFT);
}


/*******************************************************************************
* Function Name: ZERO_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 ZERO_ReadDataReg(void) 
{
    return (uint8)((ZERO_DR & ZERO_MASK) >> ZERO_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(ZERO_INTSTAT) 

    /*******************************************************************************
    * Function Name: ZERO_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 ZERO_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(ZERO_INTSTAT & ZERO_MASK);
		ZERO_INTSTAT = maskedStatus;
        return maskedStatus >> ZERO_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
