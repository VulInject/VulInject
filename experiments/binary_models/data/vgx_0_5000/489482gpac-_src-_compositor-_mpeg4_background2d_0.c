void compositor_init_background2d(GF_Compositor *compositor, GF_Node *node)
{
Background2DStack *ptr;
GF_SAFEALLOC(ptr, Background2DStack);
if (!ptr) {
GF_LOG(GF_LOG_ERROR, GF_LOG_COMPOSE, ("[Compositor] Failed to allocate background2D stack\n"));
return;
}

ptr->status_stack = gf_list_new();
ptr->reg_stacks = gf_list_new();

ptr->drawable = drawable_stack_new(compositor, node);
ptr->drawable->flags = DRAWABLE_USE_TRAVERSE_DRAW;
((M_Background2D *)node)->on_set_bind = b2D_set_bind;


gf_sc_texture_setup(&ptr->txh, compositor, node);
ptr->txh.update_texture_fcnt = UpdateBackgroundTexture;
ptr->txh.flags = GF_SR_TEXTURE_REPEAT_S | GF_SR_TEXTURE_REPEAT_T;
ptr->flags = CTX_IS_BACKGROUND;

gf_node_set_private(node, ptr);
gf_node_set_callback_function(node, TraverseBackground2D);
}