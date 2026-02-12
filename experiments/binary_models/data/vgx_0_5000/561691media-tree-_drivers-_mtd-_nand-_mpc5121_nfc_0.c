static void mpc5121_nfc_addr_cycle(struct mtd_info *mtd, int column, int page)
{
struct nand_chip *chip = mtd_to_nand(mtd);
u32 pagemask = chip->pagemask;

if (column != -1) {
mpc5121_nfc_send_addr(mtd, column);
if (mtd->writesize > 512)
mpc5121_nfc_send_addr(mtd, column >> 8);
}

if (page != -1) {
do {
mpc5121_nfc_send_addr(mtd, page & 0xFF);
page >>= 8;
pagemask >>= 8;
} while (pagemask);
}
}