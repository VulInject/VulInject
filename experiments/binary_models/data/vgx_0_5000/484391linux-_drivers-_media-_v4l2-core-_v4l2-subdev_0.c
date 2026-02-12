static void __v4l2_link_validate_get_streams(struct media_pad *pad,
u64 *streams_mask)
{
struct v4l2_subdev_route *route;
struct v4l2_subdev_state *state;
struct v4l2_subdev *subdev;

subdev = media_entity_to_v4l2_subdev(pad->entity);

*streams_mask = 0;

state = v4l2_subdev_get_locked_active_state(subdev);
if (WARN_ON(!state))
return;

for_each_active_route(&state->routing, route) {
u32 route_pad;
u32 route_stream;

if (pad->flags & MEDIA_PAD_FL_SOURCE) {
route_pad = route->source_pad;
route_stream = route->source_stream;
} else {
route_pad = route->sink_pad;
route_stream = route->sink_stream;
}

if (route_pad != pad->index)
continue;

*streams_mask |= BIT_ULL(route_stream);
}
}