static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[VAR3];
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12 = FUN2(VAR7, VAR4, VAR5);
    if (VAR12 < 0)
        return -1;
    FUN3(VAR2->VAR13, VAR7->VAR14[VAR12].VAR15, VAR16);
    VAR10->VAR17 = VAR7->VAR14[VAR12].VAR4;
    return 0;
}