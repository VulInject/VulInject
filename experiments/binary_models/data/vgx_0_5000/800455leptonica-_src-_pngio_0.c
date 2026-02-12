l_ok
freadHeaderPng(FILE     *fp,
l_int32  *pw,
l_int32  *ph,
l_int32  *pbps,
l_int32  *pspp,
l_int32  *piscmap)
{
l_int32  nbytes, ret;
l_uint8  data[40];

if (pw) *pw = 0;
if (ph) *ph = 0;
if (pbps) *pbps = 0;
if (pspp) *pspp = 0;
if (piscmap) *piscmap = 0;
if (!fp)
return ERROR_INT("stream not defined", __func__, 1);

nbytes = fnbytesInFile(fp);
if (nbytes < 40)
return ERROR_INT("file too small to be png", __func__, 1);
if (fread(data, 1, 40, fp) != 40)
return ERROR_INT("error reading data", __func__, 1);
ret = readHeaderMemPng(data, 40, pw, ph, pbps, pspp, piscmap);
return ret;
}