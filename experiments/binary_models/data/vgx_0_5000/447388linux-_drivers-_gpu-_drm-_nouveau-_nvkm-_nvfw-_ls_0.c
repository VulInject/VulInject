const struct nvfw_ls_desc_v1 *
nvfw_ls_desc_v1(struct nvkm_subdev *subdev, const void *data)
{
const struct nvfw_ls_desc_v1 *hdr = data;
int i;

nvfw_ls_desc_head(subdev, &hdr->head);

nvkm_debug(subdev, "\tnbImemOverlays       : %d\n",
hdr->nb_imem_overlays);
nvkm_debug(subdev, "\tnbDmemOverlays       : %d\n",
hdr->nb_imem_overlays);
for (i = 0; i < ARRAY_SIZE(hdr->load_ovl); i++) {
nvkm_debug(subdev, "\tloadOvl[%2d]          : 0x%x %d\n", i,
hdr->load_ovl[i].start, hdr->load_ovl[i].size);
}
nvkm_debug(subdev, "\tcompressed           : %d\n", hdr->compressed);

return hdr;
}