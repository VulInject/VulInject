static bool FUN1(VAR1 *VAR2, uint32_t VAR3)
{
const VAR4 *VAR5 = VAR2->VAR6;
const uint32_t VAR7 = VAR2->VAR8;

if (!VAR5 || !VAR7) {
return false;
}

return FUN2(&VAR3, VAR5, VAR7, sizeof(VAR5[0]), VAR9) != NULL;
}