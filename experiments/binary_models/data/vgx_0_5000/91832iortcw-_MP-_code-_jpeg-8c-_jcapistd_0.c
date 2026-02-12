jpeg_write_scanlines (j_compress_ptr cinfo, JSAMPARRAY scanlines,
JDIMENSION num_lines)
{
JDIMENSION row_ctr, rows_left;

if (cinfo->global_state != CSTATE_SCANNING)
ERREXIT1(cinfo, JERR_BAD_STATE, cinfo->global_state);
if (cinfo->next_scanline >= cinfo->image_height)
WARNMS(cinfo, JWRN_TOO_MUCH_DATA);


if (cinfo->progress != NULL) {
cinfo->progress->pass_counter = (long) cinfo->next_scanline;
cinfo->progress->pass_limit = (long) cinfo->image_height;
(*cinfo->progress->progress_monitor) ((j_common_ptr) cinfo);
}


if (cinfo->master->call_pass_startup)
(*cinfo->master->pass_startup) (cinfo);


rows_left = cinfo->image_height - cinfo->next_scanline;
if (num_lines > rows_left)
num_lines = rows_left;

row_ctr = 0;
(*cinfo->main->process_data) (cinfo, scanlines, &row_ctr, num_lines);
cinfo->next_scanline += row_ctr;
return row_ctr;
}