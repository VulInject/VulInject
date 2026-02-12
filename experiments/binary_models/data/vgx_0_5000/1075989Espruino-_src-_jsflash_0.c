static bool jsfGetNextFileHeader(uint32_t *addr, JsfFileHeader *header, jsfGetNextFileHeaderType type) {
assert(addr && header);
uint32_t oldAddr = *addr;
*addr = 0;

uint32_t newAddr = oldAddr + jsfGetFileSize(header) + (uint32_t)sizeof(JsfFileHeader);

newAddr = jsfAlignAddress(newAddr);

if (newAddr<oldAddr) return 0; 
if (newAddr+sizeof(JsfFileHeader) > jsfGetBankEndAddress(oldAddr)) return 0; 
*addr = newAddr;
bool valid = jsfGetFileHeader(newAddr, header, !(type&GNFH_READ_ONLY_FILENAME_START));
if ((type&GNFH_GET_ALL) && !valid) {

newAddr = jsfGetAddressOfNextPage(newAddr);
*addr = newAddr;
if (!newAddr) return false; 
valid = jsfGetFileHeader(newAddr, header, !(type&GNFH_READ_ONLY_FILENAME_START));

}
return valid;
}