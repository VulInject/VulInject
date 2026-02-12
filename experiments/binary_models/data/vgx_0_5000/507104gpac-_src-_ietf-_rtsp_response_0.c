GF_Err gf_rtsp_send_response(GF_RTSPSession *sess, GF_RTSPResponse *rsp)
{
u32 size;
char *buffer;
GF_Err e;

if (!sess || !rsp || !rsp->CSeq) return GF_BAD_PARAM;


if (rsp->CSeq > sess->CSeq) return GF_BAD_PARAM;

e = RTSP_WriteResponse(sess, rsp, (unsigned char **) &buffer, &size);
if (!e) {
GF_LOG(GF_LOG_INFO, GF_LOG_RTP, ("[RTSP] Sending response %s", buffer));

e = gf_rtsp_send_data(sess, buffer, size);
}
if (buffer) gf_free(buffer);
return e;
}