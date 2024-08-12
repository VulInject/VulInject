FUN1 (guint32 VAR1, VAR2 *VAR3)
{
guint VAR4;

for (VAR4 = 0; VAR4 < VAR5; VAR4++) {
VAR6 *VAR7 = &(VAR8[VAR4]);

if ((strcmp (VAR7->VAR9, VAR10) == 0) &&
(VAR7->VAR11 == VAR1))
{
FUN2 (VAR3->VAR12, "", VAR7->VAR13);
break;
}
}
}