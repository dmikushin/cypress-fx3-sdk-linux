##
## Copyright Cypress Semiconductor Corporation, 2008-2010,
## All Rights Reserved
## UNPUBLISHED, LICENSED SOFTWARE.
##
## CONFIDENTIAL AND PROPRIETARY INFORMATION
## WHICH IS THE PROPERTY OF CYPRESS.
##
## Use of this file is governed
## by the license agreement included in the file
##
##	<install>/license/license.txt
##
## where <install> is the Cypress software
## installation root directory path.
##

###
### GNU toolchain Firmware configuration
###

# Tools
CC	= arm-none-eabi-gcc
LD	= arm-none-eabi-ld


# Arguments
ASMFLAGS = -Wall -c -mcpu=arm926ej-s -mthumb-interwork
CCFLAGS += -Wall -mcpu=arm926ej-s -mthumb-interwork

ifeq ($(CYDEVICE), CYUSB3011)
    LDFLAGS += -T cyfx3_256k.ld  -d --gc-sections \
	       --no-wchar-size-warning -Map $(MODULE).map
else
    LDFLAGS += -T cyfx3.ld  -d --gc-sections \
	       --no-wchar-size-warning -Map $(MODULE).map
endif

LDLIBS  += \
	"$$ARMGCC_INSTALL_PATH"/arm-none-eabi/lib/libc.a	\
	"$$ARMGCC_INSTALL_PATH"/lib/gcc/arm-none-eabi/$(ARMGCC_VERSION)/libgcc.a

EXEEXT = elf

# Command Shortcuts
COMPILE		= $(CC) $(CCFLAGS) -c -o $@ $< 
ASSEMBLE	= $(CC) $(ASMFLAGS) -o $@ $<
LINK		= $(LD) $+ $(LDFLAGS) -o $@

#[]
