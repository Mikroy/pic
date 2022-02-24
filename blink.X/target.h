/*
 * File:   target.h
 * 
 * Brief: PIC18F27K42 Configuration Bit Settings.
 * 
 * Author: Miguel Ruiz Esparza
 *
 * Feb/2022
 * 
 * Public.
 */
#ifndef TARGET_H
#define	TARGET_H

// PIC18F27K42 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1L
#pragma config FEXTOSC  = 0x04   // External Oscillator Selection (Oscillator not enabled)
#pragma config RSTOSC   = 0x06   // Reset Oscillator Selection (HFINTOSC with HFFRQ = 4 MHz and CDIV = 4:1)

// CONFIG1H
#pragma config CLKOUTEN = 0x00   // Clock out Enable bit (CLKOUT function is disabled)
#pragma config PR1WAY   = 0x01   // PRLOCKED One-Way Set Enable bit (PRLOCK bit can be cleared and set only once)
#pragma config CSWEN    = 0x01   // Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
#pragma config FCMEN    = 0x01   // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)

// CONFIG2L
#pragma config MCLRE    = 0x01   // MCLR Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
#pragma config PWRTS    = 0x01   // Power-up timer selection bits (PWRT set at 16ms)
#pragma config MVECEN   = 0x01   // Multi-vector enable bit (Multi-vector enabled, Vector table used for interrupts)
#pragma config IVT1WAY  = 0x01   // IVTLOCK bit One-way set enable bit (IVTLOCK bit can be cleared and set only once)
#pragma config LPBOREN  = 0x00   // Low Power BOR Enable bit (ULPBOR enabled)
#pragma config BOREN    = 0x11   // Brown-out Reset Enable bits (Brown-out Reset enabled , SBOREN bit is ignored)

// CONFIG2H
#pragma config BORV     = 0x01   // Brown-out Reset Voltage Selection bits (Brown-out Reset Voltage (VBOR) set to 2.7V)
#pragma config ZCD      = 0x01   // ZCD Disable bit (ZCD disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
#pragma config PPS1WAY  = 0x01   // PPSLOCK bit One-Way Set Enable bit (PPSLOCK bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle)
#pragma config STVREN   = 0x01   // Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
#pragma config DEBUG    = 0x01   // Debugger Enable bit (Background debugger disabled)
#pragma config XINST    = 0x01   // Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)

// CONFIG3L
#pragma config WDTCPS   = 0x0A   // WDT Period selection bits (Divider ratio 1:65536; software control of WDTPS)
#pragma config WDTE     = 0x00   // WDT operating mode (WDT Disabled; SWDTEN is ignored)

// CONFIG3H
#pragma config WDTCWS   = 0x07   // WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS   = 0x07   // WDT input clock selector (Software Control)

// CONFIG4L
#pragma config BBSIZE   = 0x07   // Boot Block Size selection bits (Boot Block size is 512 words)
#pragma config BBEN     = 0x01   // Boot Block enable bit (Boot block disabled)
#pragma config SAFEN    = 0x01   // Storage Area Flash enable bit (SAF disabled)
#pragma config WRTAPP   = 0x01   // Application Block write protection bit (Application Block not write protected)

// CONFIG4H
#pragma config WRTB     = 0x01   // Configuration Register Write Protection bit (Configuration registers (300000-30000Bh) not write-protected)
#pragma config WRTC     = 0x01   // Boot Block Write Protection bit (Boot Block (000000-0007FFh) not write-protected)
#pragma config WRTD     = 0x01   // Data EEPROM Write Protection bit (Data EEPROM not write-protected)
#pragma config WRTSAF   = 0x01   // SAF Write protection bit (SAF not Write Protected)
#pragma config LVP      = 0x00   // Low Voltage Programming Enable bit (HV on MCLR/VPP must be used for programming)

// CONFIG5L
#pragma config CP       = 0x01   // PFM and Data EEPROM Code Protection bit (PFM and Data EEPROM code protection disabled)

// CONFIG5H

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */
//OSCCON = 0b11110010;  // 8 MHz internal osc 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

