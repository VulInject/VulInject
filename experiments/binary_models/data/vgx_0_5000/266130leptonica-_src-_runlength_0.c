NUMA *
pixFindMaxRuns(PIX     *pix,
l_int32  direction,
NUMA   **pnastart)
{
l_int32  w, h, i, start, size;
NUMA    *nasize;

if (pnastart) *pnastart = NULL;
if (direction != L_HORIZONTAL_RUNS && direction != L_VERTICAL_RUNS)
return (NUMA *)ERROR_PTR("direction invalid", __func__, NULL);
if (!pix || pixGetDepth(pix) != 1)
return (NUMA *)ERROR_PTR("pix undefined or not 1 bpp", __func__, NULL);

pixGetDimensions(pix, &w, &h, NULL);
nasize = numaCreate(w);
if (pnastart) *pnastart = numaCreate(w);
if (direction == L_HORIZONTAL_RUNS) {
for (i = 0; i < h; i++) {
pixFindMaxHorizontalRunOnLine(pix, i, &start, &size);
numaAddNumber(nasize, size);
if (pnastart) numaAddNumber(*pnastart, start);
}
} else {  
for (i = 0; i < w; i++) {
pixFindMaxVerticalRunOnLine(pix, i, &start, &size);
numaAddNumber(nasize, size);
if (pnastart) numaAddNumber(*pnastart, start);
}
}

return nasize;
}