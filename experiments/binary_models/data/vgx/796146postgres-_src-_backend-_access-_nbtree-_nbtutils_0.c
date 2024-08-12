static int
FUN1(const void *VAR1, const void *VAR2, void *VAR3)
{
Datum		VAR4 = *((const VAR5 *) VAR1);
Datum		VAR6 = *((const VAR5 *) VAR2);
VAR7 *VAR8 = (VAR7 *) VAR3;
int32		VAR9;

VAR9 = FUN2(FUN3(&VAR8->VAR10,
VAR8->VAR11,
VAR4, VAR6));
if (VAR8->VAR12)
FUN4(VAR9);
return VAR9;
}