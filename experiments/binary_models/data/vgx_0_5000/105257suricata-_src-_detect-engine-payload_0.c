static uint8_t DetectEngineInspectStreamUDPPayload(DetectEngineCtx *de_ctx,
DetectEngineThreadCtx *det_ctx, const Signature *s, const SigMatchData *smd, Flow *f,
Packet *p)
{
SCEnter();
int r = 0;

if (smd == NULL) {
SCReturnInt(0);
}
det_ctx->payload_persig_cnt++;
det_ctx->payload_persig_size += p->payload_len;
det_ctx->buffer_offset = 0;
det_ctx->discontinue_matching = 0;
det_ctx->inspection_recursion_counter = 0;
det_ctx->replist = NULL;

r = DetectEngineContentInspection(de_ctx, det_ctx, s, smd,
p, f, p->payload, p->payload_len, 0, DETECT_CI_FLAGS_SINGLE,
DETECT_ENGINE_CONTENT_INSPECTION_MODE_PAYLOAD);
if (r == 1) {
SCReturnInt(1);
}
SCReturnInt(0);
}

struct StreamContentInspectData {
DetectEngineCtx *de_ctx;
DetectEngineThreadCtx *det_ctx;
const Signature *s;
Flow *f;
};