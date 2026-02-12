make_funny_pointers (j_decompress_ptr cinfo)

{
my_main_ptr main_ptr = (my_main_ptr) cinfo->main;
int ci, i, rgroup;
int M = cinfo->min_DCT_v_scaled_size;
jpeg_component_info *compptr;
JSAMPARRAY buf, xbuf0, xbuf1;

for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
ci++, compptr++) {
rgroup = (compptr->v_samp_factor * compptr->DCT_v_scaled_size) /
cinfo->min_DCT_v_scaled_size; 
xbuf0 = main_ptr->xbuffer[0][ci];
xbuf1 = main_ptr->xbuffer[1][ci];

buf = main_ptr->buffer[ci];
for (i = 0; i < rgroup * (M + 2); i++) {
xbuf0[i] = xbuf1[i] = buf[i];
}

for (i = 0; i < rgroup * 2; i++) {
xbuf1[rgroup*(M-2) + i] = buf[rgroup*M + i];
xbuf1[rgroup*M + i] = buf[rgroup*(M-2) + i];
}

for (i = 0; i < rgroup; i++) {
xbuf0[i - rgroup] = xbuf0[0];
}
}
}