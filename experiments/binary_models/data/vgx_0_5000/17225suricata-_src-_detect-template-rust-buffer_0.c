static uint8_t DetectEngineInspectTemplateRustBuffer(DetectEngineCtx *de_ctx,
DetectEngineThreadCtx *det_ctx, const struct DetectEngineAppInspectionEngine_ *engine,
const Signature *s, Flow *f, uint8_t flags, void *alstate, void *txv, uint64_t tx_id)
{
uint8_t ret = 0;
const uint8_t *data = NULL;
uint32_t data_len = 0;

if (flags & STREAM_TOSERVER) {
rs_template_get_request_buffer(txv, &data, &data_len);
} else if (flags & STREAM_TOCLIENT) {
rs_template_get_response_buffer(txv, &data, &data_len);
}

if (data != NULL) {
ret = DetectEngineContentInspection(de_ctx, det_ctx, s, engine->smd, NULL, f,
(uint8_t *)data, data_len, 0, DETECT_CI_FLAGS_SINGLE,
DETECT_ENGINE_CONTENT_INSPECTION_MODE_STATE);
}

SCLogNotice("Returning %d.", ret);
return ret;
}