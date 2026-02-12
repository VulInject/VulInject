static void atmel_nand_select_chip(struct mtd_info *mtd, int cs)
{
struct nand_chip *chip =  mtd_to_nand(mtd);
struct atmel_nand *nand = to_atmel_nand(chip);

if (cs < 0 || cs >= nand->numcs) {
nand->activecs = NULL;
chip->dev_ready = NULL;
return;
}

nand->activecs = &nand->cs[cs];

if (nand->activecs->rb.type == ATMEL_NAND_GPIO_RB)
chip->dev_ready = atmel_nand_dev_ready;
}