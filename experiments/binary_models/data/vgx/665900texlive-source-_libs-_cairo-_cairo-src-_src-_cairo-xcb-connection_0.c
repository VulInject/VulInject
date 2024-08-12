FUN1 (VAR1 *VAR2,
uint32_t VAR3,
xcb_drawable_t VAR4)
{
VAR5 *VAR6 = VAR2->VAR7;
xcb_void_cookie_t VAR8[32];
xcb_pixmap_t VAR9;
cairo_bool_t VAR10 = VAR11;
int VAR12, VAR13, VAR14;

VAR9 = FUN2 (VAR2);

for (VAR12 = 1, VAR13 = 0; VAR12 <= 32; VAR12++) {
if (VAR3 & FUN3(VAR12)) {
VAR8[VAR13] = FUN4 (VAR6, VAR12, VAR9, VAR4, 1, 1);
FUN5 (VAR6, VAR9);
if (!VAR8[VAR13].VAR15) {
VAR10 = VAR16;
break;
}
VAR13++;
}
}

for (VAR14 = 0; VAR14 < VAR13; VAR14++) {
VAR17 *VAR18 = FUN6 (VAR6, VAR8[VAR14]);
VAR10 &= VAR18 == NULL;
free (VAR18);
}

FUN7 (VAR2, VAR9);

return VAR10;
}