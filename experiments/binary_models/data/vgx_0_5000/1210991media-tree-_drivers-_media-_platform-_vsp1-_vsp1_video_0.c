static void vsp1_video_pipeline_setup_partitions(struct vsp1_pipeline *pipe)
{
struct vsp1_device *vsp1 = pipe->output->entity.vsp1;
const struct v4l2_mbus_framefmt *format;
struct vsp1_entity *entity;
unsigned int div_size;


format = vsp1_entity_get_pad_format(&pipe->output->entity,
pipe->output->entity.config,
RWPF_PAD_SINK);
div_size = format->width;


if (vsp1->info->gen == 2) {
pipe->div_size = div_size;
pipe->partitions = 1;
return;
}

list_for_each_entry(entity, &pipe->entities, list_pipe) {
unsigned int entity_max = VSP1_VIDEO_MAX_WIDTH;

if (entity->ops->max_width) {
entity_max = entity->ops->max_width(entity, pipe);
if (entity_max)
div_size = min(div_size, entity_max);
}
}

pipe->div_size = div_size;
pipe->partitions = DIV_ROUND_UP(format->width, div_size);
}