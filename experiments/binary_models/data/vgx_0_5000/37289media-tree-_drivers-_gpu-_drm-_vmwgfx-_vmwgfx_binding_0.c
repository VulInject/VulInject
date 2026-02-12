static int vmw_binding_scrub_shader(struct vmw_ctx_bindinfo *bi, bool rebind)
{
struct vmw_ctx_bindinfo_shader *binding =
container_of(bi, typeof(*binding), bi);
struct vmw_private *dev_priv = bi->ctx->dev_priv;
struct {
SVGA3dCmdHeader header;
SVGA3dCmdSetShader body;
} *cmd;

cmd = vmw_fifo_reserve(dev_priv, sizeof(*cmd));
if (unlikely(cmd == NULL)) {
DRM_ERROR("Failed reserving FIFO space for shader "
"unbinding.\n");
return -ENOMEM;
}

cmd->header.id = SVGA_3D_CMD_SET_SHADER;
cmd->header.size = sizeof(cmd->body);
cmd->body.cid = bi->ctx->id;
cmd->body.type = binding->shader_slot + SVGA3D_SHADERTYPE_MIN;
cmd->body.shid = ((rebind) ? bi->res->id : SVGA3D_INVALID_ID);
vmw_fifo_commit(dev_priv, sizeof(*cmd));

return 0;
}