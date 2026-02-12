gboolean twitter_get_timeline(struct im_connection *ic, gint64 next_cursor)
{
struct twitter_data *td = ic->proto_data;
gboolean include_mentions = set_getbool(&ic->acc->set, "fetch_mentions");

if (td->flags & TWITTER_DOING_TIMELINE) {
if (++td->http_fails >= 5) {
imcb_error(ic, "Fetch timeout (%d)", td->flags);
imc_logout(ic, TRUE);
return FALSE;
}
}

td->flags |= TWITTER_DOING_TIMELINE;

twitter_get_home_timeline(ic, next_cursor);

if (include_mentions) {
twitter_get_mentions(ic, next_cursor);
}

return TRUE;
}