struct bufarea *
getfilentry(uint32_t block, int len)
{
struct bufarea *bp;
struct file_entry *fp;
int err;

if (len > fsbsize) {
(void) printf(gettext("File entry at %x is too long "
"(%d bytes)\n"), block, len);
len = fsbsize;
}
bp = getdatablk((daddr_t)(block + part_start), fsbsize);
if (bp->b_errs) {
bp->b_flags &= ~B_INUSE;
return (NULL);
}

fp = (struct file_entry *)bp->b_un.b_buf;
err = verifytag(&fp->fe_tag, block, &fp->fe_tag, UD_FILE_ENTRY);
if (err) {
(void) printf(gettext("Tag error %s or bad file entry, "
"tag=%d\n"), tagerrs[err], fp->fe_tag.tag_id);
bp->b_flags &= ~B_INUSE;
return (NULL);
}
return (bp);
}