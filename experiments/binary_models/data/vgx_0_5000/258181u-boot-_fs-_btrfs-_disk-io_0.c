static int verify_parent_transid(struct extent_io_tree *io_tree,
struct extent_buffer *eb, u64 parent_transid,
int ignore)
{
int ret;

if (!parent_transid || btrfs_header_generation(eb) == parent_transid)
return 0;

if (extent_buffer_uptodate(eb) &&
btrfs_header_generation(eb) == parent_transid) {
ret = 0;
goto out;
}
printk("parent transid verify failed on %llu wanted %llu found %llu\n",
(unsigned long long)eb->start,
(unsigned long long)parent_transid,
(unsigned long long)btrfs_header_generation(eb));
if (ignore) {
eb->flags |= EXTENT_BAD_TRANSID;
printk("Ignoring transid failure\n");
return 0;
}

ret = 1;
out:
clear_extent_buffer_uptodate(eb);
return ret;

}