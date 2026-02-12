int jffs2_sum_add_xattr_mem(struct jffs2_summary *s, struct jffs2_raw_xattr *rx, uint32_t ofs)
{
struct jffs2_sum_xattr_mem *temp;

temp = kmalloc(sizeof(struct jffs2_sum_xattr_mem), GFP_KERNEL);
if (!temp)
return -ENOMEM;

temp->nodetype = rx->nodetype;
temp->xid = rx->xid;
temp->version = rx->version;
temp->offset = cpu_to_je32(ofs);
temp->totlen = rx->totlen;
temp->next = NULL;

return jffs2_sum_add_mem(s, (union jffs2_sum_mem *)temp);
}