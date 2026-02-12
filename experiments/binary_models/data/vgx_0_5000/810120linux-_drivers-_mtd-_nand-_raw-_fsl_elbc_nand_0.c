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