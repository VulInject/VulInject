int pm8001_tag_alloc(struct pm8001_hba_info *pm8001_ha, u32 *tag_out)
{
void *bitmap = pm8001_ha->rsvd_tags;
unsigned long flags;
unsigned int tag;

spin_lock_irqsave(&pm8001_ha->bitmap_lock, flags);
tag = find_first_zero_bit(bitmap, PM8001_RESERVE_SLOT);
if (tag >= PM8001_RESERVE_SLOT) {
spin_unlock_irqrestore(&pm8001_ha->bitmap_lock, flags);
return -SAS_QUEUE_FULL;
}
__set_bit(tag, bitmap);
spin_unlock_irqrestore(&pm8001_ha->bitmap_lock, flags);


*tag_out = tag;
return 0;
}