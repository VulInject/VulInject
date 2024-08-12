FUN1 (VAR1 * VAR2,
const VAR3 * VAR4)
{
VAR5 *VAR6;
gchar VAR7[16];
gint VAR8;

VAR6 = FUN2 ("",
"", VAR9, "", NULL);


for (VAR8 = 0; VAR8 < 16; VAR8++) {
FUN3 (VAR7, sizeof (VAR7), "", VAR8);
FUN4 (VAR6, VAR7, VAR10, (int) VAR4[VAR8], NULL);
}


return FUN5 (VAR11, VAR6);
}