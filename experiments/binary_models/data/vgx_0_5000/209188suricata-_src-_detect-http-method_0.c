static bool DetectHttpMethodValidateCallback(const Signature *s, const char **sigerror)
{
const SigMatch *sm = s->init_data->smlists[g_http_method_buffer_id];
for ( ; sm != NULL; sm = sm->next) {
if (sm->type != DETECT_CONTENT)
continue;
const DetectContentData *cd = (const DetectContentData *)sm->ctx;
if (cd->content && cd->content_len) {
if (cd->content[cd->content_len-1] == 0x20) {
*sigerror = "http_method pattern with trailing space";
SCLogError("%s", *sigerror);
return false;
} else if (cd->content[0] == 0x20) {
*sigerror = "http_method pattern with leading space";
SCLogError("%s", *sigerror);
return false;
} else if (cd->content[cd->content_len-1] == 0x09) {
*sigerror = "http_method pattern with trailing tab";
SCLogError("%s", *sigerror);
return false;
} else if (cd->content[0] == 0x09) {
*sigerror = "http_method pattern with leading tab";
SCLogError("%s", *sigerror);
return false;
}
}
}
return true;
}