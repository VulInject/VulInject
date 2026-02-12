GF_Err gf_seng_enable_aggregation(GF_SceneEngine *seng, u16 ESID, u16 onESID)
{
GF_StreamContext *sc;

if (ESID) {
u32 i=0;
while (NULL != (sc = (GF_StreamContext*)gf_list_enum(seng->ctx->streams, &i))) {
if (0 != (sc->ESID==ESID)) break;
}
} else {
sc = (GF_StreamContext*)gf_list_get(seng->ctx->streams, 0);
}
if (!sc) return GF_STREAM_NOT_FOUND;

sc->aggregate_on_esid = onESID;
return GF_OK;
}