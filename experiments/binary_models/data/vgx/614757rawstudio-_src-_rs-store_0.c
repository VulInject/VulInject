static VAR1
FUN1(VAR2 *VAR3, const VAR4 *VAR5, VAR6 *VAR7, VAR8 **VAR9)
{
GtkTreeIter VAR10;
VAR8 *VAR11;
VAR4 *VAR12;
gboolean VAR13 = VAR14;

if (!VAR3) return VAR14;
if (!VAR5) return VAR14;

VAR11 = FUN2();
if (FUN3(VAR3, &VAR10, VAR11))
{
do {
FUN4(VAR3, &VAR10, VAR15, &VAR12, -1);
if (FUN5(VAR12, VAR5)==0)
{
if (VAR7)
*VAR7 = VAR10;
if (VAR9)
*VAR9 = FUN6(VAR3, &VAR10);
VAR13 = VAR16;
break;
}
} while(FUN7 (VAR3, &VAR10));
}
FUN8(VAR11);

return VAR13;
}