static int read_all_xattrs(struct inode *inode, struct page *ipage,
void **base_addr)
{
struct f2fs_xattr_header *header;
nid_t xnid = F2FS_I(inode)->i_xattr_nid;
unsigned int size = VALID_XATTR_BLOCK_SIZE;
unsigned int inline_size = inline_xattr_size(inode);
void *txattr_addr;
int err;

txattr_addr = f2fs_kzalloc(F2FS_I_SB(inode),
inline_size + size + XATTR_PADDING_SIZE, GFP_NOFS);
if (!txattr_addr)
return -ENOMEM;


if (inline_size) {
err = read_inline_xattr(inode, ipage, txattr_addr);
if (err)
goto fail;
}


if (xnid) {
err = read_xattr_block(inode, txattr_addr);
if (err)
goto fail;
}

header = XATTR_HDR(txattr_addr);


if (le32_to_cpu(header->h_magic) != F2FS_XATTR_MAGIC) {
header->h_magic = cpu_to_le32(F2FS_XATTR_MAGIC);
header->h_refcount = cpu_to_le32(1);
}
*base_addr = txattr_addr;
return 0;
fail:
kfree(txattr_addr);
return err;
}