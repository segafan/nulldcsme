#pragma once
#include "common.h"
Disc* mds_parse(wchar* fname);
void FASTCALL mds_DriveReadSector(u8 * buff,u32 StartSector,u32 SectorCount,u32 secsz);
void mds_DriveGetTocInfo(TocInfo* toc,DiskArea area);
u32 FASTCALL mds_DriveGetDiscType();
bool mds_init(wchar* file);
void mds_term();
void mds_GetSessionsInfo(SessionInfo* sessions);