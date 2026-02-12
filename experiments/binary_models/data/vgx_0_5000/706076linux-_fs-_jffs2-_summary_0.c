int jffs2_sum_add_dirent_mem(struct jffs2_summary *s, struct jffs2_raw_dirent *rd,
uint32_t ofs)
{
struct jffs2_sum_dirent_mem *temp =
kmalloc(sizeof(struct jffs2_sum_dirent_mem) + rd->nsize, GFP_KERNEL);

if (!temp)
return -ENOMEM;

temp->nodetype = rd->nodetype;
temp->totlen = rd->totlen;
temp->offset = cpu_to_je32(ofs);	
temp->pino = rd->pino;
temp->version = rd->version;
temp->ino = rd->ino;
temp->nsize = rd->nsize;
temp->type = rd->type;
temp->next = NULL;

memcpy(temp->name, rd->name, rd->nsize);

return jffs2_sum_add_mem(s, (union jffs2_sum_mem *)temp);
}