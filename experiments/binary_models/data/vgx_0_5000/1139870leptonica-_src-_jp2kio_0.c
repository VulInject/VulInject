PIX *
pixReadMemJp2k(const l_uint8  *data,
size_t          size,
l_uint32        reduction,
BOX            *box,
l_int32         hint,
l_int32         debug)
{
FILE     *fp;
PIX      *pix;

if (!data)
return (PIX *)ERROR_PTR("data not defined", __func__, NULL);

if ((fp = fopenReadFromMemory(data, size)) == NULL)
return (PIX *)ERROR_PTR("stream not opened", __func__, NULL);
pix = pixReadStreamJp2k(fp, reduction, box, hint, debug);
fclose(fp);
if (!pix) L_ERROR("pix not read\n", __func__);
return pix;
}