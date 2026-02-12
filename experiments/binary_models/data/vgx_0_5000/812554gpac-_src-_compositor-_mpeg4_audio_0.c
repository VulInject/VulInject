void compositor_init_audiobuffer(GF_Compositor *compositor, GF_Node *node)
{
AudioBufferStack *st;
GF_SAFEALLOC(st, AudioBufferStack);
if (!st) {
GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Compositor] Failed to allocate audiobuffer stack\n"));
return;
}


setup_audiobuffer(&st->output, compositor, node);
st->add_source = audiobuffer_add_source;

st->time_handle.UpdateTimeNode = audiobuffer_update_time;
st->time_handle.udta = node;
st->set_duration = GF_TRUE;

st->am = gf_mixer_new(NULL);
st->new_inputs = gf_list_new();

gf_node_set_private(node, st);
gf_node_set_callback_function(node, audiobuffer_traverse);
gf_sc_register_time_node(compositor, &st->time_handle);
}