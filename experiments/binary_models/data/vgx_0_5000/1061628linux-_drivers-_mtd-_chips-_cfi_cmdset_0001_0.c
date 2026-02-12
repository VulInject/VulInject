static int do_point_onechip (struct map_info *map, struct flchip *chip, loff_t adr, size_t len)
{
unsigned long cmd_addr;
struct cfi_private *cfi = map->fldrv_priv;
int ret;

adr += chip->start;


cmd_addr = adr & ~(map_bankwidth(map)-1);

mutex_lock(&chip->mutex);

ret = get_chip(map, chip, cmd_addr, FL_POINT);

if (!ret) {
if (chip->state != FL_POINT && chip->state != FL_READY)
map_write(map, CMD(0xff), cmd_addr);

chip->state = FL_POINT;
chip->ref_point_counter++;
}
mutex_unlock(&chip->mutex);

return ret;
}