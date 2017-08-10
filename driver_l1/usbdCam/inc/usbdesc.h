/*----------------------------------------------------------------------------
 *      U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 *      Name:    USBDESC.H
 *      Purpose: USB Descriptors Definitions
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This file is part of the uVision/ARM development tools.
 *      This software may only be used under the terms of a valid, current,
 *      end user licence from KEIL for a compatible version of KEIL software
 *      development tools. Nothing else gives you the right to use it.
 *
 *      Copyright (c) 2005-2007 Keil Software.
 *---------------------------------------------------------------------------*/

#ifndef __USBDESC_H__
#define __USBDESC_H__

#define WBVAL(x) ((x) & 0xFF),(((x) >> 8) & 0xFF)
#define B3VAL(x) (x & 0xFF),((x >> 8) & 0xFF),((x >> 16) & 0xFF)
#define DBVAL(x) ((x) & 0xFF),(((x) >> 8) & 0xFF),(((x) >> 16) & 0xFF),(((x) >> 24) & 0xFF)

#define USB_DEVICE_DESC_SIZE        (sizeof(USB_DEVICE_DESCRIPTOR))
#define USB_CONFIGUARTION_DESC_SIZE (sizeof(USB_CONFIGURATION_DESCRIPTOR))
#define USB_INTERFACE_DESC_SIZE     (sizeof(USB_INTERFACE_DESCRIPTOR))
#define USB_ENDPOINT_DESC_SIZE      (sizeof(USB_ENDPOINT_DESCRIPTOR))

#define STILL_IMAGE_SUPPORT 1

#define CONFIG_ISO_IN_MAX_PACKET_SIZE \
        USB_CONFIGUARTION_DESC_SIZE + UVC_INTERFACE_ASSOCIATION_DESC_SIZE + USB_INTERFACE_DESC_SIZE + UVC_VC_INTERFACE_HEADER_DESC_SIZE(1) + \
	    UVC_CAMERA_TERMINAL_DESC_SIZE(2) + UVC_OUTPUT_TERMINAL_DESC_SIZE(0) + UVC_SELECTOR_UNIT_DESC_SIZE(1) + UVC_PROCESSING_UNIT_DESC_SIZE(2) + \
	    USB_ENDPOINT_DESC_SIZE + UVC_VC_ENDPOINT_DESC_SIZE + USB_INTERFACE_DESC_SIZE + UVC_VS_INTERFACE_INPUT_HEADER_DESC_SIZE(1,1) + 0x0B + \
	    0x26 + STILL_IMAGE_SUPPORT*0x0A + STILL_IMAGE_SUPPORT*0x06 + USB_INTERFACE_DESC_SIZE + 4

//extern const BYTE USB_DeviceDescriptor[];
//extern const BYTE USB_ConfigDescriptor[];
//extern const BYTE USB_StringDescriptor[][0x26];
void DataPointer(unsigned int DescriptorType);
unsigned int Get_Descriptor_Length(unsigned int DescriptorType);


#endif  /* __USBDESC_H__ */
