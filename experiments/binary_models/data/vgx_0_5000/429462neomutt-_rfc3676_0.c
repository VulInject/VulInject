static int quote_width(struct State *s, int ql)
{
const int screen_width = (s->flags & MUTT_DISPLAY) ? s->wraplen : 80;
const short c_reflow_wrap = cs_subset_number(NeoMutt->sub, "reflow_wrap");
int width = mutt_window_wrap_cols(screen_width, c_reflow_wrap);
const bool c_text_flowed = cs_subset_bool(NeoMutt->sub, "text_flowed");
if (c_text_flowed && (s->flags & MUTT_REPLYING))
{

if (width > FLOWED_MAX)
width = FLOWED_MAX;
ql++; 
}

width -= space_quotes(s) ? ql * 2 : ql;

if (add_quote_suffix(s, ql))
width--;

if (width <= 0)
width = FLOWED_MAX; 
return width;
}