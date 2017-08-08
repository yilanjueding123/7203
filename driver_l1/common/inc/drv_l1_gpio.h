#ifndef __drv_l1_GPIO_H__
#define __drv_l1_GPIO_H__
 
#include "driver_l1.h"
#include "drv_l1_sfr.h"
#include "drv_l1_tools.h"

/*GPIO Register define*/
/* GPIO: 0xC0000000 */
#define GPIO_BASE_ADDR             	0xC0000000
#define EACH_GPIO_DATA_REG_OFFSET   0x00000020 
#define EACH_DIR_REG_OFFSET        	0x00000020
#define EACH_ATTRIB_REG_OFFSET     	0x00000020

#define IOA_DATA_ADDR              		(GPIO_BASE_ADDR+0x00)   /*0xC0000000*/ 
#define IOA_BUFFER_ADDR            		(GPIO_BASE_ADDR+0x04)   /*0xC0000004*/ 
#define IOA_DIR_ADDR               		(GPIO_BASE_ADDR+0x08)   /*0xC0000008*/ 
#define IOA_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0x0C)   /*0xC000000C*/ 
#define IOA_DRV	                        (GPIO_BASE_ADDR+0x10)   /*0xC0000010*/ 
                                                                               
#define IOB_DATA_ADDR              		(GPIO_BASE_ADDR+0x20)   /*0xC0000020*/ 
#define IOB_BUFFER_ADDR            		(GPIO_BASE_ADDR+0x24)   /*0xC0000024*/ 
#define IOB_DIR_ADDR               		(GPIO_BASE_ADDR+0x28)   /*0xC0000028*/ 
#define IOB_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0x2C)   /*0xC000002C*/ 
#define IOB_DRV	                        (GPIO_BASE_ADDR+0x30)   /*0xC0000030*/ 
                                                                               
#define IOC_DATA_ADDR              		(GPIO_BASE_ADDR+0x40)   /*0xC0000040*/ 
#define IOC_BUFFER_ADDR            		(GPIO_BASE_ADDR+0x44)   /*0xC0000044*/ 
#define IOC_DIR_ADDR              	 	(GPIO_BASE_ADDR+0x48)   /*0xC0000048*/ 
#define IOC_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0x4C)   /*0xC000004C*/ 
#define IOC_DRV	                        (GPIO_BASE_ADDR+0x50)   /*0xC0000050*/ 
                                                                               
#define IOD_DATA_ADDR              		(GPIO_BASE_ADDR+0x60)   /*0xC0000060*/ 
#define IOD_BUFFER_ADDR            		(GPIO_BASE_ADDR+0x64)   /*0xC0000064*/ 
#define IOD_DIR_ADDR               		(GPIO_BASE_ADDR+0x68)   /*0xC0000068*/ 
#define IOD_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0x6C)   /*0xC000006C*/ 
#define IOD_DRV	                        (GPIO_BASE_ADDR+0x70)   /*0xC0000070*/ 
                                                                               
#define IOE_DATA_ADDR              		(GPIO_BASE_ADDR+0x80)   /*0xC0000080*/ 
#define IOE_BUFFER_ADDR            		(GPIO_BASE_ADDR+0x84)   /*0xC0000084*/ 
#define IOE_DIR_ADDR               		(GPIO_BASE_ADDR+0x88)   /*0xC0000088*/ 
#define IOE_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0x8C)   /*0xC000008C*/ 
#define IOE_DRV	                        (GPIO_BASE_ADDR+0x90)   /*0xC0000090*/ 
                                                                               
#define IOF_DATA_ADDR              		(GPIO_BASE_ADDR+0xA0)   /*0xC00000A0*/ 
#define IOF_BUFFER_ADDR            		(GPIO_BASE_ADDR+0xA4)   /*0xC00000A4*/ 
#define IOF_DIR_ADDR               		(GPIO_BASE_ADDR+0xA8)   /*0xC00000A8*/ 
#define IOF_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0xAC)   /*0xC00000AC*/ 
#define IOF_DRV	                        (GPIO_BASE_ADDR+0xB0)   /*0xC00000B0*/ 
                                                                               
#define IOG_DATA_ADDR              		(GPIO_BASE_ADDR+0xC0)   /*0xC00000C0*/ 
#define IOG_BUFFER_ADDR            		(GPIO_BASE_ADDR+0xC4)   /*0xC00000C4*/ 
#define IOG_DIR_ADDR               		(GPIO_BASE_ADDR+0xC8)   /*0xC00000C8*/ 
#define IOG_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0xCC)   /*0xC00000CC*/ 
#define IOG_DRV	                        (GPIO_BASE_ADDR+0xD0)   /*0xC00000D0*/ 

#define IOH_DATA_ADDR              		(GPIO_BASE_ADDR+0xE0)   /*0xC00000E0*/ 
#define IOH_BUFFER_ADDR            		(GPIO_BASE_ADDR+0xE4)   /*0xC00000E4*/ 
#define IOH_DIR_ADDR               		(GPIO_BASE_ADDR+0xE8)   /*0xC00000E8*/ 
#define IOH_ATTRIB_ADDR            		(GPIO_BASE_ADDR+0xEC)   /*0xC00000EC*/ 
#define IOH_DRV	                        (GPIO_BASE_ADDR+0xF0)   /*0xC00000F0*/ 


/* Attribution Register High/Low definition */
#define INPUT_NO_RESISTOR       1
#define OUTPUT_UNINVERT_CONTENT 1 
#define INPUT_WITH_RESISTOR     0
#define OUTPUT_INVERT_CONTENT   0


#define GPIO_FAIL               0
#define GPIO_OK                 1

#define EACH_REGISTER_GPIO_NUMS 16

#define LOWEST_BIT_MASK         0x00000001


#define DRV_WriteReg32(addr,data)     ((*(volatile INT32U *)(addr)) = (INT32U)data)
#define DRV_Reg32(addr)               (*(volatile INT32U *)(addr))



/* Bearer type enum */
typedef enum 
{
	GPIO_SET_A=0,
	GPIO_SET_B,
	GPIO_SET_C,
	GPIO_SET_D,
    GPIO_SET_E,
    GPIO_SET_F,
    GPIO_SET_G,
    GPIO_SET_H,
    GPIO_SET_MAX
} GPIO_SET_ENUM;


#ifndef __GPIO_TYPEDEF__
#define __GPIO_TYPEDEF__

typedef enum {
    IO_A0=0,
    IO_A1 ,
    IO_A2 ,
    IO_A3 ,
    IO_A4 ,
    IO_A5 ,
    IO_A6 ,
    IO_A7 ,
    IO_A8 ,
    IO_A9 ,
    IO_A10,
    IO_A11,
    IO_A12,
    IO_A13,
    IO_A14,
    IO_A15,
    IO_B0 ,
    IO_B1 ,
    IO_B2 ,
    IO_B3 ,
    IO_B4 ,
    IO_B5 ,
    IO_B6 ,
    IO_B7 ,
    IO_B8 ,
    IO_B9 ,
    IO_B10,
    IO_B11,
    IO_B12,
    IO_B13,
    IO_B14,
    IO_B15,
    IO_C0 ,
    IO_C1 ,
    IO_C2 ,
    IO_C3 ,
    IO_C4 ,
    IO_C5 ,
    IO_C6 ,
    IO_C7 ,
    IO_C8 ,
    IO_C9 ,
    IO_C10,
    IO_C11,
    IO_C12,
    IO_C13,
    IO_C14,
    IO_C15,
    IO_D0 ,
    IO_D1 ,
    IO_D2 ,
    IO_D3 ,
    IO_D4 ,
    IO_D5 ,
    IO_D6 ,
    IO_D7 ,
    IO_D8 ,
    IO_D9 ,
    IO_D10,
    IO_D11,
    IO_D12,
    IO_D13,
    IO_D14,
    IO_D15,
    IO_E0 ,
    IO_E1 ,
    IO_E2 ,
    IO_E3 ,
    IO_E4 ,
    IO_E5 ,
    IO_E6 ,
    IO_E7 ,
    IO_E8 ,
    IO_E9 ,
    IO_E10,
    IO_E11,
    IO_E12,
    IO_E13,
    IO_E14,
    IO_E15,
    IO_F0 ,
    IO_F1 ,
    IO_F2 ,
    IO_F3 ,
    IO_F4 ,
    IO_F5 ,
    IO_F6 ,
    IO_F7 ,
    IO_F8 ,
    IO_F9 ,
    IO_F10,
    IO_F11,
    IO_F12,
    IO_F13,
    IO_F14,
    IO_F15,
    IO_G0 ,
    IO_G1 ,
    IO_G2 ,
    IO_G3 ,
    IO_G4 ,
    IO_G5 ,
    IO_G6 ,
    IO_G7 ,
    IO_G8 ,
    IO_G9 ,
    IO_G10,
    IO_G11,
    IO_G12,
    IO_G13,
    IO_G14,
    IO_G15,
    IO_H0 ,
    IO_H1 ,
    IO_H2 ,
    IO_H3 ,
    IO_H4 ,
    IO_H5
} GPIO_ENUM;

#endif  //__GPIO_TYPEDEF__


#ifndef _GPIO_MONITOR_DEF_
#define _GPIO_MONITOR_DEF_
typedef struct {
    INT8U KS_OUT74_EN   ;
    INT8U KS_OUT31_EN   ;
    INT8U KS_OUT0_EN    ;
    INT8U KS_EN         ;
    INT8U TS_all_en     ;
    INT8U SEN_EN        ;
    INT8U KEYN_IN2_EN   ;
    INT8U KSH_EN        ;
    INT8U ND_SHARE_EN   ;
    INT8U NAND_EN       ;
    INT8U UART_EN       ;
    INT8U TFTEN         ;
    INT8U TFT_MODE1     ;
    INT8U TFT_MODE0     ;
    INT8U EN_CF         ;
    INT8U EN_MS         ;
    INT8U EN_SD123      ;
    INT8U EN_SD         ;
    INT8U USEEXTB       ;
    INT8U USEEXTA       ;
    INT8U SPI1_EN       ;
    INT8U SPI0_EN       ;
    INT8U CCP_EN2       ;
    INT8U CCP_EN1       ;
    INT8U CCP_EN0       ;
    INT8U KEYC_EN       ;
    INT8U CS3_0_EN_i3   ;
    INT8U CS3_0_EN_i2   ;
    INT8U CS3_0_EN_i1   ;
    INT8U CS3_0_EN_i0   ;
    INT8U XD31_16_EN    ;
    INT8U BKOEB_EN      ;
    INT8U BKUBEB_EN     ;
    INT8U XA24_19EN3    ;
    INT8U XA24_19EN2    ;
    INT8U XA24_19EN1    ;
    INT8U XA24_19EN0    ;
    INT8U SDRAM_CKE_EN  ;
    INT8U SDRAM_CSB_EN  ;
    INT8U XA24_19EN5    ;
    INT8U XA24_19EN4    ;
    INT8U XA14_12_EN2   ;
    INT8U XA14_12_EN1   ;
    INT8U XA14_12_EN0   ;
    INT8U EPPEN         ;
    INT8U MONI_EN       ;
} GPIO_MONITOR;

#endif  //_GPIO_MONITOR_DEF_


#ifndef _GPIO_DRVING_DEF_
#define _GPIO_DRVING_DEF_

typedef enum {
    IOA_DRV_4mA=0x0,
    IOA_DRV_8mA=0x1,
/* IOB Driving Options */
    IOB_DRV_4mA=0x0,
    IOB_DRV_8mA=0x1,
/* IOC Driving Options */    
    IOC_DRV_4mA=0x0,
    IOC_DRV_8mA=0x1,
/* IOD Driving Options */
    IOD_DRV_4mA=0x0,
    IOD_DRV_8mA=0x1,
    IOD_DRV_12mA=0x2,
    IOD_DRV_16mA=0x3,
/* IOE Driving Options */    
    IOE_DRV_4mA=0x0,
    IOE_DRV_8mA=0x1,    
/* IOF Driving Options */
    IOF_DRV_4mA=0x0,
    IOF0_DRV_8mA=0x1,
    IOF1_DRV_8mA=0x1,
    IOF2_DRV_8mA=0x1,
    IOF3_DRV_8mA=0x1,
    IOF4_DRV_8mA=0x1,
    IOF5_DRV_8mA=0x1,
    IOF13_DRV_8mA=0x1,
    IOF14_DRV_8mA=0x1,
    IOF15_DRV_8mA=0x1,
    IOF4_DRV_12mA=0x2,
    IOF4_DRV_16mA=0x3,
/* IOG Driving Options */
    IOG_DRV_4mA=0x0,
    IOG0_DRV_8mA=0x1,
    IOG1_DRV_8mA=0x1,
    IOG2_DRV_8mA=0x1,
    IOG3_DRV_8mA=0x1,
    IOG4_DRV_8mA=0x1,

    IOG5_DRV_8mA=0x1,
    IOG5_DRV_12mA=0x2,
    IOG5_DRV_16mA=0x3,

    IOG6_DRV_8mA=0x1,
    IOG6_DRV_12mA=0x2,
    IOG6_DRV_16mA=0x3,

    IOG7_DRV_8mA=0x1,
    IOG7_DRV_12mA=0x2,
    IOG7_DRV_16mA=0x3,

    IOG8_DRV_8mA=0x1,
    IOG8_DRV_12mA=0x2,
    IOG8_DRV_16mA=0x3,
    
    IOG9_DRV_8mA=0x1,
    IOG9_DRV_12mA=0x2,
    IOG9_DRV_16mA=0x3,    
/* IOH Driving Options */
    IOH_DRV_4mA=0x0,

    IOH0_DRV_8mA=0x1,

    IOH1_DRV_8mA=0x1,
    IOH1_DRV_12mA=0x2,
    IOH1_DRV_16mA=0x3,

    IOH2_DRV_8mA=0x1,
    
    IOH3_DRV_8mA=0x1,

    IOH4_DRV_8mA=0x1,

    IOH5_DRV_8mA=0x1
    
} IO_DRV_LEVEL;


#endif //_GPIO_DRVING_DEF_

#ifndef XD_PIN_ENUM_DEF
#define XD_PIN_ENUM_DEF
    typedef enum
    {
      XD_CS1=0x2,   /* IOF1 */
      XD_CS2=0x4,   /* IOF2 */
      XD_CS3=0x8    /* IOF3 */
    } XD_CS_ENUM;

    typedef enum
    {
      XD_IOC12_15,   
      XD_IOC6_9,   
      XD_IOG5_6_10_11
    } XD_CTRL_PIN_ENUM;

    typedef enum
    {
      XD_DATA_IOB13_8,   
      XD_DATA_IOD5_0,   
      XD_DATA_IOE5_0,
      XD_DATA_IOA13_8
    } XD_DATA0_5_ENUM;

    typedef enum
    {
      XD_DATA_IOB15_14,   
      XD_DATA_IOD7_6,   
      XD_DATA_IOE7_6,
      XD_DATA_IOA15_14 
    } XD_DATA6_7_ENUM;
    
    typedef enum
    {
        ID_NAND,
        ID_NAND1=ID_NAND,
        ID_XD,
        ID_NAND2=ID_XD,
        ID_NULL
    } NAND_XD_ENUM;

    typedef enum {
        XD_ONLY_MODE=0,
        XD_NAND_MODE=1,
        XD_NAND1_NAND2_MODE=2,
        XD_PAD_MODE_MAX,
        XD_PAD_MODE_NULL=0xFF
    } XD_PAD_MODE;    
#endif  //XD_PIN_ENUM_DEF

extern void gpio_init(void);
extern BOOLEAN gpio_read_io(INT32U port);
extern BOOLEAN gpio_write_io(INT32U port, BOOLEAN data);
extern BOOLEAN gpio_init_io(INT32U port, BOOLEAN direction);
extern BOOLEAN gpio_set_port_attribute(INT32U port, BOOLEAN attribute);
extern BOOLEAN gpio_write_all_by_set(INT32U gpio_set_num, INT32U write_data);
extern INT32U gpio_read_all_by_set(INT8U gpio_set_num);
extern BOOLEAN gpio_get_dir(INT32U port);
extern BOOLEAN gpio_drving_init_io(GPIO_ENUM port, IO_DRV_LEVEL gpio_driving_level);
extern void gpio_monitor(GPIO_MONITOR *gpio_monitor);
extern void gpio_drving_init(void);
extern void gpio_drving_uninit(void);
extern void gpio_set_ice_en(BOOLEAN status);

#endif /* __drv_l1_GPIO_H__ */
