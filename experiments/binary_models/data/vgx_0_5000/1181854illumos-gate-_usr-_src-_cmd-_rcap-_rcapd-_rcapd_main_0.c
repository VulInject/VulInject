static int
report_collection_cb(lcollection_t *lcol, void *arg)
{
lcollection_report_t dc;
int fd = (intptr_t)arg;


bzero(&dc, sizeof (dc));
dc.lcol_id = lcol->lcol_id;
(void) strcpy(dc.lcol_name, lcol->lcol_name);
dc.lcol_rss = lcol->lcol_rss;
dc.lcol_image_size = lcol->lcol_image_size;
dc.lcol_rss_cap = lcol->lcol_rss_cap;
dc.lcol_stat = lcol->lcol_stat;

if (write(fd, &dc, sizeof (dc)) == sizeof (dc)) {
lcol->lcol_stat_old = lcol->lcol_stat;
} else {
debug("can't write %s %s statistics",
(lcol->lcol_id.rcid_type == RCIDT_PROJECT ?
"project" : "zone"),
lcol->lcol_name);
}

return (0);
}