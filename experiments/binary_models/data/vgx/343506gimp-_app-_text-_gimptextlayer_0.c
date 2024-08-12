FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4;
gboolean         VAR5;
const VAR6      *VAR7;
const VAR6      *VAR8 = NULL;
const VAR9    *VAR10;
gint             VAR11;
gint             VAR12;
gint             VAR13;
VAR9          *VAR14;
gint             VAR15;
gint             VAR16;

FUN2 (VAR2 != NULL, NULL);

VAR10      = FUN3 (VAR2);
VAR7    = FUN4 (VAR2);
VAR11     = FUN5 (VAR2);
VAR12    = FUN6 (VAR2);
VAR13       = FUN7 (VAR7);
VAR5 = FUN8 (VAR7);

VAR4 = FUN9 (VAR5 ?
VAR17 : VAR18,
VAR11, VAR12);

VAR14    = FUN10 (VAR4);
VAR15 = FUN11 (VAR4);

if (VAR7 != FUN12 (VAR5 ? "" : ""))
VAR8 = FUN13 (VAR7, FUN12 (VAR5 ? "" : ""));

for (VAR16 = 0; VAR16 < VAR12; VAR16++)
{
if (VAR8)
FUN14 (VAR8, VAR10, VAR14, VAR11);
else
memcpy (VAR14, VAR10, VAR11 * VAR13);

VAR10 += VAR11 * VAR13;
VAR14 += VAR15;
}

return VAR4;
}