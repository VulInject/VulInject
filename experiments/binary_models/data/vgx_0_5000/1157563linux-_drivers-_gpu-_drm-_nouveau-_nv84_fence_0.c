static bool
nv84_fence_suspend(struct nouveau_drm *drm)
{
struct nv84_fence_priv *priv = drm->fence;
int i;

priv->suspend = vmalloc(array_size(sizeof(u32), drm->chan_total));
if (priv->suspend) {
for (i = 0; i < drm->chan_total; i++)
priv->suspend[i] = nouveau_bo_rd32(priv->bo, i*4);
}

return priv->suspend != NULL;
}