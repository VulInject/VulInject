l_uint8 *
decodeAscii85WithComp(const char  *instr,
size_t       insize,
size_t      *poutsize)
{
size_t    size1;
l_uint8  *data1, *outdata;

if (!poutsize)
return (l_uint8 *)ERROR_PTR("&outsize not defined", __func__, NULL);
*poutsize = 0;
if (!instr)
return (l_uint8 *)ERROR_PTR("instr not defined", __func__, NULL);

if (insize == 0) insize = strlen(instr);
if ((data1 = decodeAscii85(instr, insize, &size1)) == NULL)
return (l_uint8 *)ERROR_PTR("data1 not made", __func__, NULL);
outdata = zlibUncompress(data1, size1, poutsize);
LEPT_FREE(data1);
return outdata;
}