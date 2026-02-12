static int media_pipeline_add_pad(struct media_pipeline *pipe,
struct media_pipeline_walk *walk,
struct media_pad *pad)
{
struct media_pipeline_pad *ppad;

list_for_each_entry(ppad, &pipe->pads, list) {
if (ppad->pad == pad) {
dev_dbg(pad->graph_obj.mdev->dev,
"media pipeline: already contains pad '%s':%u\n",
pad->entity->name, pad->index);
return 0;
}
}

ppad = kzalloc(sizeof(*ppad), GFP_KERNEL);
if (!ppad)
return -ENOMEM;

ppad->pipe = pipe;
ppad->pad = pad;

list_add_tail(&ppad->list, &pipe->pads);

dev_dbg(pad->graph_obj.mdev->dev,
"media pipeline: added pad '%s':%u\n",
pad->entity->name, pad->index);

return media_pipeline_walk_push(walk, pad);
}