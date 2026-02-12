static bool
init_condition_met(struct nvbios_init *init, u8 cond)
{
struct nvkm_bios *bios = init->bios;
u16 table = init_condition_table(init);
if (table) {
u32 reg = nvbios_rd32(bios, table + (cond * 12) + 0);
u32 msk = nvbios_rd32(bios, table + (cond * 12) + 4);
u32 val = nvbios_rd32(bios, table + (cond * 12) + 8);
trace("\t[0x%02x] (R[0x%06x] & 0x%08x) == 0x%08x\n",
cond, reg, msk, val);
return (init_rd32(init, reg) & msk) == val;
}
return false;
}