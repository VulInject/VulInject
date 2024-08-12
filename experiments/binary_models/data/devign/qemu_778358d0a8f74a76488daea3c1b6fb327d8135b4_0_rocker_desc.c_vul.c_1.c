bool FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4;
    if (VAR3 < 2 || VAR3 > 0x10000 || (VAR3 & (VAR3 - 1)))
    {
        FUN2(""
                "",
                VAR2->VAR5, VAR3);
        return false;
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR3; VAR4++)
    {
        FUN3(VAR2->VAR6[VAR4].VAR7);
    }
    VAR2->VAR3 = VAR3;
    VAR2->VAR8 = VAR2->VAR9 = 0;
    VAR2->VAR6 = FUN4(VAR2->VAR6, VAR3 * sizeof(VAR10));
    if (!VAR2->VAR6)
    {
        return false;
    }
    memset(VAR2->VAR6, 0, VAR3 * sizeof(VAR10));
    for (VAR4 = 0; VAR4 < VAR3; VAR4++)
    {
        VAR2->VAR6[VAR4].VAR2 = VAR2;
    }
    return true;
}