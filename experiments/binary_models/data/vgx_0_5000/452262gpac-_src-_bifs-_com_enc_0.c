void gf_bifs_enc_name(GF_BifsEncoder *codec, GF_BitStream *bs, char *name)
{
u32 i = 0;
if (!name) {
GF_LOG(GF_LOG_WARNING, GF_LOG_CODING, ("[BIFS] Coding IDs using names but no name is specified\n"));
i = 1;
} else {
while (name[i]) {
gf_bs_write_int(bs, name[i], 8);
i++;
}
}
gf_bs_write_int(bs, 0, 8);
GF_LOG(GF_LOG_DEBUG, GF_LOG_CODING, ("[BIFS] DEF\t\t%d\t\t%s\n", 8*i, name));
}