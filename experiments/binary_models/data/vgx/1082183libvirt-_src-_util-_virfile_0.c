int
FUN1(VAR1 *VAR2)
{
int VAR3;

if (!VAR2 || VAR2->VAR4)
return 0;

VAR3 = FUN2(VAR2->VAR5, NULL);


if (VAR3 < 0 && VAR2->VAR6 && *VAR2->VAR6)
FUN3(VAR7, "", VAR2->VAR6);

VAR2->VAR4 = true;

return VAR3;
}