static int check_erased_page(struct nand_chip *chip, u8 *buf)
{
struct mtd_info *mtd = nand_to_mtd(chip);
u8 *meta = chip->oob_poi + BBM_SIZE;
u8 *ecc = chip->oob_poi + BBM_SIZE + METADATA_SIZE;
const int ecc_size = chip->ecc.bytes;
const int pkt_size = chip->ecc.size;
int i, res, meta_len, bitflips = 0;

for (i = 0; i < chip->ecc.steps; ++i) {
meta_len = i ? 0 : METADATA_SIZE;
res = nand_check_erased_ecc_chunk(buf, pkt_size, ecc, ecc_size,
meta, meta_len,
chip->ecc.strength);
if (res < 0)
mtd->ecc_stats.failed++;

bitflips = max(res, bitflips);
buf += pkt_size;
ecc += ecc_size;
}

return bitflips;
}