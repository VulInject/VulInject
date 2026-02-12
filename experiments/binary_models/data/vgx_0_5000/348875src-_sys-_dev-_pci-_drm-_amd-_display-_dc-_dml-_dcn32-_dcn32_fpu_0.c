static bool dcn32_enough_pipes_for_subvp(struct dc *dc, struct dc_state *context)
{
unsigned int i, split_cnt, free_pipes;
unsigned int min_pipe_split = dc->res_pool->pipe_count + 1; 
bool subvp_possible = false;

for (i = 0; i < dc->res_pool->pipe_count; i++) {
struct pipe_ctx *pipe = &context->res_ctx.pipe_ctx[i];


if (pipe->stream && !pipe->top_pipe &&
pipe->stream->mall_stream_config.type == SUBVP_NONE) {
split_cnt = 0;
while (pipe) {
split_cnt++;
pipe = pipe->bottom_pipe;
}

if (split_cnt < min_pipe_split)
min_pipe_split = split_cnt;
}
}

free_pipes = dcn32_get_num_free_pipes(dc, context);



if (free_pipes >= min_pipe_split && free_pipes < dc->res_pool->pipe_count)
subvp_possible = true;

return subvp_possible;
}