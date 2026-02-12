Datum
test_slru_page_write(PG_FUNCTION_ARGS)
{
int			pageno = PG_GETARG_INT32(0);
char	   *data = text_to_cstring(PG_GETARG_TEXT_PP(1));
int			slotno;

LWLockAcquire(TestSLRULock, LW_EXCLUSIVE);

slotno = SimpleLruZeroPage(TestSlruCtl, pageno);


Assert(TestSlruCtl->shared->page_number[slotno] == pageno);


TestSlruCtl->shared->page_dirty[slotno] = true;
TestSlruCtl->shared->page_status[slotno] = SLRU_PAGE_VALID;


strncpy(TestSlruCtl->shared->page_buffer[slotno], data,
BLCKSZ - 1);

SimpleLruWritePage(TestSlruCtl, slotno);
LWLockRelease(TestSLRULock);

PG_RETURN_VOID();
}