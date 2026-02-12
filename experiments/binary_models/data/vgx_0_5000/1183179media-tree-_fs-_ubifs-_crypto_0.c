int ubifs_decrypt(const struct inode *inode, struct ubifs_data_node *dn,
unsigned int *out_len, int block)
{
struct ubifs_info *c = inode->i_sb->s_fs_info;
int err;
unsigned int clen = le16_to_cpu(dn->compr_size);
unsigned int dlen = *out_len;

if (clen <= 0 || clen > UBIFS_BLOCK_SIZE || clen > dlen) {
ubifs_err(c, "bad compr_size: %i", clen);
return -EINVAL;
}

ubifs_assert(dlen <= UBIFS_BLOCK_SIZE);
err = fscrypt_decrypt_page(inode, virt_to_page(&dn->data), dlen,
offset_in_page(&dn->data), block);
if (err) {
ubifs_err(c, "fscrypt_decrypt_page failed: %i", err);
return err;
}
*out_len = clen;

return 0;
}

const struct fscrypt_operations ubifs_crypt_operations = {
.flags			= FS_CFLG_OWN_PAGES,
.key_prefix		= "ubifs:",
.get_context		= ubifs_crypt_get_context,
.set_context		= ubifs_crypt_set_context,
.is_encrypted		= __ubifs_crypt_is_encrypted,
.empty_dir		= ubifs_crypt_empty_dir,
.max_namelen		= ubifs_crypt_max_namelen,
};