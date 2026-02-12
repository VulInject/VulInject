static void ql_ihandl(void *dev_id)
{
struct scsi_cmnd *icmd;
struct Scsi_Host *host = dev_id;
struct qlogicfas408_priv *priv = get_priv_by_host(host);
int qbase = priv->qbase;
REG0;

if (!(inb(qbase + 4) & 0x80))	
return;

if (priv->qlcmd == NULL) {	
int i;
i = 16;
while (i-- && inb(qbase + 5));	
return;
}
icmd = priv->qlcmd;
icmd->result = ql_pcmd(icmd);
priv->qlcmd = NULL;

(icmd->scsi_done) (icmd);
}