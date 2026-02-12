static void
wshedSaveBasin(L_WSHED  *wshed,
l_int32   index,
l_int32   level)
{
BOX  *box;
PIX  *pix;

if (!wshed) {
L_ERROR("wshed not defined\n", __func__);
return;
}

if (identifyWatershedBasin(wshed, index, level, &box, &pix) == 0) {
pixaAddPix(wshed->pixad, pix, L_INSERT);
pixaAddBox(wshed->pixad, box, L_INSERT);
numaAddNumber(wshed->nalevels, level - 1);
}
}