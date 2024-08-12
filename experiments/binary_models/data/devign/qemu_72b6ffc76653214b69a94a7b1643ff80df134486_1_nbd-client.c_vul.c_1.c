static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    int VAR9, VAR10, VAR11;
    FUN3(&VAR8->VAR12);
    while (VAR8->VAR13 == VAR14)
    {
        FUN4(&VAR8->VAR15, &VAR8->VAR12);
    }
    VAR8->VAR13++;
    for (VAR11 = 0; VAR11 < VAR14; VAR11++)
    {
        if (VAR8->VAR16[VAR11] == NULL)
        {
            VAR8->VAR16[VAR11] = FUN5();
            break;
        }
    }
    FUN6(FUN7());
    assert(VAR11 < VAR14);
    VAR4->VAR17 = FUN8(VAR8, VAR11);
    if (!VAR8->VAR18)
    {
        FUN9(&VAR8->VAR12);
        return -VAR19;
    }
    if (VAR6)
    {
        FUN10(VAR8->VAR18, true);
        VAR9 = FUN11(VAR8->VAR18, VAR4);
        if (VAR9 >= 0)
        {
            VAR10 = FUN12(VAR8->VAR18, VAR6->VAR20, VAR6->VAR21, VAR4->VAR22, false, NULL);
            if (VAR10 != VAR4->VAR22)
            {
                VAR9 = -VAR23;
            }
        }
        FUN10(VAR8->VAR18, false);
    }
    else
    {
        VAR9 = FUN11(VAR8->VAR18, VAR4);
    }
    FUN9(&VAR8->VAR12);
    return VAR9;
}