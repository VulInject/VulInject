static u32
pll_map_type(struct nvkm_bios *bios, u8 type, u32 *reg, u8 *ver, u8 *len)
{
struct pll_mapping *map;
u8  hdr, cnt;
u32 data;

data = pll_limits_table(bios, ver, &hdr, &cnt, len);
if (data && *ver >= 0x30) {
data += hdr;
while (cnt--) {
if (nvbios_rd08(bios, data + 0) == type) {
*reg = nvbios_rd32(bios, data + 3);
return data;
}
data += *len;
}
return 0x0000;
}

map = pll_map(bios);
while (map && map->reg) {
if (map->type == type && *ver >= 0x20) {
u32 addr = (data += hdr);
*reg = map->reg;
while (cnt--) {
if (nvbios_rd32(bios, data) == map->reg)
return data;
data += *len;
}
return addr;
} else
if (map->type == type) {
*reg = map->reg;
return data + 1;
}
map++;
}

return 0x0000;
}