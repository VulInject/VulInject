static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
assert(!(VAR3 % sizeof(*VAR2->VAR5)));
VAR2->VAR5[VAR3 / sizeof(*VAR2->VAR5)] = VAR4;
}