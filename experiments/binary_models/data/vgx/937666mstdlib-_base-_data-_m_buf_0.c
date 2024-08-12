void FUN1(VAR1 *VAR2, size_t VAR3)
{
if (VAR2 == NULL || VAR2->VAR4 <= VAR3 || VAR2->VAR5 == NULL)
return;


FUN2(VAR2->VAR5+VAR2->VAR6+VAR3, 0xFF, VAR2->VAR4-VAR3);

VAR2->VAR4                                 = VAR3;
VAR2->VAR5[VAR2->VAR6 + VAR2->VAR4] = 0;
}