s32
brcmf_fil_iovar_data_set(struct brcmf_if *ifp, char *name, const void *data,
u32 len)
{
struct brcmf_pub *drvr = ifp->drvr;
s32 err;
u32 buflen;

mutex_lock(&drvr->proto_block);

brcmf_dbg(FIL, "ifidx=%d, name=%s, len=%d\n", ifp->ifidx, name, len);
brcmf_dbg_hex_dump(BRCMF_FIL_ON(), data,
min_t(uint, len, MAX_HEX_DUMP_LEN), "data\n");

buflen = brcmf_create_iovar(name, data, len, drvr->proto_buf,
sizeof(drvr->proto_buf));
if (buflen) {
err = brcmf_fil_cmd_data(ifp, BRCMF_C_SET_VAR, drvr->proto_buf,
buflen, true);
} else {
err = -EPERM;
brcmf_err("Creating iovar failed\n");
}

mutex_unlock(&drvr->proto_block);
return err;
}