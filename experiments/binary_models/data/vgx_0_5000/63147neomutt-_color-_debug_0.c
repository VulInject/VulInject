void attr_color_dump(struct AttrColor *ac, const char *prefix)
{
if (!ac)
return;

int index = ac->curses_color ? ac->curses_color->index : -1;

int fg = COLOR_DEFAULT;
int bg = COLOR_DEFAULT;
struct CursesColor *cc = ac->curses_color;
if (cc)
{
fg = cc->fg;
bg = cc->bg;
}
const char *color = color_debug_log_color(fg, bg);
const char *attrs = color_debug_log_attrs(ac->attrs);
color_debug(LL_DEBUG5, "%s| %5d | %s | 0x%08x | %s\n", NONULL(prefix), index,
color, ac->attrs, attrs);
}