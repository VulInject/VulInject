FUN1 (VAR1 *VAR2,
int                VAR3)
{
int VAR4, VAR5;

do
{
FUN2 (VAR2, &VAR4, &VAR5);
if (VAR5 > VAR3)
break;
}
while (FUN3 (VAR2));
}