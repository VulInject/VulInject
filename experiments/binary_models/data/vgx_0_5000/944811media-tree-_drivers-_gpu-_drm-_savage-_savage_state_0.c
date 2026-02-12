static int savage_dispatch_swap(drm_savage_private_t * dev_priv,
unsigned int nbox, const struct drm_clip_rect *boxes)
{
unsigned int swap_cmd;
unsigned int i;
DMA_LOCALS;

if (nbox == 0)
return 0;

swap_cmd = BCI_CMD_RECT | BCI_CMD_RECT_XP | BCI_CMD_RECT_YP |
BCI_CMD_SRC_PBD_COLOR_NEW | BCI_CMD_DEST_GBD;
BCI_CMD_SET_ROP(swap_cmd, 0xCC);

for (i = 0; i < nbox; ++i) {
BEGIN_DMA(6);
DMA_WRITE(swap_cmd);
DMA_WRITE(dev_priv->back_offset);
DMA_WRITE(dev_priv->back_bd);
DMA_WRITE(BCI_X_Y(boxes[i].x1, boxes[i].y1));
DMA_WRITE(BCI_X_Y(boxes[i].x1, boxes[i].y1));
DMA_WRITE(BCI_W_H(boxes[i].x2 - boxes[i].x1,
boxes[i].y2 - boxes[i].y1));
DMA_COMMIT();
}

return 0;
}