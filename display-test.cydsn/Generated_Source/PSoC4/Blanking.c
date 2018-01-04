/*******************************************************************************
* File Name: Blanking.c  
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
#include "Blanking.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        Blanking_PC =   (Blanking_PC & \
                                (uint32)(~(uint32)(Blanking_DRIVE_MODE_IND_MASK << (Blanking_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (Blanking_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: Blanking_Write
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
void Blanking_Write(uint8 value) 
{
    uint8 drVal = (uint8)(Blanking_DR & (uint8)(~Blanking_MASK));
    drVal = (drVal | ((uint8)(value << Blanking_SHIFT) & Blanking_MASK));
    Blanking_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: Blanking_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Blanking_DM_STRONG     Strong Drive 
*  Blanking_DM_OD_HI      Open Drain, Drives High 
*  Blanking_DM_OD_LO      Open Drain, Drives Low 
*  Blanking_DM_RES_UP     Resistive Pull Up 
*  Blanking_DM_RES_DWN    Resistive Pull Down 
*  Blanking_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Blanking_DM_DIG_HIZ    High Impedance Digital 
*  Blanking_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Blanking_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(Blanking__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: Blanking_Read
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
*  Macro Blanking_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Blanking_Read(void) 
{
    return (uint8)((Blanking_PS & Blanking_MASK) >> Blanking_SHIFT);
}


/*******************************************************************************
* Function Name: Blanking_ReadDataReg
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
uint8 Blanking_ReadDataReg(void) 
{
    return (uint8)((Blanking_DR & Blanking_MASK) >> Blanking_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Blanking_INTSTAT) 

    /*******************************************************************************
    * Function Name: Blanking_ClearInterrupt
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
    uint8 Blanking_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(Blanking_INTSTAT & Blanking_MASK);
		Blanking_INTSTAT = maskedStatus;
        return maskedStatus >> Blanking_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
