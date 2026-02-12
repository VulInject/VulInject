void InitInputSensor(GF_Scene *scene, GF_Node *node)
{
ISStack *stack;
GF_SAFEALLOC(stack, ISStack);
if (!stack) {
GF_LOG(GF_LOG_ERROR, GF_LOG_INTERACT, ("[Compositor] Failed to allocate input sensor stack\n"));
return;
}
stack->is = (M_InputSensor *) node;
gf_node_set_private(node, stack);
gf_node_set_callback_function(node, TraverseInputSensor);

gf_sc_queue_node_traverse(scene->compositor, node);
}