int hgsmi_update_input_mapping(struct gen_pool *ctx, s32 origin_x, s32 origin_y,
u32 width, u32 height)
{
struct vbva_report_input_mapping *p;

p = hgsmi_buffer_alloc(ctx, sizeof(*p), HGSMI_CH_VBVA,
VBVA_REPORT_INPUT_MAPPING);
if (!p)
return -ENOMEM;

p->x = origin_x;
p->y = origin_y;
p->cx = width;
p->cy = height;

hgsmi_buffer_submit(ctx, p);
hgsmi_buffer_free(ctx, p);

return 0;
}