FUN1 (const void *VAR1, const void *VAR2)
{
const VAR3 *VAR4 = (const VAR3 *) VAR1;
const VAR3 *VAR5 = (const VAR3 *) VAR2;
if (VAR4->VAR6 < VAR5->VAR6)
return -1;
if (VAR4->VAR6 > (VAR5->VAR6 + VAR5->VAR7 - 1))
return 1;
return 0;
}