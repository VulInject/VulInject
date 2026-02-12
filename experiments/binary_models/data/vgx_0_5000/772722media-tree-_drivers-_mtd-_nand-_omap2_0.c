static int omap_ooblayout_ecc(struct mtd_info *mtd, int section,
struct mtd_oob_region *oobregion)
{
struct omap_nand_info *info = mtd_to_omap(mtd);
struct nand_chip *chip = &info->nand;
int off = BADBLOCK_MARKER_LENGTH;

if (info->ecc_opt == OMAP_ECC_HAM1_CODE_HW &&
!(chip->options & NAND_BUSWIDTH_16))
off = 1;

if (section)
return -ERANGE;

oobregion->offset = off;
oobregion->length = chip->ecc.total;

return 0;
}