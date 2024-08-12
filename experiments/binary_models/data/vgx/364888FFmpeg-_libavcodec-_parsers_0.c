const VAR1 *FUN1(void **VAR2)
{
uintptr_t VAR3 = (VAR4)*VAR2;
const VAR1 *VAR5 = VAR6[VAR3];

if (VAR5)
*VAR2 = (void*)(VAR3 + 1);

return VAR5;
}