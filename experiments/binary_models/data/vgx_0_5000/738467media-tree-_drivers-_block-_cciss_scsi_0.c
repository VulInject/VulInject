static int
cciss_scsi_do_inquiry(ctlr_info_t *h, unsigned char *scsi3addr,
unsigned char page, unsigned char *buf,
unsigned char bufsize)
{
int rc;
CommandList_struct *c;
char cdb[6];
ErrorInfo_struct *ei;
unsigned long flags;

spin_lock_irqsave(&h->lock, flags);
c = scsi_cmd_alloc(h);
spin_unlock_irqrestore(&h->lock, flags);

if (c == NULL) {			
printk("cmd_alloc returned NULL!\n");
return -1;
}

ei = c->err_info;

cdb[0] = CISS_INQUIRY;
cdb[1] = (page != 0);
cdb[2] = page;
cdb[3] = 0;
cdb[4] = bufsize;
cdb[5] = 0;
rc = cciss_scsi_do_simple_cmd(h, c, scsi3addr, cdb,
6, buf, bufsize, XFER_READ);

if (rc != 0) return rc; 

if (ei->CommandStatus != 0 &&
ei->CommandStatus != CMD_DATA_UNDERRUN) {
cciss_scsi_interpret_error(h, c);
rc = -1;
}
spin_lock_irqsave(&h->lock, flags);
scsi_cmd_free(h, c);
spin_unlock_irqrestore(&h->lock, flags);
return rc;
}