static gboolean esc_read(FILE_T fh, guint8 *buf, int len, int *err, gchar **err_info)
{
int i;
int value;

for(i=0; i<len; i++) {
value=file_getc(fh);
if(value==-1) {

*err=file_error(fh, err_info);
if(*err==0)
*err=WTAP_ERR_SHORT_READ;
return FALSE;
}
if(value==0xff) {

*err=WTAP_ERR_BAD_FILE;
*err_info=g_strdup("eyesdn: No flag character seen in frame");
return FALSE;
}
if(value==0xfe) {

value=file_getc(fh);
if(value==-1) {

*err=file_error(fh, err_info);
if(*err==0)
*err=WTAP_ERR_SHORT_READ;
return FALSE;
}
value+=2;
}
buf[i]=value;
}

return TRUE;
}