/*
 * Project Name: sync_slave_fifo_5bit.cyfx
 * Time : 06/15/2012 17:03:15
 * Device Type: FX3
 * Project Type: GPIF2
 *
 *
 *
 * This file need to be included only once in the firmware
 * This file is generated by Gpif2 designer tool version - 1.0.715.0
 * 
 */

#ifndef _INCLUDED_CYFXGPIF_SYNCSF_
#define _INCLUDED_CYFXGPIF_SYNCSF_
#include "cyu3types.h"
#include "cyu3gpif.h"
#include "cyfxslfifosync.h"

/* Summary
   Number of states in the state machine
 */
#define CY_NUMBER_OF_STATES 8

/* Summary
   Mapping of user defined state names to state indices
 */
#define SYNC_SLAVE_FIFO_5BIT_RESET 0x0
#define SYNC_SLAVE_FIFO_5BIT_IDLE 0x1
#define SYNC_SLAVE_FIFO_5BIT_ADDR_SETUP 0x2
#define SYNC_SLAVE_FIFO_5BIT_READ 0x3
#define SYNC_SLAVE_FIFO_5BIT_ZLP 0x4
#define SYNC_SLAVE_FIFO_5BIT_SHORT_PKT 0x5
#define SYNC_SLAVE_FIFO_5BIT_WRITE 0x6
#define SYNC_SLAVE_FIFO_5BIT_EPSWITCH_ZLP 0x7


/* Summary
   Initial value of early outputs from the state machine.
 */
#define SYNC_SLAVE_FIFO_5BIT_ALPHA_RESET 0x8


/* Summary
   Transition function values used in the state machine.
 */
uint16_t Sync_Slave_Fifo_5Bit_CyFxGpifTransition[]  = {
    0x0000, 0x2222, 0x8080, 0x8888, 0x7777, 0x5555, 0x7F7F, 0x1111
};

/* Summary
   Table containing the transition information for various states. 
   This table has to be stored in the WAVEFORM Registers.
   This array consists of non-replicated waveform descriptors and acts as a 
   waveform table. 
 */
CyU3PGpifWaveData Sync_Slave_Fifo_5Bit_CyFxGpifWavedata[]  = {
    {{0x1E086001,0x0000C304,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x4E704303,0x00000200,0x80000000}},
    {{0x4E704303,0x00000200,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x6E002705,0x20000200,0xC0100000},{0x1E086001,0x0000C304,0x80000000}},
    {{0x00000000,0x00000000,0x00000000},{0x00000000,0x00000000,0x00000000}},
    {{0x5E738704,0x00000200,0xC0100000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x5E738704,0x00000200,0xC0100000}},
    {{0x3E706002,0x800300C2,0xC0000000},{0x00000000,0x00000000,0x00000000}},
    {{0x5E738707,0x00000200,0xC0100000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x5E738707,0x00000200,0xC0100000}},
    {{0x3E70E106,0x2002030E,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x3E70E106,0x2002030E,0x80000000}},
    {{0x6E002705,0x20000200,0xC0100000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x6E002705,0x20000200,0xC0100000}}
};

/* Summary
   Table that maps state indices to the descriptor table indices.
 */
uint8_t Sync_Slave_Fifo_5Bit_CyFxGpifWavedataPosition[]  = {
    0,1,2,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,5,6,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,7,4,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,8,9,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,10,11,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,12,13,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,4,4,0,0,0,3,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
    0,4,4,0,0,0,3,0
};

/* Summary
   GPIF II configuration register values.
 */
uint32_t Sync_Slave_Fifo_5Bit_CyFxGpifRegValue[]  = {
    0x80000380,  /*  CY_U3P_PIB_GPIF_CONFIG */
#if (CY_FX_SLFIFO_GPIF_16_32BIT_CONF_SELECT == 0)
    0x00001107,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG */
#else
    0x0000110F,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG */
#endif
    0x01060703,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG2 */
    0x00000044,  /*  CY_U3P_PIB_GPIF_AD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATUS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INTR */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INTR_MASK */
    0x00000082,  /*  CY_U3P_PIB_GPIF_SERIAL_IN_CONFIG */
    0x00000782,  /*  CY_U3P_PIB_GPIF_SERIAL_OUT_CONFIG */
    0x00000500,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DIRECTION */
    0x0000FFCF,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DEFAULT */
    0x000000FF,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_POLARITY */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_TOGGLE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000018,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000018,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000006,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_LIMIT */
    0x0000010A,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_CONFIG */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_LIMIT */
    0x0000010A,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_CTRL */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x80010400,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010401,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010402,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010403,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_LAMBDA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ALPHA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_BETA_STAT */
    0x00080000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_CTRL_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH_TIMEOUT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_DATA */
    0xFFFFFFF1  /*  CY_U3P_PIB_GPIF_BETA_DEASSERT */
};

/* Summary
   This structure holds all the configuration inputs for the GPIF II. 
 */
const CyU3PGpifConfig_t Sync_Slave_Fifo_5Bit_CyFxGpifConfig  = {
    (uint16_t)(sizeof(Sync_Slave_Fifo_5Bit_CyFxGpifWavedataPosition)/sizeof(uint8_t)),
    Sync_Slave_Fifo_5Bit_CyFxGpifWavedata,
    Sync_Slave_Fifo_5Bit_CyFxGpifWavedataPosition,
    (uint16_t)(sizeof(Sync_Slave_Fifo_5Bit_CyFxGpifTransition)/sizeof(uint16_t)),
    Sync_Slave_Fifo_5Bit_CyFxGpifTransition,
    (uint16_t)(sizeof(Sync_Slave_Fifo_5Bit_CyFxGpifRegValue)/sizeof(uint32_t)),
    Sync_Slave_Fifo_5Bit_CyFxGpifRegValue
};

#endif   /* _INCLUDED_CYFXGPIF_SYNCSF_ */
