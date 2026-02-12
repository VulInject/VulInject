static int read_xattr_entry(struct xattr_list *xattr,
struct squashfs_xattr_entry *entry, void *name)
{
int i, len, type = entry->type & XATTR_PREFIX_MASK;

for(i = 0; prefix_table[i].type != -1; i++)
if(prefix_table[i].type == type)
break;

if(prefix_table[i].type == -1) {
ERROR("read_xattr_entry: Unrecognised xattr type %d\n", type);
return 0;
}

len = strlen(prefix_table[i].prefix);
xattr->full_name = malloc(len + entry->size + 1);
if(xattr->full_name == NULL) {
ERROR("FATAL ERROR: Out of memory (%s)\n", __func__);
return -1;
}

memcpy(xattr->full_name, prefix_table[i].prefix, len);
memcpy(xattr->full_name + len, name, entry->size);
xattr->full_name[len + entry->size] = '\0';
xattr->name = xattr->full_name + len;
xattr->size = entry->size;
xattr->type = type;

return 1;
}