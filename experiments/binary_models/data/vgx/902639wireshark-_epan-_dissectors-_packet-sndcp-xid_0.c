static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, guint16 VAR6)
{
guint8 VAR7, VAR8;

VAR7 = FUN2(VAR3, VAR6);
VAR8 = FUN2(VAR3, VAR6+1);

FUN3(VAR5, VAR9, VAR3, VAR6, 1, VAR7);
FUN3(VAR5, VAR10, VAR3, VAR6+1, 1, VAR8);

return 2U;
}