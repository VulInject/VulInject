static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    int VAR10;
    *VAR5 = FUN2(VAR7, VAR3);
    if (*VAR5 != NULL)
    {
        return 0;
    }
    VAR9 = FUN3(VAR2);
    *VAR5 = VAR7->VAR11 + (VAR9 << VAR7->VAR12);
    FUN4(VAR2->VAR13, VAR14);
    VAR10 = FUN5(VAR2->VAR13, VAR3, *VAR5, VAR7->VAR15 * sizeof(VAR4));
    if (VAR10 < 0)
    {
        return VAR10;
    }
    VAR7->VAR16[VAR9] = VAR3;
    VAR7->VAR17[VAR9] = 1;
    return 0;