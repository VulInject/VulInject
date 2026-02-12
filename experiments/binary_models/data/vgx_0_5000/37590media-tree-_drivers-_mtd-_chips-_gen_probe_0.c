struct mtd_info *mtd_do_chip_probe(struct map_info *map, struct chip_probe *cp)
{
struct mtd_info *mtd = NULL;
struct cfi_private *cfi;


cfi = genprobe_ident_chips(map, cp);

if (!cfi)
return NULL;

map->fldrv_priv = cfi;


mtd = check_cmd_set(map, 1); 
if (!mtd)
mtd = check_cmd_set(map, 0); 

if (mtd) {
if (mtd->size > map->size) {
printk(KERN_WARNING "Reducing visibility of %ldKiB chip to %ldKiB\n",
(unsigned long)mtd->size >> 10,
(unsigned long)map->size >> 10);
mtd->size = map->size;
}
return mtd;
}

printk(KERN_WARNING"gen_probe: No supported Vendor Command Set found\n");

kfree(cfi->cfiq);
kfree(cfi);
map->fldrv_priv = NULL;
return NULL;
}