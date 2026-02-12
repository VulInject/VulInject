void
eib_log(char *msg)
{
uint32_t off;
int msglen;
char msgbuf[EIB_MAX_LINE];

if (eib_debug_buf == NULL)
return;

if (eib_log_timestamps) {
msglen = snprintf(msgbuf, EIB_MAX_LINE, "%llx: %s",
(unsigned long long)ddi_get_lbolt64(), msg);
} else {
msglen = snprintf(msgbuf, EIB_MAX_LINE, "%s", msg);
}

if (msglen < 0)
return;
else if (msglen >= EIB_MAX_LINE)
msglen = EIB_MAX_LINE - 1;

mutex_enter(&eib_debug_buf_lock);
if ((eib_debug_buf_ndx == 0) ||
(eib_debug_buf[eib_debug_buf_ndx-1] != '\n')) {
eib_debug_buf[eib_debug_buf_ndx] = '\n';
eib_debug_buf_ndx++;
}

off = eib_debug_buf_ndx;	

eib_debug_buf_ndx += msglen;	
eib_debug_buf[eib_debug_buf_ndx] = 0;	

if (eib_debug_buf_ndx >= (eib_debug_buf_sz - 2 * EIB_MAX_LINE))
eib_debug_buf_ndx = 0;

mutex_exit(&eib_debug_buf_lock);

bcopy(msgbuf, eib_debug_buf+off, msglen);    
}