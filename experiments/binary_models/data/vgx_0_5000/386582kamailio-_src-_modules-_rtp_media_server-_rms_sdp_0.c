PayloadType *rms_sdp_select_payload(rms_sdp_info_t *sdp)
{


LM_INFO("payloads[%s]\n", sdp->payloads.s); 
PayloadType *pt = rms_payload_type_new();
char *payloads = sdp->payloads.s;
char *payload_type_number = strtok(payloads, " ");

if (!pt) {
return NULL;
}
while (payload_type_number) {
pt->type = atoi(payload_type_number);
pt = rms_sdp_check_payload_type(pt, sdp);
if (pt->mime_type) return pt;
payload_type_number = strtok(NULL, " ");
}
if (!pt->mime_type) {
LM_INFO("unsuported codec\n");
shm_free(pt); 
return NULL;
}
LM_INFO("payload_type:%d %s/%d/%d\n", pt->type, pt->mime_type,
pt->clock_rate, pt->channels);
return pt;
}