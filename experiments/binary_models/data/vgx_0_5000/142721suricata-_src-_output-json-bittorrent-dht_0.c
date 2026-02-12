static OutputInitResult OutputBitTorrentDHTLogInitSub(ConfNode *conf, OutputCtx *parent_ctx)
{
OutputInitResult result = { NULL, false };
OutputJsonCtx *ajt = parent_ctx->data;

LogBitTorrentDHTFileCtx *bittorrent_dht_log_ctx = SCCalloc(1, sizeof(*bittorrent_dht_log_ctx));
if (unlikely(bittorrent_dht_log_ctx == NULL)) {
return result;
}
bittorrent_dht_log_ctx->eve_ctx = ajt;

OutputCtx *output_ctx = SCCalloc(1, sizeof(*output_ctx));
if (unlikely(output_ctx == NULL)) {
SCFree(bittorrent_dht_log_ctx);
return result;
}
output_ctx->data = bittorrent_dht_log_ctx;
output_ctx->DeInit = OutputBitTorrentDHTLogDeInitCtxSub;

AppLayerParserRegisterLogger(IPPROTO_UDP, ALPROTO_BITTORRENT_DHT);

result.ctx = output_ctx;
result.ok = true;
return result;
}