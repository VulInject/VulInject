static GF_Err gf_ismacryp_gpac_get_info(u32 stream_id, char *drm_file, char *key, char *salt)
{
GF_Err e;
u32 i, count;
GF_CryptInfo *info;

e = GF_OK;
info = gf_crypt_info_load(drm_file, &e);
if (!info) return e;
count = gf_list_count(info->tcis);
for (i=0; i<count; i++) {
GF_TrackCryptInfo *tci = (GF_TrackCryptInfo *) gf_list_get(info->tcis, i);
if ((info->has_common_key && !tci->trackID) || (tci->trackID == stream_id) ) {
if (tci->KID_count)
memcpy(key, tci->keys[0], sizeof(char)*16);
memcpy(salt, tci->first_IV, sizeof(char)*8);
e = GF_OK;
break;
}
}
gf_crypt_info_del(info);
return e;
}