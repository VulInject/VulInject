static const VAR1 *FUN1 (VAR2 *VAR3, gint VAR4, gint VAR5, VAR6 *VAR7)
{
VAR6 *VAR8, *VAR9;
guchar  VAR10 = 0, VAR11 = 1;
gint    VAR12 = 0, VAR13;

if (VAR5 <= 0) {
if (VAR7) {
*VAR7 = '';
}
return "";
}

VAR8 = (VAR6 *)FUN2 (FUN3(), VAR3, VAR4, VAR5);
VAR9 = (VAR6 *)FUN4 (FUN3(), (VAR14)(VAR5 * 1.2) + 1);
for (VAR13 = 0; VAR13 < VAR5; VAR13++) {
VAR9[VAR12++] = VAR8[VAR13] >> VAR11 | VAR10;
VAR10 = (VAR8[VAR13] << (7 - VAR11) & 0x7F);
if (VAR11 == 7) {
VAR9[VAR12++] = VAR10;
VAR11 = 1;
VAR10 = 0;
} else {
VAR11++;
}
}

if (VAR7) {
*VAR7 = VAR10;
}

return VAR9;
}