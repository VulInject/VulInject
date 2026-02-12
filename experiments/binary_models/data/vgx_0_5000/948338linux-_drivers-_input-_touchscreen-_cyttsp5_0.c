static int cyttsp5_mt_attention(struct device *dev)
{
struct cyttsp5 *ts = dev_get_drvdata(dev);
struct cyttsp5_sysinfo *si = &ts->sysinfo;
int max_tch = si->sensing_conf_data.max_tch;
struct cyttsp5_touch tch;
int num_cur_tch;

cyttsp5_get_touch_axis(&num_cur_tch, si->tch_hdr.size,
si->tch_hdr.max,
ts->input_buf + 3 + si->tch_hdr.ofs,
si->tch_hdr.bofs);

if (num_cur_tch > max_tch) {
dev_err(dev, "Num touch err detected (n=%d)\n", num_cur_tch);
num_cur_tch = max_tch;
}

if (num_cur_tch == 0 && ts->num_prv_rec == 0)
return 0;


if (num_cur_tch)
cyttsp5_get_mt_touches(ts, &tch, num_cur_tch);

input_mt_sync_frame(ts->input);
input_sync(ts->input);

return 0;
}