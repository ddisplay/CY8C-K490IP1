/*******************************************************************************
* File Name: CLK.c  
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
#include "CLK.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        CLK_PC =   (CLK_PC & \
                                (uint32)(~(uint32)(CLK_DRIVE_MODE_IND_MASK << (CLK_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (CLK_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: CLK_Write
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
void CLK_Write(uint8 value) 
{
    uint8 drVal = (uint8)(CLK_DR & (uint8)(~CLK_MASK));
    drVal = (drVal | ((uint8)(value << CLK_SHIFT) & CLK_MASK));
    CLK_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: CLK_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  CLK_DM_STRONG     Strong Drive 
*  CLK_DM_OD_HI      Open Drain, Drives High 
*  CLK_DM_OD_LO      Open Drain, Drives Low 
*  CLK_DM_RES_UP     Resistive Pull Up 
*  CLK_DM_RES_DWN    Resistive Pull Down 
*  CLK_DM_RES_UPDWN  Resistive Pull Up/Down 
*  CLK_DM_DIG_HIZ    High Impedance Digital 
*  CLK_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void CLK_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(CLK__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: CLK_Read
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
*  Macro CLK_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 CLK_Read(void) 
{
    return (uint8)((CLK_PS & CLK_MASK) >> CLK_SHIFT);
}


/*******************************************************************************
* Function Name: CLK_ReadDataReg
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
uint8 CLK_ReadDataReg(void) 
{
    return (uint8)((CLK_DR & CLK_MASK) >> CLK_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(CLK_INTSTAT) 

    /*******************************************************************************
    * Function Name: CLK_ClearInterrupt
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
    uint8 CLK_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(CLK_INTSTAT & CLK_MASK);
		CLK_INTSTAT = maskedStatus;
        return maskedStatus >> CLK_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
