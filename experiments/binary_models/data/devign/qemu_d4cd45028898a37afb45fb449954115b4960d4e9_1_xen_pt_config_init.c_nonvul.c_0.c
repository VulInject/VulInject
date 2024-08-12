static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7)
{
    uint32_t VAR8 = 0;
    int VAR9;
    VAR9 = FUN2(VAR4->VAR10);
    if (VAR9 < 0 || VAR9 >= VAR11)
    {
        FUN3(&VAR2->VAR12, "", VAR9);
        return -1;
    }
    VAR2->VAR13[VAR9].VAR14 = FUN4(VAR2, VAR9);
    if (VAR2->VAR13[VAR9].VAR14 == VAR15)
    {
        VAR8 = VAR16;
    }
    *VAR7 = VAR8;
    return 0;
}