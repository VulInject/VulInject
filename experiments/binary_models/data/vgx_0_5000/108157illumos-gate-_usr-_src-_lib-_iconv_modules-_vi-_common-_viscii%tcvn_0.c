size_t
_icv_iconv(_iconv_st *st, char **inbuf, size_t *inbytesleft,
char **outbuf, size_t *outbytesleft)
{
int     unconv = 0;
fprintf(stderr, "==========     iconv(): viscii -->tcvn   ==========\n");
if (st == NULL) {
errno = EBADF;
return ((size_t) -1);
}

if (inbuf == NULL || *inbuf == NULL) { 
st->_errno = 0;
return ((size_t) 0);
}

st->_errno = 0;     
errno = 0;          


while (*inbytesleft > 0 && *outbytesleft > 0) {
unsigned char ch = 0;

viscii_2_tcvn((unsigned char*)*inbuf, &ch);
if (**inbuf != 0x0 && ch == 0) {
unconv++;
ch = NON_ID_CHAR;
}

**outbuf = ch;
(*outbuf) += 1;
(*outbytesleft) -= 1;
(*inbuf)++;
(*inbytesleft)--;

}

if ( *inbytesleft > 0 && *outbytesleft <= 0 ) {
errno = E2BIG;
return ((size_t)-1);
}

return ((size_t)unconv);


}