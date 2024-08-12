FUN1 (VAR1 *VAR2, int VAR3, int VAR4)
{
VAR5 *VAR6;
guint32 VAR7;

VAR6 = ((VAR5*)FUN2(VAR2)
+ FUN3(VAR2) * VAR3
+ FUN4(VAR2) * VAR4);
VAR7 = (VAR6[0] << 16) | (VAR6[1] << 8) | VAR6[2];

if (FUN3 (VAR2) == 4)
VAR7 = (VAR7 << 8) | VAR6[3];

return VAR7;
}