static int PrefilterStoreGetId(DetectEngineCtx *de_ctx,
const char *name, void (*FreeFunc)(void *))
{
PrefilterStore ctx = { name, FreeFunc, 0 };

BUG_ON(de_ctx->prefilter_hash_table == NULL);

SCLogDebug("looking up %s", name);

PrefilterStore *rctx = HashListTableLookup(de_ctx->prefilter_hash_table, (void *)&ctx, 0);
if (rctx != NULL) {
return rctx->id;
}

PrefilterStore *actx = SCCalloc(1, sizeof(*actx));
if (actx == NULL) {
return -1;
}

actx->name = name;
actx->FreeFunc = FreeFunc;
actx->id = de_ctx->prefilter_id++;
SCLogDebug("prefilter engine %s has profile id %u", actx->name, actx->id);

int ret = HashListTableAdd(de_ctx->prefilter_hash_table, actx, 0);
if (ret != 0) {
SCFree(actx);
return -1;
}

int r = actx->id;
return r;
}