LOCAL(void)
set_bottom_pointers(j_decompress_ptr cinfo)

{
my_main_ptr main_ptr = (my_main_ptr)cinfo->main;
int ci, i, rgroup, iMCUheight, rows_left;
jpeg_component_info *compptr;
_JSAMPARRAY xbuf;

for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
ci++, compptr++) {

iMCUheight = compptr->v_samp_factor * compptr->_DCT_scaled_size;
rgroup = iMCUheight / cinfo->_min_DCT_scaled_size;

rows_left = (int)(compptr->downsampled_height % (JDIMENSION)iMCUheight);
if (rows_left == 0) rows_left = iMCUheight;

if (ci == 0) {
main_ptr->rowgroups_avail = (JDIMENSION)((rows_left - 1) / rgroup + 1);
}

xbuf = main_ptr->xbuffer[main_ptr->whichptr][ci];
for (i = 0; i < rgroup * 2; i++) {
xbuf[rows_left + i] = xbuf[rows_left - 1];
}
}
}