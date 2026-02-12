size_t
ucstooem(char *oem, const smb_wchar_t *ucs, size_t nbytes, uint32_t cpid)
{
oempage_t	*ucspage;
uint32_t	count = 0;
smb_wchar_t	oemchar;

if (ucs == NULL || oem == NULL)
return (0);

if ((ucspage = oem_get_ucspage(cpid)) == NULL)
return (0);

while (nbytes != 0 && (oemchar = ucspage->value[*ucs]) != 0) {
if (oemchar & 0xff00 && nbytes >= MTS_MB_CHAR_MAX) {
*oem++ = oemchar >> 8;
*oem++ = (char)oemchar;
nbytes -= 2;
} else if (nbytes > 1) {
*oem++ = (char)oemchar;
nbytes--;
} else {
break;
}

count++;
ucs++;
}

*oem = '\0';
return (count);
}