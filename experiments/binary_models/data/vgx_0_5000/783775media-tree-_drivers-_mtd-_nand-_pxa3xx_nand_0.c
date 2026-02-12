static int pxa3xx_ooblayout_free(struct mtd_info *mtd, int section,
struct mtd_oob_region *oobregion)
{
struct nand_chip *chip = mtd_to_nand(mtd);
struct pxa3xx_nand_host *host = nand_get_controller_data(chip);
struct pxa3xx_nand_info *info = host->info_data;
int nchunks = mtd->writesize / info->chunk_size;

if (section >= nchunks)
return -ERANGE;

if (!info->spare_size)
return 0;

oobregion->offset = section * (info->ecc_size + info->spare_size);
oobregion->length = info->spare_size;
if (!section) {

if (mtd->writesize == 4096 && info->chunk_size == 2048) {
oobregion->offset += 6;
oobregion->length -= 6;
} else {
oobregion->offset += 2;
oobregion->length -= 2;
}
}

return 0;
}