/**
 *	Zynq Platform Machine Description.
 *
 *	@author		James Walmsley
 *
 *	@copyright	(c)2012 Riegl Laser Measurement Systems GmBH
 *	@copyright	(c)2012 James Walmsley <james@fullfat-fs.co.uk>
 *
 **/


#include <bitthunder.h>

#include "uart.h"
#include "gpio.h"

static const BT_RESOURCE oLPC11xx_gpio_resources[] = {
	{
		.ulStart 			= BT_CONFIG_MACH_LPC11xx_GPIO_BASE,
		.ulEnd 				= BT_CONFIG_MACH_LPC11xx_GPIO_BASE + BT_SIZE_4K - 1,
		.ulFlags 			= BT_RESOURCE_MEM,
	},
	{
		.ulStart			= 0,
		.ulEnd				= BT_CONFIG_MACH_LPC11xx_TOTAL_GPIOS-1,
		.ulFlags			= BT_RESOURCE_IO,
	},
	{
		.ulStart			= 28,
		.ulEnd				= 31,
		.ulFlags			= BT_RESOURCE_IRQ,
	},
};

/**
 *	By using the BT_INTEGRATED_DEVICE_DEF macro, we ensure that this structure is
 *	placed into the device manager's integrated device table.
 *
 *	This allows it to be automatically enumerated without "registering" a driver.
 **/
BT_INTEGRATED_DEVICE_DEF oLPC11xx_gpio_device = {
	.name 					= "LPC11xx,gpio",
	.ulTotalResources 		= BT_ARRAY_SIZE(oLPC11xx_gpio_resources),
	.pResources 			= oLPC11xx_gpio_resources,
};

static const BT_RESOURCE oLPC11xx_nvic_resources[] = {
	{
		.ulStart			= BT_CONFIG_ARCH_ARM_NVIC_BASE,
		.ulEnd				= BT_CONFIG_ARCH_ARM_NVIC_BASE + BT_SIZE_4K,
		.ulFlags			= BT_RESOURCE_MEM,
	},
	{
		.ulStart			= 0,
		.ulEnd				= BT_CONFIG_ARCH_ARM_NVIC_TOTAL_IRQS - 1,
		.ulFlags			= BT_RESOURCE_IRQ,
	},
};

static const BT_INTEGRATED_DEVICE oLPC11xx_nvic_device = {
	.name					= "arm,common,nvic",
	.ulTotalResources	   	= BT_ARRAY_SIZE(oLPC11xx_nvic_resources),
	.pResources				= oLPC11xx_nvic_resources,
};

static const BT_RESOURCE oLPC11xx_systick_resources[] = {
	{
		.ulStart 			= 0xE000E010,
		.ulEnd				= 0xE000E01F,
		.ulFlags			= BT_RESOURCE_MEM,
	},
	{
		.ulStart			= 16,
		.ulEnd				= 16,
		.ulFlags			= BT_RESOURCE_IRQ,
	},
};

static const BT_INTEGRATED_DEVICE oLPC11xx_systick_device = {
	.name					= "arm,cortex-mx,systick",
	.ulTotalResources		= BT_ARRAY_SIZE(oLPC11xx_systick_resources),
	.pResources				= oLPC11xx_systick_resources,
};

static BT_u32 lpc11xx_get_cpu_clock_frequency() {
	return 12000000;
}

BT_MACHINE_START(ARM, CORTEX_M0, "LPC Microcontroller Platform")
    .ulSystemClockHz 			= 12000000,
	.pfnGetCpuClockFrequency 	= lpc11xx_get_cpu_clock_frequency,

	.pInterruptController		= &oLPC11xx_nvic_device,

	.pSystemTimer 				= &oLPC11xx_systick_device,

	.pBootLogger				= NULL,
	.ulBootUartID				= 0,
BT_MACHINE_END
