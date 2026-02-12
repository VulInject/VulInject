int board_early_init_r(void)
{
const unsigned int flashbase = CFG_SYS_FLASH_BASE;
int flash_esel = find_tlb_idx((void *)flashbase, 1);



flush_dcache();
invalidate_icache();
if (flash_esel == -1) {

puts("Error: Could not find TLB for FLASH BASE\n");
flash_esel = 2;	
} else {

disable_tlb(flash_esel);
}

set_tlb(1, flashbase, CFG_SYS_FLASH_BASE_PHYS,
MAS3_SX|MAS3_SW|MAS3_SR, MAS2_I|MAS2_G,
0, flash_esel, BOOKE_PAGESZ_256M, 1);


if (adjust_vdd(0))
printf("Warning: Adjusting core voltage failed.\n");
return 0;
}