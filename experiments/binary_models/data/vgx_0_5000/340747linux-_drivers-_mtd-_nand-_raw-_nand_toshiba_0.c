static int toshiba_nand_benand_eccstatus(struct nand_chip *chip)
{
struct mtd_info *mtd = nand_to_mtd(chip);
int ret;
unsigned int max_bitflips = 0;
u8 status, ecc_status[TOSHIBA_NAND_MAX_ECC_STEPS];


ret = toshiba_nand_benand_read_eccstatus_op(chip, ecc_status);
if (!ret) {
unsigned int i, bitflips = 0;

for (i = 0; i < chip->ecc.steps; i++) {
bitflips = ecc_status[i] & TOSHIBA_NAND_ECC_STATUS_MASK;
if (bitflips == TOSHIBA_NAND_ECC_STATUS_UNCORR) {
mtd->ecc_stats.failed++;
} else {
mtd->ecc_stats.corrected += bitflips;
max_bitflips = max(max_bitflips, bitflips);
}
}

return max_bitflips;
}


ret = nand_status_op(chip, &status);
if (ret)
return ret;

if (status & NAND_STATUS_FAIL) {

mtd->ecc_stats.failed++;
} else if (status & TOSHIBA_NAND_STATUS_REWRITE_RECOMMENDED) {

max_bitflips = mtd->bitflip_threshold;
mtd->ecc_stats.corrected += max_bitflips;
}

return max_bitflips;
}