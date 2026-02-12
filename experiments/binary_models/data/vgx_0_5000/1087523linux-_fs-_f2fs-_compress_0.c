static int lzo_decompress_pages(struct decompress_io_ctx *dic)
{
int ret;

ret = lzo1x_decompress_safe(dic->cbuf->cdata, dic->clen,
dic->rbuf, &dic->rlen);
if (ret != LZO_E_OK) {
printk_ratelimited("%sF2FS-fs (%s): lzo decompress failed, ret:%d\n",
KERN_ERR, F2FS_I_SB(dic->inode)->sb->s_id, ret);
return -EIO;
}

if (dic->rlen != PAGE_SIZE << dic->log_cluster_size) {
printk_ratelimited("%sF2FS-fs (%s): lzo invalid rlen:%zu, "
"expected:%lu\n", KERN_ERR,
F2FS_I_SB(dic->inode)->sb->s_id,
dic->rlen,
PAGE_SIZE << dic->log_cluster_size);
return -EIO;
}
return 0;
}