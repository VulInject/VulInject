static void prepare_prdt_table(struct ufs_hba *hba, struct scsi_cmd *pccb)
{
struct utp_transfer_req_desc *req_desc = hba->utrdl;
struct ufshcd_sg_entry *prd_table = hba->ucd_prdt_ptr;
ulong datalen = pccb->datalen;
int table_length;
u8 *buf;
int i;

if (!datalen) {
req_desc->prd_table_length = 0;
return;
}

table_length = DIV_ROUND_UP(pccb->datalen, MAX_PRDT_ENTRY);
buf = pccb->pdata;
i = table_length;
while (--i) {
prepare_prdt_desc(&prd_table[table_length - i - 1], buf,
MAX_PRDT_ENTRY - 1);
buf += MAX_PRDT_ENTRY;
datalen -= MAX_PRDT_ENTRY;
}

prepare_prdt_desc(&prd_table[table_length - i - 1], buf, datalen - 1);

req_desc->prd_table_length = table_length;
}