/**
 *	Defines the Reset and Clock Control Register definitions for STM32
 *
 *
 *
 **/
#ifndef _IOCON_H_
#define _IOCON_H_

#include <bitthunder.h>

#ifdef BT_CONFIG_MACH_LPC11Axx
typedef struct _LPC11xx_IOCON_REGS {
	BT_u32		LPC11xx_IOCON_RESET_PIO0_0;				// 0x000 Offset
	BT_u32		LPC11xx_IOCON_PIO0_1;					// 0x004 Offset
	BT_u32		LPC11xx_IOCON_PIO0_2;					// 0x008 Offset
	BT_u32		LPC11xx_IOCON_PIO0_3;					// 0x00C Offset
	BT_u32		LPC11xx_IOCON_PIO0_4;					// 0x010 Offset
	BT_u32		LPC11xx_IOCON_TCK_PIO0_5;				// 0x014 Offset
	BT_u32		LPC11xx_IOCON_TDI_PIO0_6;				// 0x018 Offset
	BT_u32		LPC11xx_IOCON_TMS_PIO0_7;				// 0x01C Offset
	BT_u32		LPC11xx_IOCON_TDO_PIO0_8;				// 0x020 Offset
	BT_u32		LPC11xx_IOCON_TRST_PIO0_8;				// 0x024 Offset
	BT_u32		LPC11xx_IOCON_SWDIO_PIO0_10;			// 0x028 Offset
	BT_u32		LPC11xx_IOCON_PIO0_11;					// 0x02C Offset
	BT_u32		LPC11xx_IOCON_PIO0_12;					// 0x030 Offset
	BT_u32		LPC11xx_IOCON_PIO0_13;					// 0x034 Offset
	BT_u32		LPC11xx_IOCON_PIO0_14;					// 0x038 Offset
	BT_u32		LPC11xx_IOCON_PIO0_15;					// 0x03C Offset
	BT_u32		LPC11xx_IOCON_PIO0_16;					// 0x040 Offset
	BT_u32		LPC11xx_IOCON_PIO0_17;					// 0x044 Offset
	BT_u32		LPC11xx_IOCON_PIO0_18;					// 0x048 Offset
	BT_u32		LPC11xx_IOCON_PIO0_19;					// 0x04C Offset
	BT_u32		LPC11xx_IOCON_PIO0_20;					// 0x050 Offset
	BT_u32		LPC11xx_IOCON_PIO0_21;					// 0x054 Offset
	BT_u32		LPC11xx_IOCON_PIO0_22;					// 0x058 Offset
	BT_u32		LPC11xx_IOCON_PIO0_23;					// 0x05C Offset
	BT_u32		LPC11xx_IOCON_PIO0_24;					// 0x060 Offset
	BT_u32		LPC11xx_IOCON_PIO0_25;					// 0x064 Offset
	BT_u32		LPC11xx_IOCON_PIO0_26;					// 0x068 Offset
	BT_u32		LPC11xx_IOCON_PIO0_27;					// 0x06C Offset
	BT_u32		LPC11xx_IOCON_PIO0_28;					// 0x070 Offset
	BT_u32		LPC11xx_IOCON_PIO0_29;					// 0x074 Offset
	BT_u32		LPC11xx_IOCON_PIO0_30;					// 0x078 Offset
	BT_u32		LPC11xx_IOCON_PIO0_31;					// 0x07C Offset
	BT_u32		LPC11xx_IOCON_PIO1_0;					// 0x080 Offset
	BT_u32		LPC11xx_IOCON_PIO1_1;					// 0x084 Offset
	BT_u32		LPC11xx_IOCON_PIO1_2;					// 0x088 Offset
	BT_u32		LPC11xx_IOCON_PIO1_3;					// 0x08C Offset
	BT_u32		LPC11xx_IOCON_PIO1_4;					// 0x090 Offset
	BT_u32		LPC11xx_IOCON_PIO1_5;					// 0x094 Offset
	BT_u32		LPC11xx_IOCON_PIO1_6;					// 0x098 Offset
	BT_u32		LPC11xx_IOCON_PIO1_7;					// 0x09C Offset
	BT_u32		LPC11xx_IOCON_PIO1_8;					// 0x0A0 Offset
	BT_u32		LPC11xx_IOCON_PIO1_9;					// 0x0A4 Offset
} LPC11xx_IOCON_REGS;
#else
typedef struct _LPC11xx_IOCON_REGS {
	BT_u32		LPC11xx_IOCON_PIO2_6;					// 0x000 Offset
	BT_STRUCT_RESERVED_u32(0, 0x00, 0x08);				// 0x004 Offset
	BT_u32		LPC11xx_IOCON_PIO2_0;					// 0x008 Offset
	BT_u32		LPC11xx_IOCON_RESET_PIO0_0;				// 0x00C Offset
	BT_u32		LPC11xx_IOCON_PIO0_1;					// 0x010 Offset
	BT_u32		LPC11xx_IOCON_PIO1_8;					// 0x014 Offset
	BT_STRUCT_RESERVED_u32(1, 0x14, 0x1C);				// 0x018 Offset
	BT_u32		LPC11xx_IOCON_PIO0_2;					// 0x01C Offset
	BT_u32		LPC11xx_IOCON_PIO2_7;					// 0x020 Offset
	BT_u32		LPC11xx_IOCON_PIO2_8;					// 0x024 Offset
	BT_u32		LPC11xx_IOCON_PIO2_1;					// 0x028 Offset
	BT_u32		LPC11xx_IOCON_PIO0_3;					// 0x02C Offset
	BT_u32		LPC11xx_IOCON_PIO0_4;					// 0x030 Offset
	BT_u32		LPC11xx_IOCON_PIO0_5;					// 0x034 Offset
	BT_u32		LPC11xx_IOCON_PIO1_9;					// 0x038 Offset
	BT_u32		LPC11xx_IOCON_PIO3_4;					// 0x03C Offset
	BT_u32		LPC11xx_IOCON_PIO2_4;					// 0x040 Offset
	BT_u32		LPC11xx_IOCON_PIO2_5;					// 0x044 Offset
	BT_u32		LPC11xx_IOCON_PIO3_5;					// 0x048 Offset
	BT_u32		LPC11xx_IOCON_PIO0_6;					// 0x04C Offset
	BT_u32		LPC11xx_IOCON_PIO0_7;					// 0x050 Offset
	BT_u32		LPC11xx_IOCON_PIO2_9;					// 0x054 Offset
	BT_u32		LPC11xx_IOCON_PIO2_10;					// 0x058 Offset
	BT_u32		LPC11xx_IOCON_PIO2_2;					// 0x05C Offset
	BT_u32		LPC11xx_IOCON_PIO0_8;					// 0x060 Offset
	BT_u32		LPC11xx_IOCON_PIO0_9;					// 0x064 Offset
	BT_u32		LPC11xx_IOCON_SWCLK_PIO0_10;				// 0x068 Offset
	BT_u32		LPC11xx_IOCON_PIO1_10;					// 0x06C Offset
	BT_u32		LPC11xx_IOCON_PIO2_11;					// 0x070 Offset
	BT_u32		LPC11xx_IOCON_PIO0_11;					// 0x074 Offset
	BT_u32		LPC11xx_IOCON_PIO1_0;					// 0x078 Offset
	BT_u32		LPC11xx_IOCON_PIO1_1;					// 0x07C Offset
	BT_u32		LPC11xx_IOCON_PIO1_2;					// 0x080 Offset
	BT_u32		LPC11xx_IOCON_PIO3_0;					// 0x084 Offset
	BT_u32		LPC11xx_IOCON_PIO3_1;					// 0x088 Offset
	BT_u32		LPC11xx_IOCON_PIO2_3;					// 0x08C Offset
	BT_u32		LPC11xx_IOCON_SWDIO_PIO1_3;				// 0x090 Offset
	BT_u32		LPC11xx_IOCON_PIO1_4;					// 0x094 Offset
	BT_u32		LPC11xx_IOCON_PIO1_11;					// 0x098 Offset
	BT_u32		LPC11xx_IOCON_PIO3_2;					// 0x09C Offset
	BT_u32		LPC11xx_IOCON_PIO1_5;					// 0x0A0 Offset
	BT_u32		LPC11xx_IOCON_PIO1_6;					// 0x0A4 Offset

#define LPC11xx_IOCON_PIO1_6_FUNC_RXD					0x00000001
#define LPC11xx_IOCON_PIO1_6_FUNC_CT32B0_MAT0			0x00000002
#define LPC11xx_IOCON_PIO1_6_MODE_PD					0x00000008
#define LPC11xx_IOCON_PIO1_6_MODE_PU					0x00000010
#define LPC11xx_IOCON_PIO1_6_MODE_REPEATER				0x00000018
#define LPC11xx_IOCON_PIO1_6_HYST_ENABLE				0x00000020
#define LPC11xx_IOCON_PIO1_6_OD							0x00000400


	BT_u32		LPC11xx_IOCON_PIO1_7;					// 0x0A8 Offset

#define LPC11xx_IOCON_PIO1_7_FUNC_TXD					0x00000001
#define LPC11xx_IOCON_PIO1_7_FUNC_CT32B0_MAT1			0x00000002
#define LPC11xx_IOCON_PIO1_7_MODE_PD					0x00000008
#define LPC11xx_IOCON_PIO1_7_MODE_PU					0x00000010
#define LPC11xx_IOCON_PIO1_7_MODE_REPEATER				0x00000018
#define LPC11xx_IOCON_PIO1_7_HYST_ENABLE				0x00000020
#define LPC11xx_IOCON_PIO1_7_OD							0x00000400

	BT_u32		LPC11xx_IOCON_PIO3_3;					// 0x0AC Offset
	BT_u32		LPC11xx_IOCON_SCK_LOC;					// 0x0B0 Offset
	BT_u32		LPC11xx_IOCON_DSR_LOC;					// 0x0B4 Offset
	BT_u32		LPC11xx_IOCON_DCD_LOC;					// 0x0B8 Offset
	BT_u32		LPC11xx_IOCON_RI_LOC;					// 0x0BC Offset
} LPC11xx_IOCON_REGS;
#endif


#define LPC11xx_IOCON_BASE	0x40044000
#define LPC11xx_IOCON 		((LPC11xx_IOCON_REGS *) (LPC11xx_IOCON_BASE))

#ifdef BT_CONFIG_MACH_LPC11Axx
	#define LPC11xx_PIO0_0			&LPC11xx_IOCON->LPC11xx_IOCON_RESET_PIO0_0
	#define LPC11xx_PIO0_1			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_1
	#define LPC11xx_PIO0_2			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_2
	#define LPC11xx_PIO0_3			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_3
	#define LPC11xx_PIO0_4			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_4
	#define LPC11xx_PIO0_5			&LPC11xx_IOCON->LPC11xx_IOCON_TCK_PIO0_5
	#define LPC11xx_PIO0_6			&LPC11xx_IOCON->LPC11xx_IOCON_TDI_PIO0_6
	#define LPC11xx_PIO0_7			&LPC11xx_IOCON->LPC11xx_IOCON_TMS_PIO0_7
	#define LPC11xx_PIO0_8			&LPC11xx_IOCON->LPC11xx_IOCON_TDO_PIO0_8
	#define LPC11xx_PIO0_9			&LPC11xx_IOCON->LPC11xx_IOCON_TRST_PIO0_8
	#define LPC11xx_PIO0_10			&LPC11xx_IOCON->LPC11xx_IOCON_SWDIO_PIO0_10
	#define LPC11xx_PIO0_11			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_11
	#define LPC11xx_PIO0_12			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_12
	#define LPC11xx_PIO0_13			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_13
	#define LPC11xx_PIO0_14			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_14
	#define LPC11xx_PIO0_15			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_15
	#define LPC11xx_PIO0_16			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_16
	#define LPC11xx_PIO0_17			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_17
	#define LPC11xx_PIO0_18			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_18
	#define LPC11xx_PIO0_19			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_19
	#define LPC11xx_PIO0_20			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_20
	#define LPC11xx_PIO0_21			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_21
	#define LPC11xx_PIO0_22			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_22
	#define LPC11xx_PIO0_23			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_23
	#define LPC11xx_PIO0_24			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_24
	#define LPC11xx_PIO0_25			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_25
	#define LPC11xx_PIO0_26			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_26
	#define LPC11xx_PIO0_27			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_27
	#define LPC11xx_PIO0_28			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_28
	#define LPC11xx_PIO0_29			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_29
	#define LPC11xx_PIO0_30			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_30
	#define LPC11xx_PIO0_31			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_31
	#define LPC11xx_PIO1_0			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_0
	#define LPC11xx_PIO1_1			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_1
	#define LPC11xx_PIO1_2			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_2
	#define LPC11xx_PIO1_3			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_3
	#define LPC11xx_PIO1_4			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_4
	#define LPC11xx_PIO1_5			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_5
	#define LPC11xx_PIO1_6			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_6
	#define LPC11xx_PIO1_7			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_7
	#define LPC11xx_PIO1_8			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_8
	#define LPC11xx_PIO1_9			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_9
#else
	#define LPC11xx_PIO0_0			&LPC11xx_IOCON->LPC11xx_IOCON_RESET_PIO0_0
	#define LPC11xx_PIO0_1			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_1
	#define LPC11xx_PIO0_2			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_2
	#define LPC11xx_PIO0_3			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_3
	#define	LPC11xx_PIO0_4			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_4
	#define	LPC11xx_PIO0_5			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_5
	#define	LPC11xx_PIO0_6			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_6

#define LPC11xx_PIO0_6_SCK0		0x02

	#define	LPC11xx_PIO0_7			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_7
	#define	LPC11xx_PIO0_8			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_8
	#define	LPC11xx_PIO0_9			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_9
	#define	LPC11xx_PIO0_10			&LPC11xx_IOCON->LPC11xx_IOCON_SWCLK_PIO0_10

#define LPC11xx_PIO0_10_SCK0		0x02

	#define	LPC11xx_PIO0_11			&LPC11xx_IOCON->LPC11xx_IOCON_PIO0_11

	#define	LPC11xx_PIO1_0			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_0
	#define	LPC11xx_PIO1_1			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_1
	#define	LPC11xx_PIO1_2			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_2
	#define	LPC11xx_PIO1_3			&LPC11xx_IOCON->LPC11xx_IOCON_SWDIO_PIO1_3
	#define	LPC11xx_PIO1_4			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_4
	#define	LPC11xx_PIO1_5			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_5
	#define	LPC11xx_PIO1_6			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_6
	#define	LPC11xx_PIO1_7			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_7
	#define	LPC11xx_PIO1_8			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_8
	#define	LPC11xx_PIO1_10			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_10
	#define	LPC11xx_PIO1_11			&LPC11xx_IOCON->LPC11xx_IOCON_PIO1_11

	#define	LPC11xx_PIO2_10			&LPC11xx_IOCON->LPC11xx_IOCON_PIO2_10
	#define	LPC11xx_PIO2_11			&LPC11xx_IOCON->LPC11xx_IOCON_PIO2_11

#define LPC11xx_PIO2_11_SCK0		0x01

	#define	LPC11xx_PIO3_0			&LPC11xx_IOCON->LPC11xx_IOCON_PIO3_0
	#define	LPC11xx_PIO3_1			&LPC11xx_IOCON->LPC11xx_IOCON_PIO3_1
	#define	LPC11xx_PIO3_2			&LPC11xx_IOCON->LPC11xx_IOCON_PIO3_2
	#define	LPC11xx_PIO3_3			&LPC11xx_IOCON->LPC11xx_IOCON_PIO3_3

	#define	LPC11xx_IOCON_SCK_LOC	&LPC11xx_IOCON->LPC11xx_IOCON_SCK_LOC
#endif

void BT_LPC11xx_SetIOConfig(BT_u32 * pIOCON, BT_u32 ulFunction, BT_u32 ulMode, BT_u32 ulAnalogInput, BT_u32 ulOpenDrain);

#endif

