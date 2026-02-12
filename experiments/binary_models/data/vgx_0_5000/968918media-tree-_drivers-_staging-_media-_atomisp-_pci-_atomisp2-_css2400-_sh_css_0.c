static enum ia_css_err
sh_css_pipes_stop(struct ia_css_stream *stream)
{
struct ia_css_pipe *pipe;
bool continuous;
enum ia_css_err err = IA_CSS_SUCCESS;
struct ia_css_pipe *main_pipe;
enum ia_css_pipe_id main_pipe_id;
int i;

ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE, "sh_css_continuous_is_enabled() enter: pipe_num=%d\n", pipe_num);
assert(stream != NULL);
if (stream == NULL) {
IA_CSS_LOG("stream does NOT exist!");
err = IA_CSS_ERR_INTERNAL_ERROR;
goto ERR;
}

pipe = find_pipe_by_num(pipe_num);
continuous = pipe && pipe->stream->config.continuous;
ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE,
"sh_css_continuous_is_enabled() leave: enable=%d\n",
continuous);
return continuous;
}