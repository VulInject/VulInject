static ssize_t sfi_table_show(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr, char *buf,
loff_t offset, size_t count)
{
struct sfi_table_attr *tbl_attr =
container_of(bin_attr, struct sfi_table_attr, attr);
struct sfi_table_header *th = NULL;
struct sfi_table_key key;
ssize_t cnt;

key.sig = tbl_attr->name;
key.oem_id = NULL;
key.oem_table_id = NULL;

if (strncmp(SFI_SIG_SYST, tbl_attr->name, SFI_SIGNATURE_SIZE)) {
th = sfi_get_table(&key);
if (!th)
return 0;

cnt =  memory_read_from_buffer(buf, count, &offset,
th, th->len);
sfi_put_table(th);
} else
cnt =  memory_read_from_buffer(buf, count, &offset,
syst_va, syst_va->header.len);

return cnt;
}