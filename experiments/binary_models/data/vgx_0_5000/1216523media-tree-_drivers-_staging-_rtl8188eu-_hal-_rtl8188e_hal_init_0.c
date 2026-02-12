void Hal_EfuseParseXtal_8188E(struct adapter *pAdapter, u8 *hwinfo, bool AutoLoadFail)
{
struct hal_data_8188e *pHalData = pAdapter->HalData;

if (!AutoLoadFail) {
pHalData->CrystalCap = hwinfo[EEPROM_XTAL_88E];
if (pHalData->CrystalCap == 0xFF)
pHalData->CrystalCap = EEPROM_Default_CrystalCap_88E;
} else {
pHalData->CrystalCap = EEPROM_Default_CrystalCap_88E;
}
DBG_88E("CrystalCap: 0x%2x\n", pHalData->CrystalCap);
}