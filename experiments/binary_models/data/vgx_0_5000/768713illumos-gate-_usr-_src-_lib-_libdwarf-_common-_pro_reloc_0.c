int
_dwarf_pro_alloc_reloc_slots(Dwarf_P_Debug dbg, int rel_sec_index)
{
unsigned long len = 0;
struct Dwarf_P_Relocation_Block_s *data = 0;
Dwarf_P_Per_Reloc_Sect prel = &dbg->de_reloc_sect[rel_sec_index];
unsigned long slots_in_blk = prel->pr_slots_per_block_to_alloc;
unsigned long rel_rec_size = dbg->de_relocation_record_size;

len = sizeof(struct Dwarf_P_Relocation_Block_s) +
slots_in_blk * rel_rec_size;

data = (struct Dwarf_P_Relocation_Block_s *)
_dwarf_p_get_alloc(dbg, len);
if (!data) {
return DW_DLV_ERROR;
}

if (prel->pr_first_block) {
prel->pr_last_block->rb_next = data;
prel->pr_last_block = data;
prel->pr_block_count += 1;
} else {
prel->pr_first_block = data;
prel->pr_last_block = data;
prel->pr_block_count = 1;
}
data->rb_slots_in_block = slots_in_blk;
data->rb_next_slot_to_use = 0;
data->rb_where_to_add_next =
((char *) data) + sizeof(struct Dwarf_P_Relocation_Block_s);
data->rb_data = data->rb_where_to_add_next;
return DW_DLV_OK;

}