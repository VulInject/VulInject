void
colour_palette_from_option(struct colour_palette *p, struct options *oo)
{
struct options_entry		*o;
struct options_array_item	*a;
u_int				 i, n;
int				 c;

if (p == NULL)
return;

o = options_get(oo, "pane-colours");
if ((a = options_array_first(o)) == NULL) {
if (p->default_palette != NULL) {
free(p->default_palette);
p->default_palette = NULL;
}
return;
}
if (p->default_palette == NULL)
p->default_palette = xcalloc(256, sizeof *p->default_palette);
for (i = 0; i < 256; i++)
p->default_palette[i] = -1;
while (a != NULL) {
n = options_array_item_index(a);
if (n < 256) {
c = options_array_item_value(a)->number;
p->default_palette[n] = c;
}
a = options_array_next(a);
}
}