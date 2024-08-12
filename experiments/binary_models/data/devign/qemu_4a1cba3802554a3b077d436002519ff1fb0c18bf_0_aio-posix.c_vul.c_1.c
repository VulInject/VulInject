bool FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5;
    int VAR6, VAR7;
    bool VAR8;
    int64_t VAR9;
    FUN2(VAR2);
    VAR8 = false;
    if (VAR3)
    {
        FUN3(&VAR2->VAR10, 2);
    }
    VAR2->VAR11++;
    assert(VAR12 == 0);
    if (!FUN4(VAR2))
    {
        FUN5(VAR5, &VAR2->VAR13, VAR5)
        {
            if (!VAR5->VAR14 && VAR5->VAR15.VAR16 && FUN6(VAR2, VAR5->VAR17))
            {
                FUN7(VAR5);
            }
        }
    }
    VAR9 = VAR3 ? FUN8(VAR2) : 0;
    if (VAR9)
    {
        FUN9(VAR2);
    }
    if (FUN10(VAR2, VAR18, VAR12, VAR9))
    {
        AioHandler VAR19;
        VAR19.VAR15.VAR20 = VAR2->VAR21;
        VAR19.VAR15.VAR16 = VAR22 | VAR23 | VAR24 | VAR25;
        VAR12 = 0;
        FUN7(&VAR19);
        VAR7 = FUN11(VAR2, VAR18, VAR12, VAR9);
    }
    else
    {
        VAR7 = FUN12(VAR18, VAR12, VAR9);
    }
    if (VAR3)
    {
        FUN13(&VAR2->VAR10, 2);
    }
    if (VAR9)
    {
        FUN2(VAR2);
    }
    FUN14(VAR2);
    if (VAR7 > 0)
    {
        for (VAR6 = 0; VAR6 < VAR12; VAR6++)
        {
            VAR26[VAR6]->VAR15.VAR27 = VAR18[VAR6].VAR27;
        }
    }
    VAR12 = 0;
    VAR2->VAR11--;
    if (FUN15(VAR2, VAR7 > 0))
    {
        VAR8 = true;
    }
    FUN9(VAR2);
    return VAR8;
}