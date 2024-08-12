static void FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, uint8_t VAR6)
{
    uint32_t VAR7;
    VAR8 *VAR9;
    if (VAR3 % VAR10 != 8)
    {
        return;
    }
    if (VAR6 != 4)
    {
        FUN2("", VAR6);
        return;
    }
    VAR9 = (VAR8 *)VAR5 - VAR3 % VAR10 + VAR11;
    VAR7 = FUN3(VAR9) | (VAR2->VAR12 << VAR13);
    FUN4(VAR9, VAR7);
    FUN2("" VAR14 "", *VAR5);
}