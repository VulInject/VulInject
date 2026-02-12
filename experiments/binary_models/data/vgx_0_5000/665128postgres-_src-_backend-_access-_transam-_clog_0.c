XidStatus
TransactionIdGetStatus(TransactionId xid, XLogRecPtr *lsn)
{
int			pageno = TransactionIdToPage(xid);
int			byteno = TransactionIdToByte(xid);
int			bshift = TransactionIdToBIndex(xid) * CLOG_BITS_PER_XACT;
int			slotno;
int			lsnindex;
char	   *byteptr;
XidStatus	status;



slotno = SimpleLruReadPage_ReadOnly(XactCtl, pageno, xid);
byteptr = XactCtl->shared->page_buffer[slotno] + byteno;

status = (*byteptr >> bshift) & CLOG_XACT_BITMASK;

lsnindex = GetLSNIndex(slotno, xid);
*lsn = XactCtl->shared->group_lsn[lsnindex];

LWLockRelease(XactSLRULock);

return status;
}