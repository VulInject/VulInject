CMap_ToCode_stream (CMap *cmap, const char *cmap_name,
CIDSysInfo *csi, int cmap_type,
unsigned char *used_slot, int flags)
{
pdf_obj *stream = NULL;
CMap    *icmap;

ASSERT(cmap && cmap_name);

if (cmap->type !=
CMAP_TYPE_CODE_TO_CID)
return NULL;

icmap = invert_cmap(cmap, used_slot);
if (icmap) {
CMap_set_name(icmap, cmap_name);
if (csi)
CMap_set_CIDSysInfo(icmap, csi);
else {
CMap_set_CIDSysInfo(icmap, &(CSI_IDENTITY));
}
CMap_set_type(icmap, cmap_type);

stream = CMap_create_stream(icmap, flags);

CMap_release(icmap);
}

return stream;
}