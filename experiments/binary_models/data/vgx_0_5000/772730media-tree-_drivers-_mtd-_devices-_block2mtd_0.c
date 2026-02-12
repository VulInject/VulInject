static int block2mtd_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
{
struct block2mtd_dev *dev = mtd->priv;
struct page *page;
int index = from >> PAGE_SHIFT;
int offset = from & (PAGE_SIZE-1);
int cpylen;

while (len) {
if ((offset + len) > PAGE_SIZE)
cpylen = PAGE_SIZE - offset;	
else
cpylen = len;	
len = len - cpylen;

page = page_read(dev->blkdev->bd_inode->i_mapping, index);
if (IS_ERR(page))
return PTR_ERR(page);

memcpy(buf, page_address(page) + offset, cpylen);
put_page(page);

if (retlen)
*retlen += cpylen;
buf += cpylen;
offset = 0;
index++;
}
return 0;
}