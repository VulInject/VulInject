static void komeda_pipeline_assemble(struct komeda_pipeline *pipe)
{
struct komeda_component *c;
struct komeda_layer *layer;
int i, id;
unsigned long avail_comps = pipe->avail_comps;

for_each_set_bit(id, &avail_comps, 32) {
c = komeda_pipeline_get_component(pipe, id);
komeda_component_verify_inputs(c);
}

for (i = 0; i < pipe->n_layers; i++) {
layer = pipe->layers[i];

layer->right = komeda_get_layer_split_right_layer(pipe, layer);
}

if (pipe->dual_link && !pipe->ctrlr->supports_dual_link) {
pipe->dual_link = false;
DRM_WARN("PIPE-%d doesn't support dual-link, ignore DT dual-link configuration.\n",
pipe->id);
}
}