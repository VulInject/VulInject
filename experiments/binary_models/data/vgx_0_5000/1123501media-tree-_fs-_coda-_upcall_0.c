int venus_readlink(struct super_block *sb, struct CodaFid *fid, 
char *buffer, int *length)
{ 
union inputArgs *inp;
union outputArgs *outp;
int insize, outsize, error;
int retlen;
char *result;

insize = max_t(unsigned int,
INSIZE(readlink), OUTSIZE(readlink)+ *length);
UPARG(CODA_READLINK);

inp->coda_readlink.VFid = *fid;

error = coda_upcall(coda_vcp(sb), insize, &outsize, inp);
if (!error) {
retlen = outp->coda_readlink.count;
if (retlen >= *length)
retlen = *length - 1;
*length = retlen;
result =  (char *)outp + (long)outp->coda_readlink.data;
memcpy(buffer, result, retlen);
*(buffer + retlen) = '\0';
}

CODA_FREE(inp, insize);
return error;
}