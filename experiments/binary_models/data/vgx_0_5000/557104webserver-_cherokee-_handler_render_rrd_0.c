check_image_freshness (cherokee_buffer_t                 *buf,
cherokee_collector_rrd_interval_t *interval)
{
int         re;
struct stat info;


cherokee_buffer_prepend_str (buf, "/");
cherokee_buffer_prepend_buf (buf, &rrd_connection->path_img_cache);

cherokee_buffer_add_char    (buf, '_');
cherokee_buffer_add         (buf, interval->interval, strlen(interval->interval));
cherokee_buffer_add_str     (buf, ".png");

re = cherokee_stat (buf->buf, &info);
if (re != 0) {
TRACE(ENTRIES, "Image does not exist: '%s'\n", buf->buf);
return false;
}

if (cherokee_bogonow_now >= info.st_mtime + interval->secs_per_pixel) {
TRACE(ENTRIES, "Image is too old: '%s'. It was valid for %d secs, but it's %d secs old.\n",
buf->buf, interval->secs_per_pixel, (cherokee_bogonow_now - info.st_mtime));
return false;
}

TRACE(ENTRIES, "Image is fresh enough: '%s'\n", buf->buf);
return true;
}