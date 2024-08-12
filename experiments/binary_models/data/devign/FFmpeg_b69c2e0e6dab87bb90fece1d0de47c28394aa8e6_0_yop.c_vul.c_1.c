static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int64_t VAR9, VAR10, VAR11;
    int VAR12;
    FUN2(&VAR7->VAR13);
    if (!VAR3)
        return -1;
    VAR10 = VAR2->VAR14;
    VAR11 = FUN3(VAR2->VAR15) - VAR7->VAR16;
    VAR12 = (VAR11 - VAR10) / VAR7->VAR16;
    VAR4 = FUN4(0, FUN5(VAR12, VAR4));
    VAR9 = VAR4 * VAR7->VAR16 + VAR10;
    VAR7->VAR17 = VAR4 & 1;
    FUN6(VAR2->VAR15, VAR9, VAR18);
    return 0;
}