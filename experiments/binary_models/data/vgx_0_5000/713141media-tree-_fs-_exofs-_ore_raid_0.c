void _ore_add_sg_seg(struct ore_per_dev_state *per_dev, unsigned cur_len,
bool not_last)
{
struct osd_sg_entry *sge;

ORE_DBGMSG("dev=%d cur_len=0x%x not_last=%d cur_sg=%d "
"offset=0x%llx length=0x%x last_sgs_total=0x%x\n",
per_dev->dev, cur_len, not_last, per_dev->cur_sg,
_LLU(per_dev->offset), per_dev->length,
per_dev->last_sgs_total);

if (!per_dev->cur_sg) {
sge = per_dev->sglist;


if (per_dev->length) {
++per_dev->cur_sg;
sge->offset = per_dev->offset;
sge->len = per_dev->length;
} else {

per_dev->offset += cur_len;
return;
}
} else {

sge = &per_dev->sglist[per_dev->cur_sg - 1];
sge->len = per_dev->length - per_dev->last_sgs_total;
}

if (not_last) {

struct osd_sg_entry *next_sge = sge + 1;

++per_dev->cur_sg;
next_sge->offset = sge->offset + sge->len + cur_len;

per_dev->last_sgs_total = per_dev->length;
next_sge->len = 0;
} else if (!sge->len) {

--per_dev->cur_sg;
}
}