static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    if (!(VAR2->VAR7 & VAR8) || VAR2->VAR9 || VAR2->VAR10)
    {
        return;
    }
    VAR4 = FUN2(&VAR2->VAR11);
    for (VAR5 = 0; VAR5 < VAR12; VAR5++)
    {
        if (!FUN3(VAR4, VAR5))
        {
            continue;
        }
        VAR6 = FUN4(VAR2, VAR5, true, true);
        if (VAR6 < 0)
        {
            goto VAR13;
        }
    }
    VAR2->VAR10 = true;
    return;
VAR13:
    while (--VAR5 >= 0)
    {
        if (!FUN3(VAR4, VAR5))
        {
            continue;
        }
        VAR6 = FUN4(VAR2, VAR5, false, false);
        assert(VAR6 >= 0);
    }
    VAR2->VAR10 = false;
    VAR2->VAR7 &= ~VAR8;
    FUN5("", VAR14);
}