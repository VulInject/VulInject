static gboolean
process_record(capture_file *cf, frame_data *frame, column_info *cinfo,
wtap_rec *rec, Buffer *buf, ph_stats_t* ps)
{
epan_dissect_t	edt;
double		cur_time;


if (!cf_read_record(cf, frame, rec, buf))
return FALSE;	


epan_dissect_init(&edt, cf->epan, TRUE, FALSE);

epan_dissect_fake_protocols(&edt, FALSE);
epan_dissect_run(&edt, cf->cd_t, rec,
frame_tvbuff_new_buffer(&cf->provider, frame, buf),
frame, cinfo);


process_tree(edt.tree, ps);

if (frame->has_ts) {

cur_time = nstime_to_sec(&frame->abs_ts);
if (cur_time < ps->first_time)
ps->first_time = cur_time;
if (cur_time > ps->last_time)
ps->last_time = cur_time;
}


epan_dissect_cleanup(&edt);

return TRUE;	
}