static int onenand_verify_oob(struct mtd_info *mtd, const u_char *buf, loff_t to)
{
struct onenand_chip *this = mtd->priv;
u_char *oob_buf = this->oob_buf;
int status, i, readcmd;

readcmd = ONENAND_IS_4KB_PAGE(this) ? ONENAND_CMD_READ : ONENAND_CMD_READOOB;

this->command(mtd, readcmd, to, mtd->oobsize);
onenand_update_bufferram(mtd, to, 0);
status = this->wait(mtd, FL_READING);
if (status)
return status;

this->read_bufferram(mtd, ONENAND_SPARERAM, oob_buf, 0, mtd->oobsize);
for (i = 0; i < mtd->oobsize; i++)
if (buf[i] != 0xFF && buf[i] != oob_buf[i])
return -EBADMSG;

return 0;
}