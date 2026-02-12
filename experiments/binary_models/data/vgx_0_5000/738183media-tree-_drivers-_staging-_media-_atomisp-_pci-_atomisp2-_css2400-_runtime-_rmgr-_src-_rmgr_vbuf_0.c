void ia_css_rmgr_uninit_vbuf(struct ia_css_rmgr_vbuf_pool *pool)
{
uint32_t i;
ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE, "ia_css_rmgr_uninit_vbuf()\n");
if (pool == NULL) {
ia_css_debug_dtrace(IA_CSS_DEBUG_ERROR, "ia_css_rmgr_uninit_vbuf(): NULL argument\n");
return;
}
if (pool->handles != NULL) {

for (i = 0; i < pool->size; i++) {
if (pool->handles[i] != NULL) {
ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE,
"   freeing/releasing %x (count=%d)\n",
pool->handles[i]->vptr,
pool->handles[i]->count);

hmm_free(pool->handles[i]->vptr);

ia_css_rmgr_refcount_release_vbuf(
&pool->handles[i]);
}
}

sh_css_free(pool->handles);
pool->handles = NULL;
}
}