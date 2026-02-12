static GF_Err gf_m2ts_decode_ait(GF_M2TS_AIT *ait, char  *data, u32 data_size, u32 table_id);
static Bool gf_m2ts_is_dmscc_app(GF_M2TS_CHANNEL_APPLICATION_INFO* ChanAppInfo);
static void gf_m2ts_free_ait_application(GF_M2TS_AIT_APPLICATION* application);
static void gf_ait_destroy(GF_M2TS_AIT* ait);
static void gf_m2ts_process_ait(GF_M2TS_Demuxer *ts, GF_M2TS_AIT* ait);

GF_M2TS_ES *gf_ait_section_new(u32 service_id)
{
GF_M2TS_ES *es;
GF_M2TS_AIT_CARRY *ses;
GF_SAFEALLOC(ses, GF_M2TS_AIT_CARRY);
es = (GF_M2TS_ES *)ses;
if (es) {
es->flags = GF_M2TS_ES_IS_SECTION;
ses->service_id = service_id;
}
return es;
}