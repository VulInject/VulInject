int big5_to_iso(_iconv_st * st, int unidx,
unsigned long cnscode,
char * buf, size_t buflen) {
unsigned long   val;	    

if (buflen < 2) {
st->_errno = E2BIG;
return 0;
}

if (unidx < 0) {	
st->_errno = EILSEQ;
return 0;
} else {
val = cnscode & 0xffff;
*buf = (unsigned char)((val & 0xff00) >> 8);
*(buf+1) = (unsigned char)(val & 0xff);
}

return(2);
}