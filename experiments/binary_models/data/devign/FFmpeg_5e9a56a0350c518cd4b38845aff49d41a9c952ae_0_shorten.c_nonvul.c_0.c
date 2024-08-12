static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    short VAR7;
    const VAR3 *VAR8 = VAR4 + VAR5;
    if (FUN2(&VAR4) != FUN3('', '', '', ''))
    {
        FUN4(VAR2, VAR9, "");
        return -1;
    }
    VAR4 += 4;
    ;
    if (FUN2(&VAR4) != FUN3('', '', '', ''))
    {
        FUN4(VAR2, VAR9, "");
        return -1;
    }
    while (FUN2(&VAR4) != FUN3('', '', '', ''))
    {
        VAR6 = FUN2(&VAR4);
        if (VAR6 < 0 || VAR8 - VAR4 - 8 < VAR6)
            return VAR10;
        VAR4 += VAR6;
    }
    VAR6 = FUN2(&VAR4);
    if (VAR6 < 16)
    {
        FUN4(VAR2, VAR9, "");
        return -1;
    }
    VAR7 = FUN5(&VAR4);
    switch (VAR7)
    {
    case VAR11:
        break;
    default:
        FUN4(VAR2, VAR9, "");
        return -1;
    }
    VAR4 += 2;
    VAR2->VAR12 = FUN2(&VAR4);
    VAR4 += 4;
    VAR4 += 2;
    VAR2->VAR13 = FUN5(&VAR4);
    if (VAR2->VAR13 != 16)
    {
        FUN4(VAR2, VAR9, "");
        return -1;
    }
    VAR6 -= 16;
    if (VAR6 > 0)
        FUN4(VAR2, VAR14, "", VAR6);
    return 0;
}