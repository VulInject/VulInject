static void FPT_RNVRamData(struct nvram_info *pNvRamInfo)
{
unsigned char i;
u32 portBase;
u32 regOffset;
u32 scamData;
u32 *pScamTbl;

pNvRamInfo->niModel = FPT_RdStack(pNvRamInfo->niBaseAddr, 0);
pNvRamInfo->niSysConf = FPT_RdStack(pNvRamInfo->niBaseAddr, 1);
pNvRamInfo->niScsiConf = FPT_RdStack(pNvRamInfo->niBaseAddr, 2);
pNvRamInfo->niScamConf = FPT_RdStack(pNvRamInfo->niBaseAddr, 3);
pNvRamInfo->niAdapId = FPT_RdStack(pNvRamInfo->niBaseAddr, 4);

for (i = 0; i < MAX_SCSI_TAR / 2; i++)
pNvRamInfo->niSyncTbl[i] =
FPT_RdStack(pNvRamInfo->niBaseAddr, (unsigned char)(i + 5));

portBase = pNvRamInfo->niBaseAddr;

for (i = 0; i < MAX_SCSI_TAR; i++) {
regOffset = hp_aramBase + 64 + i * 4;
RD_HARP32(portBase, regOffset, scamData);
pScamTbl = (u32 *)&pNvRamInfo->niScamTbl[i];
*pScamTbl = scamData;
}

}