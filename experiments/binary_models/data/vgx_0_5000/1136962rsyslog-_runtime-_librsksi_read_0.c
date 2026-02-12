int
verifyBLOCK_HDRKSI(FILE *sigfp, FILE *nsigfp, tlvrecord_t* tlvrec)
{
int r;
block_hdr_t *bh = NULL;
if ((r = rsksi_tlvrd(sigfp, tlvrec, &bh)) != 0) goto done;
if (tlvrec->tlvtype != 0x0901) {
if(rsksi_read_debug)
printf("debug: verifyBLOCK_HDRKSI:\t\t expected tlvtype 0x0901, but was %4.4x\n",
tlvrec->tlvtype);
r = RSGTE_MISS_BLOCKSIG;
goto done;
}
if (nsigfp != NULL)
if ((r = rsksi_tlvwrite(nsigfp, tlvrec)) != 0) goto done;
done:
if (bh != NULL)
rsksi_objfree(tlvrec->tlvtype, bh);
if(rsksi_read_debug) printf("debug: verifyBLOCK_HDRKSI:\t\t returned %d\n", r);
return r;
}