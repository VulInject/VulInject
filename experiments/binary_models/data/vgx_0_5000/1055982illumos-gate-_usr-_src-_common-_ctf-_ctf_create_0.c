ctf_id_t
ctf_add_struct(ctf_file_t *fp, uint_t flag, const char *name)
{
ctf_hash_t *hp = &fp->ctf_structs;
ctf_helem_t *hep = NULL;
ctf_dtdef_t *dtd = NULL;
ctf_id_t type = CTF_ERR;

if (name != NULL)
hep = ctf_hash_lookup(hp, fp, name, strlen(name));

if (hep != NULL && ctf_type_kind(fp, hep->h_type) == CTF_K_FORWARD) {
type = hep->h_type;
dtd = ctf_dtd_lookup(fp, type);
if (CTF_INFO_KIND(dtd->dtd_data.ctt_info) != CTF_K_FORWARD)
dtd = NULL;
}

if (dtd == NULL) {
type = ctf_add_generic(fp, flag, name, &dtd);
if (type == CTF_ERR)
return (CTF_ERR); 
}

VERIFY(type != CTF_ERR);
dtd->dtd_data.ctt_info = CTF_TYPE_INFO(CTF_K_STRUCT, flag, 0);
dtd->dtd_data.ctt_size = 0;


fp->ctf_flags |= LCTF_DIRTY;

return (type);
}