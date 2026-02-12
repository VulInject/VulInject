static inline int set_breakpoint_8xx(struct arch_hw_breakpoint *brk)
{
unsigned long lctrl1 = LCTRL1_CTE_GT | LCTRL1_CTF_LT | LCTRL1_CRWE_RW |
LCTRL1_CRWF_RW;
unsigned long lctrl2 = LCTRL2_LW0EN | LCTRL2_LW0LADC | LCTRL2_SLW0EN;
unsigned long start_addr = ALIGN_DOWN(brk->address, HW_BREAKPOINT_SIZE);
unsigned long end_addr = ALIGN(brk->address + brk->len, HW_BREAKPOINT_SIZE);

if (start_addr == 0)
lctrl2 |= LCTRL2_LW0LA_F;
else if (end_addr == 0)
lctrl2 |= LCTRL2_LW0LA_E;
else
lctrl2 |= LCTRL2_LW0LA_EandF;

mtspr(SPRN_LCTRL2, 0);

if ((brk->type & HW_BRK_TYPE_RDWR) == 0)
return 0;

if ((brk->type & HW_BRK_TYPE_RDWR) == HW_BRK_TYPE_READ)
lctrl1 |= LCTRL1_CRWE_RO | LCTRL1_CRWF_RO;
if ((brk->type & HW_BRK_TYPE_RDWR) == HW_BRK_TYPE_WRITE)
lctrl1 |= LCTRL1_CRWE_WO | LCTRL1_CRWF_WO;

mtspr(SPRN_CMPE, start_addr - 1);
mtspr(SPRN_CMPF, end_addr);
mtspr(SPRN_LCTRL1, lctrl1);
mtspr(SPRN_LCTRL2, lctrl2);

return 0;
}