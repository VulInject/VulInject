void compositor_init_text(GF_Compositor *compositor, GF_Node *node)
{
TextStack *stack;
GF_SAFEALLOC(stack, TextStack);
if (!stack) {
GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Compositor] Failed to allocate text stack\n"));
return;
}
drawable_init_ex(&stack->s_graph);
stack->s_graph.node = node;
stack->s_graph.flags = DRAWABLE_USE_TRAVERSE_DRAW;
stack->ascent = stack->descent = 0;
stack->spans = gf_list_new();
stack->texture_text_flag = 0;

stack->compositor = compositor;
gf_node_set_private(node, stack);
gf_node_set_callback_function(node, Text_Traverse);
}