static void *FUN1(VAR1 *VAR2, size_t VAR3)
{
VAR4 *VAR5;
const size_t VAR6 = (VAR3 <= VAR2->VAR7) ? VAR2->VAR7 : VAR3;
size_t VAR8;

if (FUN2(&VAR8, VAR6, sizeof(VAR4)) ||
!(VAR5 = FUN3(VAR8)))
return NULL;

VAR5->VAR3 = VAR6;
VAR5->VAR9 = VAR6 - VAR3;
VAR5->VAR10 = VAR2->VAR11;

VAR2->VAR11 = VAR5;

return VAR5->VAR12;
}