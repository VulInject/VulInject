ulong flash_get_size(FPWV * addr, flash_info_t * info)
{
u16 value;

addr[FLASH_CYCLE1] = (FPWV) 0x00AA00AA;	
addr[FLASH_CYCLE2] = (FPWV) 0x00550055;	
addr[FLASH_CYCLE1] = (FPWV) 0x00900090;	

switch (addr[0] & 0xffff) {
case (u8) SST_MANUFACT:
info->flash_id = FLASH_MAN_SST;
value = addr[1];
break;
default:
printf("Unknown Flash\n");
info->flash_id = FLASH_UNKNOWN;
info->sector_count = 0;
info->size = 0;

*addr = (FPW) 0x00F000F0;
return (0);	
}

switch (value) {
case (u16) SST_ID_xF6401B:
info->flash_id += FLASH_SST6401B;
break;
default:
info->flash_id = FLASH_UNKNOWN;
break;
}

info->sector_count = 0;
info->size = 0;
info->sector_count = CFG_SYS_SST_SECT;
info->size = CFG_SYS_SST_SECT * CFG_SYS_SST_SECTSZ;


*addr = (FPWV) 0x00F000F0;

if (info->sector_count > CONFIG_SYS_MAX_FLASH_SECT) {
printf("** ERROR: sector count %d > max (%d) **\n",
info->sector_count, CONFIG_SYS_MAX_FLASH_SECT);
info->sector_count = CONFIG_SYS_MAX_FLASH_SECT;
}

return (info->size);
}