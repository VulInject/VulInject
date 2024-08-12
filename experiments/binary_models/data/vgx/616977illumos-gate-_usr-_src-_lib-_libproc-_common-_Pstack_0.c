int
FUN1(const void *VAR1, const void *VAR2)
{
uintptr_t VAR3 = *((const VAR4 *)VAR1);
uintptr_t VAR5 = *((const VAR4 *)VAR2);

if (VAR3 < VAR5)
return (-1);
if (VAR3 > VAR5)
return (+1);
return (0);
}