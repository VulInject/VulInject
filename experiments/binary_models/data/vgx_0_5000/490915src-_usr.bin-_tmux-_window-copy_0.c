static void
window_copy_size_changed(struct window_mode_entry *wme)
{
struct window_copy_mode_data	*data = wme->data;
struct screen			*s = &data->screen;
struct screen_write_ctx		 ctx;
int				 search = (data->searchmark != NULL);

window_copy_clear_selection(wme);
window_copy_clear_marks(wme);

screen_write_start(&ctx, s);
window_copy_write_lines(wme, &ctx, 0, screen_size_y(s));
screen_write_stop(&ctx);

if (search && !data->timeout)
window_copy_search_marks(wme, NULL, data->searchregex, 0);
data->searchx = data->cx;
data->searchy = data->cy;
data->searcho = data->oy;
}