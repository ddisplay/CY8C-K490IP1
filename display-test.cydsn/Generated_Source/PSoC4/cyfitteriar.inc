#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* BL */
BL__0__DM__MASK EQU 0x7000
BL__0__DM__SHIFT EQU 12
BL__0__DR EQU CYREG_PRT0_DR
BL__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
BL__0__HSIOM_MASK EQU 0x000F0000
BL__0__HSIOM_SHIFT EQU 16
BL__0__INTCFG EQU CYREG_PRT0_INTCFG
BL__0__INTSTAT EQU CYREG_PRT0_INTSTAT
BL__0__MASK EQU 0x10
BL__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
BL__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
BL__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
BL__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
BL__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
BL__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
BL__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
BL__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
BL__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
BL__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
BL__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
BL__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
BL__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
BL__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
BL__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
BL__0__PC EQU CYREG_PRT0_PC
BL__0__PC2 EQU CYREG_PRT0_PC2
BL__0__PORT EQU 0
BL__0__PS EQU CYREG_PRT0_PS
BL__0__SHIFT EQU 4
BL__DR EQU CYREG_PRT0_DR
BL__INTCFG EQU CYREG_PRT0_INTCFG
BL__INTSTAT EQU CYREG_PRT0_INTSTAT
BL__MASK EQU 0x10
BL__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
BL__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
BL__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
BL__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
BL__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
BL__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
BL__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
BL__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
BL__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
BL__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
BL__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
BL__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
BL__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
BL__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
BL__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
BL__PC EQU CYREG_PRT0_PC
BL__PC2 EQU CYREG_PRT0_PC2
BL__PORT EQU 0
BL__PS EQU CYREG_PRT0_PS
BL__SHIFT EQU 4

/* CLK */
CLK__0__DM__MASK EQU 0xE00000
CLK__0__DM__SHIFT EQU 21
CLK__0__DR EQU CYREG_PRT0_DR
CLK__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
CLK__0__HSIOM_MASK EQU 0xF0000000
CLK__0__HSIOM_SHIFT EQU 28
CLK__0__INTCFG EQU CYREG_PRT0_INTCFG
CLK__0__INTSTAT EQU CYREG_PRT0_INTSTAT
CLK__0__MASK EQU 0x80
CLK__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
CLK__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
CLK__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
CLK__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
CLK__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
CLK__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
CLK__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
CLK__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
CLK__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
CLK__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
CLK__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
CLK__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
CLK__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
CLK__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
CLK__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
CLK__0__PC EQU CYREG_PRT0_PC
CLK__0__PC2 EQU CYREG_PRT0_PC2
CLK__0__PORT EQU 0
CLK__0__PS EQU CYREG_PRT0_PS
CLK__0__SHIFT EQU 7
CLK__DR EQU CYREG_PRT0_DR
CLK__INTCFG EQU CYREG_PRT0_INTCFG
CLK__INTSTAT EQU CYREG_PRT0_INTSTAT
CLK__MASK EQU 0x80
CLK__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
CLK__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
CLK__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
CLK__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
CLK__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
CLK__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
CLK__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
CLK__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
CLK__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
CLK__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
CLK__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
CLK__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
CLK__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
CLK__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
CLK__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
CLK__PC EQU CYREG_PRT0_PC
CLK__PC2 EQU CYREG_PRT0_PC2
CLK__PORT EQU 0
CLK__PS EQU CYREG_PRT0_PS
CLK__SHIFT EQU 7

/* DOT */
DOT__0__DM__MASK EQU 0xE00000
DOT__0__DM__SHIFT EQU 21
DOT__0__DR EQU CYREG_PRT3_DR
DOT__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
DOT__0__HSIOM_MASK EQU 0xF0000000
DOT__0__HSIOM_SHIFT EQU 28
DOT__0__INTCFG EQU CYREG_PRT3_INTCFG
DOT__0__INTSTAT EQU CYREG_PRT3_INTSTAT
DOT__0__MASK EQU 0x80
DOT__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
DOT__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
DOT__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
DOT__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
DOT__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
DOT__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
DOT__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
DOT__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
DOT__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
DOT__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
DOT__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
DOT__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
DOT__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
DOT__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
DOT__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
DOT__0__PC EQU CYREG_PRT3_PC
DOT__0__PC2 EQU CYREG_PRT3_PC2
DOT__0__PORT EQU 3
DOT__0__PS EQU CYREG_PRT3_PS
DOT__0__SHIFT EQU 7
DOT__DR EQU CYREG_PRT3_DR
DOT__INTCFG EQU CYREG_PRT3_INTCFG
DOT__INTSTAT EQU CYREG_PRT3_INTSTAT
DOT__MASK EQU 0x80
DOT__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
DOT__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
DOT__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
DOT__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
DOT__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
DOT__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
DOT__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
DOT__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
DOT__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
DOT__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
DOT__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
DOT__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
DOT__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
DOT__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
DOT__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
DOT__PC EQU CYREG_PRT3_PC
DOT__PC2 EQU CYREG_PRT3_PC2
DOT__PORT EQU 3
DOT__PS EQU CYREG_PRT3_PS
DOT__SHIFT EQU 7

/* LED */
LED__0__DM__MASK EQU 0x1C0
LED__0__DM__SHIFT EQU 6
LED__0__DR EQU CYREG_PRT0_DR
LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
LED__0__HSIOM_MASK EQU 0x00000F00
LED__0__HSIOM_SHIFT EQU 8
LED__0__INTCFG EQU CYREG_PRT0_INTCFG
LED__0__INTSTAT EQU CYREG_PRT0_INTSTAT
LED__0__MASK EQU 0x04
LED__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LED__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LED__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LED__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LED__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LED__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LED__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LED__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LED__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LED__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LED__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LED__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LED__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LED__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LED__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LED__0__PC EQU CYREG_PRT0_PC
LED__0__PC2 EQU CYREG_PRT0_PC2
LED__0__PORT EQU 0
LED__0__PS EQU CYREG_PRT0_PS
LED__0__SHIFT EQU 2
LED__DR EQU CYREG_PRT0_DR
LED__INTCFG EQU CYREG_PRT0_INTCFG
LED__INTSTAT EQU CYREG_PRT0_INTSTAT
LED__MASK EQU 0x04
LED__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
LED__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
LED__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
LED__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
LED__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
LED__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
LED__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
LED__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
LED__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
LED__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
LED__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
LED__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
LED__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
LED__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
LED__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
LED__PC EQU CYREG_PRT0_PC
LED__PC2 EQU CYREG_PRT0_PC2
LED__PORT EQU 0
LED__PS EQU CYREG_PRT0_PS
LED__SHIFT EQU 2

/* ZERO */
ZERO__0__DM__MASK EQU 0x38000
ZERO__0__DM__SHIFT EQU 15
ZERO__0__DR EQU CYREG_PRT0_DR
ZERO__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
ZERO__0__HSIOM_MASK EQU 0x00F00000
ZERO__0__HSIOM_SHIFT EQU 20
ZERO__0__INTCFG EQU CYREG_PRT0_INTCFG
ZERO__0__INTSTAT EQU CYREG_PRT0_INTSTAT
ZERO__0__MASK EQU 0x20
ZERO__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
ZERO__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
ZERO__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
ZERO__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
ZERO__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
ZERO__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
ZERO__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
ZERO__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
ZERO__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
ZERO__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
ZERO__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
ZERO__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
ZERO__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
ZERO__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
ZERO__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
ZERO__0__PC EQU CYREG_PRT0_PC
ZERO__0__PC2 EQU CYREG_PRT0_PC2
ZERO__0__PORT EQU 0
ZERO__0__PS EQU CYREG_PRT0_PS
ZERO__0__SHIFT EQU 5
ZERO__DR EQU CYREG_PRT0_DR
ZERO__INTCFG EQU CYREG_PRT0_INTCFG
ZERO__INTSTAT EQU CYREG_PRT0_INTSTAT
ZERO__MASK EQU 0x20
ZERO__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
ZERO__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
ZERO__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
ZERO__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
ZERO__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
ZERO__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
ZERO__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
ZERO__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
ZERO__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
ZERO__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
ZERO__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
ZERO__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
ZERO__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
ZERO__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
ZERO__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
ZERO__PC EQU CYREG_PRT0_PC
ZERO__PC2 EQU CYREG_PRT0_PC2
ZERO__PORT EQU 0
ZERO__PS EQU CYREG_PRT0_PS
ZERO__SHIFT EQU 5

/* isr_1 */
isr_1__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
isr_1__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
isr_1__INTC_MASK EQU 0x01
isr_1__INTC_NUMBER EQU 0
isr_1__INTC_PRIOR_MASK EQU 0xC0
isr_1__INTC_PRIOR_NUM EQU 3
isr_1__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
isr_1__INTC_SET_EN_REG EQU CYREG_CM0_ISER
isr_1__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* Timer_1_TimerUDB */
Timer_1_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_1_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_1_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_1_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_1_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_1_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_1_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_1_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_UDB_W8_MSK_03
Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_UDB_W8_ST_03
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_UDB_W8_CTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_UDB_W8_CTL_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_UDB_W8_MSK_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_02
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_02
Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_02
Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG EQU CYREG_UDB_W8_A0_02
Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG EQU CYREG_UDB_W8_A1_02
Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_02
Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG EQU CYREG_UDB_W8_D0_02
Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG EQU CYREG_UDB_W8_D1_02
Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_02
Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG EQU CYREG_UDB_W8_F0_02
Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG EQU CYREG_UDB_W8_F1_02
Timer_1_TimerUDB_sT16_timerdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
Timer_1_TimerUDB_sT16_timerdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG EQU CYREG_UDB_CAT16_A_03
Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG EQU CYREG_UDB_W8_A0_03
Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG EQU CYREG_UDB_W8_A1_03
Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG EQU CYREG_UDB_CAT16_D_03
Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG EQU CYREG_UDB_W8_D0_03
Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG EQU CYREG_UDB_W8_D1_03
Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_03
Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG EQU CYREG_UDB_CAT16_F_03
Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG EQU CYREG_UDB_W8_F0_03
Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG EQU CYREG_UDB_W8_F1_03

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 4
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 5
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_4D EQU 3
CYDEV_CHIP_MEMBER_5A EQU 4
CYDEV_CHIP_MEMBER_5B EQU 5
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_ES0 EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_HEAP_SIZE EQU 0x0100
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
