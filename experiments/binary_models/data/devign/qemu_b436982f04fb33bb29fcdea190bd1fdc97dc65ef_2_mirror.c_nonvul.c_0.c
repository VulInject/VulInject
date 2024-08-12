static void FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, bool VAR5)
{
    VAR6 *VAR7;
    VAR7 = FUN2(VAR6, 1);
    VAR7->VAR2 = VAR2;
    VAR7->VAR8 = VAR3 * VAR9;
    VAR7->VAR10 = VAR4 * VAR9;
    VAR2->VAR11++;
    VAR2->VAR12 += VAR4 * VAR9;
    if (VAR5)
    {
        FUN3(VAR2->VAR13, VAR3 << VAR14, VAR7->VAR10, VAR15, VAR7);
    }
    else
    {
        FUN4(VAR2->VAR13, VAR3 * VAR9, VAR7->VAR10, VAR2->VAR16 ? VAR17 : 0, VAR15, VAR7);
    }
}