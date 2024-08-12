static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11[VAR3];
    int VAR12 = FUN2(VAR10, VAR4, VAR5);
    if (VAR12 < 0)
        return -1;
    VAR7->VAR13 = VAR12;
    FUN3(VAR2->VAR14, VAR10->VAR15[VAR12].VAR16, VAR17);
    return 0;
}