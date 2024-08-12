struct VAR1 *FUN1(
const struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct of_endpoint VAR5;
struct VAR1 *VAR6 = NULL;

FUN2(VAR2, VAR6) {
FUN3(VAR6, &VAR5);
if (((VAR3 == -1) || (VAR5.VAR7 == VAR3)) &&
((VAR4 == -1) || (VAR5.VAR8 == VAR4)))
return VAR6;
}

return NULL;
}