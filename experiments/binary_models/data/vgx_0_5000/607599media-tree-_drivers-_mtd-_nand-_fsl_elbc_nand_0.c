static int fsl_elbc_ooblayout_free(struct mtd_info *mtd, int section,
struct mtd_oob_region *oobregion)
{
struct nand_chip *chip = mtd_to_nand(mtd);
struct fsl_elbc_mtd *priv = nand_get_controller_data(chip);

if (section > chip->ecc.steps)
return -ERANGE;

if (!section) {
oobregion->offset = 0;
if (mtd->writesize > 512)
oobregion->offset++;
oobregion->length = (priv->fmr & FMR_ECCM) ? 7 : 5;
} else {
oobregion->offset = (16 * section) -
((priv->fmr & FMR_ECCM) ? 5 : 7);
if (section < chip->ecc.steps)
oobregion->length = 13;
else
oobregion->length = mtd->oobsize - oobregion->offset;
}

return 0;
}

static const struct mtd_ooblayout_ops fsl_elbc_ooblayout_ops = {
.ecc = fsl_elbc_ooblayout_ecc,
.free = fsl_elbc_ooblayout_free,
};


static u8 bbt_pattern[] = {'B', 'b', 't', '0' };
static u8 mirror_pattern[] = {'1', 't', 'b', 'B' };

static struct nand_bbt_descr bbt_main_descr = {
.options = NAND_BBT_LASTBLOCK | NAND_BBT_CREATE | NAND_BBT_WRITE |
NAND_BBT_2BIT | NAND_BBT_VERSION,
.offs =	11,
.len = 4,
.veroffs = 15,
.maxblocks = 4,
.pattern = bbt_pattern,
};