SELA *
selaAddDwaCombs(SELA  *sela)
{
char     name[L_BUF_SIZE];
l_int32  i, f1, f2, prevsize, size;
SEL     *selh, *selv;

if (!sela) {
if ((sela = selaCreate(0)) == NULL)
return (SELA *)ERROR_PTR("sela not made", __func__, NULL);
}

prevsize = 0;
for (i = 4; i < 64; i++) {
selectComposableSizes(i, &f1, &f2);
size = f1 * f2;
if (size == prevsize)
continue;
selectComposableSels(i, L_HORIZ, NULL, &selh);
if (selh) {
snprintf(name, L_BUF_SIZE, "sel_comb_%dh", size);
selaAddSel(sela, selh, name, 0);
} else {
L_ERROR("selh not made for i = %d\n", __func__, i);
}
selectComposableSels(i, L_VERT, NULL, &selv);
if (selv) {
snprintf(name, L_BUF_SIZE, "sel_comb_%dv", size);
selaAddSel(sela, selv, name, 0);
} else {
L_ERROR("selv not made for i = %d\n", __func__, i);
}
prevsize = size;
}

return sela;
}