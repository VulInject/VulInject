VAR1 FUN1(const VAR2 *VAR3, VAR4 **VAR5)
{
VAR6 *VAR7 = FUN2(sizeof(*VAR7));
size_t              VAR8;

*VAR5 = (VAR4 *)VAR7;
VAR8        = FUN3((const VAR9 *)VAR3, VAR7);
if (VAR8 == 0) {
FUN4(*VAR5);
*VAR5 = NULL;
}
return VAR8;
}