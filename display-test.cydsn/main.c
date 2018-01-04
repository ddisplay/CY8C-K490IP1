/*

*/
#include <project.h>

void shiftData(uint8 dataToShift);

/*
BL=0 display Off
BL=1 display On
DOT=0   Dot Off
DOT=1   Dot On
Zero=1 All reset
*/

uint16 ms_count = 0;
uint8 i=0;

CY_ISR(MY_ISR) {
    ms_count++;
    //LED_Write(!LED_Read()); // Toggle LED
    DOT_Write(!DOT_Read()); // Toggle K490IP1 Dot
    ms_count = 0; // reset ms counter
}

int main()
{
    BL_Write(0xff);
    CyDelayUs(100);
    ZERO_Write(0xff);
    CyDelayUs(100);
    LED_Write(0xff);        //Debug LED

    Timer_1_Start(); // Configure and enable timer
	isr_1_StartEx(MY_ISR); // Point to MY_ISR to carry out the interrupt sub-routine

    CyGlobalIntEnable; // Enable global interrupts
    
    
    for(;;)
    {
        
		for (i=0;i<10;i++){
    		shiftData(i);
			CyDelay(350);
        }
           
    }
}

void shiftData(uint8 dataToShift)
{
        uint8 i;
    
        ZERO_Write(0xff);           // Reset counter 
        ZERO_Write(0x00);
        for (i = 0; i<dataToShift; i++){    //Pulses
        CLK_Write(0xff);
        CLK_Write(0x00);
        }
}

/* [] END OF FILE */
