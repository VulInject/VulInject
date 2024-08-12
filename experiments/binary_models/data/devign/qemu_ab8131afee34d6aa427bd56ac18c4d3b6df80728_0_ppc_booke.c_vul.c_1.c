static void FUN1(VAR1 *VAR2, uint8_t VAR3, VAR4 *VAR5, struct VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR9;
    uint64_t VAR10;
    uint64_t VAR11;
    uint64_t VAR12 = 1 << (VAR3 + 1);
    uint64_t VAR13;
    VAR13 = FUN2(VAR14);
    VAR11 = FUN3(VAR9, VAR13, VAR9->VAR15);
    VAR10 = VAR12 - ((VAR11 - (1 << VAR3)) & (VAR12 - 1));
    *VAR5 = VAR13 + FUN4(VAR10, FUN5(), VAR9->VAR16);
    if (*VAR5 == VAR13)
    {
        (*VAR5)++;
    }
    FUN6(VAR7, *VAR5);
}