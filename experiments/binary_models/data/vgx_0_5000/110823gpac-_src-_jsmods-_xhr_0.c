static void xml_http_state_change(XMLHTTPContext *ctx)
{
GF_SceneGraph *scene;
GF_Node *n;

gf_js_lock(ctx->c, GF_TRUE);
if (! JS_IsNull(ctx->onreadystatechange)) {
JSValue ret = JS_Call(ctx->c, ctx->onreadystatechange, ctx->_this, 0, NULL);
if (JS_IsException(ret))
js_dump_error(ctx->c);
JS_FreeValue(ctx->c, ret);
}

js_std_loop(ctx->c);
gf_js_lock(ctx->c, GF_FALSE);

if (! ctx->owning_graph) return;
if (ctx->local_graph) return;


scene = (GF_SceneGraph *)JS_GetContextOpaque(ctx->c);

if (scene->__reserved_null == 0) return;
n = (GF_Node *)JS_GetContextOpaque(ctx->c);
gf_js_vrml_flush_event_out(n, (GF_ScriptPriv *)n->sgprivate->UserPrivate);
}