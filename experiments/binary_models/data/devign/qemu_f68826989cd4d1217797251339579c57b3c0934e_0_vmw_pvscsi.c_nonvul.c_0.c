FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    uint32_t VAR6;
    uint32_t VAR7;
    if (!VAR4->VAR8 || VAR4->VAR8 > VAR9)
    {
        return -1;
    }
    VAR7 = VAR4->VAR8 * VAR10;
    VAR6 = FUN2(VAR7 - 1);
    VAR2->VAR11 = FUN3(VAR6);
    VAR2->VAR12 = 0;
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        VAR2->VAR13[VAR5] = VAR4->VAR14[VAR5] << VAR15;
    }
    FUN4(VAR2, VAR16, 0);
    FUN4(VAR2, VAR17, 0);
    FUN4(VAR2, VAR18, VAR6);
    FUN5(VAR6);
    FUN6();
    return 0;
}