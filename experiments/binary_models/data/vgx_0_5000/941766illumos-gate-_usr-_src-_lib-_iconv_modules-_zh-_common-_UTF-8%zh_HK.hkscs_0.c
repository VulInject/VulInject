static int utf8_to_hkscs(int unidx, unsigned long hkscscode, char *buf, size_t buflen, int *uconv_num)
{
unsigned long	val;		
char		c1, c2, hkscs_str[3];

if (buflen < 2) {
errno = E2BIG;
return(0);
}

if (unidx < 0) {	
*buf = *(buf+1) = NON_ID_CHAR;


*uconv_num = 1;
} else {
val = hkscscode & 0xffff;
c1 = (char) ((val & 0xff00) >> 8);
c2 = (char) (val & 0xff);

*buf = hkscs_str[0] = c1;
*(buf+1) = hkscs_str[1] = c2;
hkscs_str[2] = '\0';
}

fprintf(stderr, "\t->%x %x<-\n", *buf, *(buf+1));

return(2);
}