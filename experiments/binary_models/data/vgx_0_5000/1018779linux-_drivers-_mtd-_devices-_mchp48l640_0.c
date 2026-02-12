static int mchp48l640_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, unsigned char *buf)
{
struct mchp48l640_flash *flash = to_mchp48l640_flash(mtd);
int ret;
size_t wlen = 0;
loff_t woff = from;
size_t ws;
size_t page_sz = flash->caps->page_size;


while (wlen < len) {
ws = min((len - wlen), page_sz);
ret = mchp48l640_read_page(mtd, woff, ws, retlen, &buf[wlen]);
if (ret)
return ret;
wlen += ws;
woff += ws;
}

return 0;
};