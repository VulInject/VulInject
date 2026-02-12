static void rtp_evrc_smv_flush(GP_RTPPacketizer *builder)
{
if (!builder->bytesInPacket) return;
if (builder->auh_size>1) {
u8 *hdr;
u32 hdr_size;

if (builder->last_au_sn % 2) gf_bs_write_int(builder->pck_hdr, 0, 4);
gf_bs_get_content(builder->pck_hdr, &hdr, &hdr_size);
gf_bs_del(builder->pck_hdr);
builder->pck_hdr = NULL;

hdr[0] = 0;
hdr[1] = builder->last_au_sn-1;
builder->OnData(builder->cbk_obj, hdr, hdr_size, GF_TRUE);
gf_free(hdr);
}
builder->OnPacketDone(builder->cbk_obj, &builder->rtp_header);
builder->bytesInPacket = 0;
builder->last_au_sn = 0;
}