int wc_caamCoverKey(byte* in, word32 inSz, byte* out, word32* outSz, int flag)
{
CAAM_BUFFER buf[2];
word32 arg[4];
int ret;

if (*outSz < inSz + WC_CAAM_MAC_SZ) {
return BUFFER_E;
}

buf[0].BufferType = DataBuffer;
buf[0].TheAddress = (CAAM_ADDRESS)in;
buf[0].Length = inSz;

buf[1].BufferType = DataBuffer;
buf[1].TheAddress = (CAAM_ADDRESS)out;
buf[1].Length = inSz;

(void)flag; 
arg[0] = CAAM_FIFO_CCM_FLAG;
arg[1] = inSz;
if ((ret = wc_caamAddAndWait(buf, 2, arg, CAAM_FIFO_S)) != 0) {
WOLFSSL_MSG("Error with CAAM blob create");
return ret;
}

*outSz = inSz + WC_CAAM_MAC_SZ;
return 0;
}