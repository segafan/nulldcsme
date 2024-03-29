/*
**	naomi_regs.h
*/

#pragma once
#if defined(BUILD_NAOMI	) || defined(BUILD_ATOMISWAVE)




enum
{
	NAOMI_ROM_OFFSETH_addr		= 0x5f7000,
	NAOMI_ROM_OFFSETL_addr		= 0x5f7004,
	NAOMI_ROM_DATA_addr			= 0x5f7008,
	NAOMI_DMA_OFFSETH_addr		= 0x5f700C,
	NAOMI_DMA_OFFSETL_addr		= 0x5f7010,
	NAOMI_DMA_COUNT_addr		= 0x5f7014,
	NAOMI_BOARDID_WRITE_addr	= 0x5F7078,
	NAOMI_BOARDID_READ_addr		= 0x5F707C,
	NAOMI_COMM_OFFSET_addr		= 0x5F7050,
	NAOMI_COMM_DATA_addr		= 0x5F7054,
};



extern u32 NAOMI_ROM_OFFSETH;
extern u32 NAOMI_ROM_OFFSETL;
extern u32 NAOMI_ROM_DATA;
extern u32 NAOMI_DMA_OFFSETH;
extern u32 NAOMI_DMA_OFFSETL;
extern u32 NAOMI_DMA_COUNT;
extern u32 NAOMI_BOARDID_WRITE;
extern u32 NAOMI_BOARDID_READ;
extern u32 NAOMI_COMM_OFFSET;
extern u32 NAOMI_COMM_DATA;



#endif