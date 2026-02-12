df_reorganize_refs (struct df_ref_info *ref_info)
{
unsigned int m = ref_info->regs_inited;
unsigned int regno;
unsigned int offset = 0;
unsigned int size = 0;

if (ref_info->refs_organized)
return;

if (ref_info->refs_size < ref_info->bitmap_size)
{  
int new_size = ref_info->bitmap_size + ref_info->bitmap_size / 4;
df_grow_ref_info (ref_info, new_size);
}

for (regno = 0; regno < m; regno++)
{
struct df_reg_info *reg_info = ref_info->regs[regno];
int count = 0;
if (reg_info)
{
struct df_ref *ref = reg_info->reg_chain;
reg_info->begin = offset;
while (ref) 
{
ref_info->refs[offset] = ref;
DF_REF_ID (ref) = offset++;
ref = DF_REF_NEXT_REG (ref);
count++;
size++;
}
reg_info->n_refs = count;
}
}


ref_info->bitmap_size = size;
ref_info->refs_organized = true;
ref_info->add_refs_inline = true;
}