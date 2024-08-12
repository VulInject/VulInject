FUN1 (VAR1 * VAR2, VAR3 * VAR4,
VAR5 * VAR6, VAR5 * VAR7)
{
VAR8 *VAR9 = FUN2 (VAR2);
guint8 VAR10[1];
guint VAR11;
gboolean VAR12, VAR13;
gint VAR14, VAR15;

VAR11 = FUN3 (VAR4);
if (VAR11 < 1)
return VAR16;

FUN4 (VAR2, &VAR12, &VAR13);


FUN5 (VAR4, VAR10, 0, 1);
VAR15 = (VAR10[0] >> 3) & 0x0F;
VAR14 = VAR17[VAR15];

FUN6 (VAR9, "", VAR15, VAR14);

if (VAR14) {
if (VAR14 > VAR11)
return VAR18;
*VAR6 = 0;
*VAR7 = VAR14;
} else {

FUN7 (VAR9, "");
*VAR6 = 1;
return VAR18;
}

return VAR19;
}