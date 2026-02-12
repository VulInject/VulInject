R_API RList* r_fs_partitions(RFS* fs, const char* ptype, ut64 delta) {
r_return_val_if_fail (fs && ptype, NULL);
int i, cur = -1;
for (i = 0; partitions[i].name; i++) {
if (!strcmp (ptype, partitions[i].name)) {
cur = i;
break;
}
}
if (cur != -1) {
RList* list = r_list_newf ((RListFree) r_fs_partition_free);
void* disk = NULL;
if (partitions[i].iterate == grub_parhook) {
struct grub_partition_map* gpt = partitions[i].ptr;
grubfs_bind_io (NULL, 0);
disk = (void*) grubfs_disk (&fs->iob);
if (gpt) {
gpt->iterate (disk,
(void*) partitions[i].iterate, list);
}
grubfs_free (disk);
} else {
{
RFSPartitionIterator iterate = partitions[i].ptr;
iterate (fs, partitions[i].iterate, list);
}
return list;
}
if (R_STR_ISNOTEMPTY (ptype)) {
R_LOG_ERROR ("Unknown partition type '%s'. Use 'mL' command to list them all", ptype);
}
return NULL;
}