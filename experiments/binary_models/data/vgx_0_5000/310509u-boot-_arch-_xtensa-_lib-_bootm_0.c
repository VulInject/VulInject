static struct bp_tag *setup_memory_tag(struct bp_tag *params)
{
struct meminfo *mem;

params->id = BP_TAG_MEMORY;
params->size = sizeof(struct meminfo);
mem = (struct meminfo *)params->data;
mem->type = MEMORY_TYPE_CONVENTIONAL;
mem->start = PHYSADDR(gd->ram_base);
mem->end = PHYSADDR(gd->ram_base + gd->ram_size);

printf("   MEMORY:          tag:0x%04x, type:0X%lx, start:0X%lx, end:0X%lx\n",
BP_TAG_MEMORY, mem->type, mem->start, mem->end);

return bp_tag_next(params);
}