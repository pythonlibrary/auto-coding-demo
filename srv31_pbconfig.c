#include "uds.h"

static uint8_t Erase_Flash_Start(void);
static uint8_t Check_CRC_Start(void);
static uint8_t Get_CRC_Result(void);
static uint8_t Check_Dependencies_Start(void);
static uint8_t Check_Dependencies_Stop(void);



const UDS_Routine_Ctrl_T UDS_RountineControl_Services[] =
{
        { 0xFF00,         (UDS_Routine_Ctrl_Func_T)Erase_Flash_Start,         (UDS_Routine_Ctrl_Func_T)NULL,   (UDS_Routine_Ctrl_Func_T)NULL,   0x01},
        { 0xDF00,         (UDS_Routine_Ctrl_Func_T)Check_CRC_Start,         (UDS_Routine_Ctrl_Func_T)NULL,   (UDS_Routine_Ctrl_Func_T)Get_CRC_Result,   0x00},
        { 0xFF01,         (UDS_Routine_Ctrl_Func_T)Check_Dependencies_Start,         (UDS_Routine_Ctrl_Func_T)Check_Dependencies_Stop,   (UDS_Routine_Ctrl_Func_T)NULL,   0x01},
    };

/*!
 * The size of the rountine control table, it will be updated automatically, no need to change this.
 */
const uint16_t UDS_RountineControl_Services_Size = sizeof(UDS_RountineControl_Services)/sizeof(UDS_Routine_Ctrl_T);


static uint8_t Erase_Flash_Start(void)
{
    uint8_t status;
    /*!!!!! User need to complete this function */

    return status;
}



static uint8_t Check_CRC_Start(void)
{
    uint8_t status;
    /*!!!!! User need to complete this function */

    return status;
}


static uint8_t Get_CRC_Result(void)
{
    uint8_t status;
    /*!!!!! User need to complete this function */

    return status;
}

static uint8_t Check_Dependencies_Start(void)
{
    uint8_t status;
    /*!!!!! User need to complete this function */

    return status;
}

static uint8_t Check_Dependencies_Stop(void)
{
    uint8_t status;
    /*!!!!! User need to complete this function */

    return status;
}


