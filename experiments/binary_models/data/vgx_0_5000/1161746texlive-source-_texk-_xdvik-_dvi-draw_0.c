static void
finish_bbox(struct word_info *info)
{



info->bboxes_idx++;
while (info->bboxes_idx + 1 > info->bboxes_size) {

info->bboxes_size += 32;
info->bboxes = xrealloc(info->bboxes, info->bboxes_size * sizeof *(info->bboxes));
}
info->bboxes[info->bboxes_idx].ulx = INT_MAX;
info->bboxes[info->bboxes_idx].uly = INT_MAX;
info->bboxes[info->bboxes_idx].lrx = 0;
info->bboxes[info->bboxes_idx].lry = 0;

fprintf(stderr, "========= finish_bbox: index=%d, boxes:\n", info->bboxes_idx);
{
int i;
for (i = 0; i < info->bboxes_idx; i++) {
fprintf(stderr, "%d: x %d, y %d, w %d, h %d\n",
i, info->bboxes[i].ulx, info->bboxes[i].uly, info->bboxes[i].lrx, info->bboxes[i].lry);
}
}
}