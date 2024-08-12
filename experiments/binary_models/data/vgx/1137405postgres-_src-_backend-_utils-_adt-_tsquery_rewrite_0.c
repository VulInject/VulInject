VAR1 *
FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, bool *VAR5)
{
bool		VAR6 = false;

VAR2 = FUN2(VAR2, VAR3, VAR4, &VAR6);

if (VAR5)
*VAR5 = VAR6;

return VAR2;
}