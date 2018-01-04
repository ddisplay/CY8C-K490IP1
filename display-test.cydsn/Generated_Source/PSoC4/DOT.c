/*******************************************************************************
* File Name: DOT.c  
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
#include "DOT.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        DOT_PC =   (DOT_PC & \
                                (uint32)(~(uint32)(DOT_DRIVE_MODE_IND_MASK << (DOT_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (DOT_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: DOT_Write
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
void DOT_Write(uint8 value) 
{
    uint8 drVal = (uint8)(DOT_DR & (uint8)(~DOT_MASK));
    drVal = (drVal | ((uint8)(value << DOT_SHIFT) & DOT_MASK));
    DOT_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: DOT_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  DOT_DM_STRONG     Strong Drive 
*  DOT_DM_OD_HI      Open Drain, Drives High 
*  DOT_DM_OD_LO      Open Drain, Drives Low 
*  DOT_DM_RES_UP     Resistive Pull Up 
*  DOT_DM_RES_DWN    Resistive Pull Down 
*  DOT_DM_RES_UPDWN  Resistive Pull Up/Down 
*  DOT_DM_DIG_HIZ    High Impedance Digital 
*  DOT_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void DOT_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(DOT__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: DOT_Read
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
*  Macro DOT_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 DOT_Read(void) 
{
    return (uint8)((DOT_PS & DOT_MASK) >> DOT_SHIFT);
}


/*******************************************************************************
* Function Name: DOT_ReadDataReg
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
uint8 DOT_ReadDataReg(void) 
{
    return (uint8)((DOT_DR & DOT_MASK) >> DOT_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(DOT_INTSTAT) 

    /*******************************************************************************
    * Function Name: DOT_ClearInterrupt
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
    uint8 DOT_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(DOT_INTSTAT & DOT_MASK);
		DOT_INTSTAT = maskedStatus;
        return maskedStatus >> DOT_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
