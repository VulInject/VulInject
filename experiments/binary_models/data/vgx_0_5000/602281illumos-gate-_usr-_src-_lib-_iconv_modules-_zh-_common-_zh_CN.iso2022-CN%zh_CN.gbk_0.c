int binsearch_big5_gbk(unsigned int big5code);
int flush_buf(_iconv_st * st, char ** outbuf, size_t * outbytesleft);

int flush_buf(_iconv_st * st, char ** outbuf, size_t * outbytesleft) {
if (!st->_bufcont)
return 0;
if (st->_bufcont > *outbytesleft) {
st->_errno = E2BIG;
return -1;
}
if (st->_istate != IN) {
st->_errno = EILSEQ;
return -1;
}
strncpy(st->_buf, *outbuf, st->_bufcont);
(*outbuf)+=(st->_bufcont);
(*outbytesleft)-=(st->_bufcont);
st->_bufcont = 0;
return st->_bufcont;
}