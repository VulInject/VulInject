static void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    *VAR2->VAR4 &= 0xffffffff00000000ULL;
    *VAR2->VAR4 |= VAR3;
    VAR2->VAR5 = VAR6;
}