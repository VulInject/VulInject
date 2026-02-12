void dcn20_blank_pixel_data(
struct dc *dc,
struct pipe_ctx *pipe_ctx,
bool blank)
{
struct tg_color black_color = {0};
struct stream_resource *stream_res = &pipe_ctx->stream_res;
struct dc_stream_state *stream = pipe_ctx->stream;
enum dc_color_space color_space = stream->output_color_space;
enum controller_dp_test_pattern test_pattern = CONTROLLER_DP_TEST_PATTERN_SOLID_COLOR;
enum controller_dp_color_space test_pattern_color_space = CONTROLLER_DP_COLOR_SPACE_UDEFINED;
struct pipe_ctx *odm_pipe;
int odm_cnt = 1;

int width = stream->timing.h_addressable + stream->timing.h_border_left + stream->timing.h_border_right;
int height = stream->timing.v_addressable + stream->timing.v_border_bottom + stream->timing.v_border_top;

if (stream->link->test_pattern_enabled)
return;


color_space_to_black_color(dc, color_space, &black_color);

for (odm_pipe = pipe_ctx->next_odm_pipe; odm_pipe; odm_pipe = odm_pipe->next_odm_pipe)
odm_cnt++;

width = width / odm_cnt;

if (blank) {
dc->hwss.set_abm_immediate_disable(pipe_ctx);

if (dc->debug.visual_confirm != VISUAL_CONFIRM_DISABLE) {
test_pattern = CONTROLLER_DP_TEST_PATTERN_COLORSQUARES;
test_pattern_color_space = CONTROLLER_DP_COLOR_SPACE_RGB;
}
} else {
test_pattern = CONTROLLER_DP_TEST_PATTERN_VIDEOMODE;
}

dc->hwss.set_disp_pattern_generator(dc,
pipe_ctx,
test_pattern,
test_pattern_color_space,
stream->timing.display_color_depth,
&black_color,
width,
height,
0);

for (odm_pipe = pipe_ctx->next_odm_pipe; odm_pipe; odm_pipe = odm_pipe->next_odm_pipe) {
dc->hwss.set_disp_pattern_generator(dc,
odm_pipe,
dc->debug.visual_confirm != VISUAL_CONFIRM_DISABLE && blank ?
CONTROLLER_DP_TEST_PATTERN_COLORRAMP : test_pattern,
test_pattern_color_space,
stream->timing.display_color_depth,
&black_color,
width,
height,
0);
}

if (!blank)
if (stream_res->abm) {
dc->hwss.set_pipe(pipe_ctx);
stream_res->abm->funcs->set_abm_level(stream_res->abm, stream->abm_level);
}
}