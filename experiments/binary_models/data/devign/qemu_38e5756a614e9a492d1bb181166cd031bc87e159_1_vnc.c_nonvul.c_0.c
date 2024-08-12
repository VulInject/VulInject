static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, bool VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, 1);
    int VAR9;
    VAR8->VAR4 = VAR4;
    FUN3(FUN4(VAR8->VAR4));
    VAR8->VAR10 = FUN5(VAR4);
    FUN3(FUN4(VAR8->VAR10));
    VAR8->VAR2 = VAR2;
    FUN6(&VAR8->VAR11, "", VAR4);
    FUN6(&VAR8->VAR12, "", VAR4);
    FUN6(&VAR8->VAR13, "", VAR4);
    FUN6(&VAR8->VAR14.VAR14, "", VAR4);
    FUN6(&VAR8->VAR14.VAR15, "", VAR4);
    FUN6(&VAR8->VAR14.VAR16, "", VAR4);
    FUN6(&VAR8->VAR14.VAR17, "", VAR4);
    FUN6(&VAR8->VAR14.VAR18, "", VAR4);
    FUN6(&VAR8->VAR15.VAR15, "", VAR4);
    FUN6(&VAR8->VAR19.VAR19, "", VAR4);
    FUN6(&VAR8->VAR19.VAR20, "", VAR4);
    FUN6(&VAR8->VAR19.VAR15, "", VAR4);
    if (VAR5)
    {
        VAR8->VAR21 = VAR22;
        VAR8->VAR23 = VAR24;
    }
    else
    {
        if (VAR6)
        {
            VAR8->VAR21 = VAR2->VAR25;
            VAR8->VAR23 = VAR24;
        }
        else
        {
            VAR8->VAR21 = VAR2->VAR21;
            VAR8->VAR23 = VAR2->VAR23;
        }
    }
    FUN7("", VAR4, VAR6, VAR8->VAR21, VAR8->VAR23);
    VAR8->VAR26 = FUN8(VAR27 * sizeof(*VAR8->VAR26));
    for (VAR9 = 0; VAR9 < VAR27; ++VAR9)
    {
        VAR8->VAR26[VAR9] = FUN2(VAR28, VAR29);
    }
    FUN7("", VAR8->VAR4);
    FUN9(&VAR2->VAR30, VAR31);
    FUN10(VAR8->VAR10, false, NULL);
    if (VAR6)
    {
        VAR8->VAR6 = 1;
        if (VAR2->VAR32)
        {
            VAR8->VAR33 = FUN11(VAR8->VAR10, VAR34, VAR35, VAR8, NULL);
        }
        else
        {
            VAR8->VAR33 = FUN11(VAR8->VAR10, VAR34, VAR36, VAR8, NULL);
        }
    }
    else
    {
        VAR8->VAR33 = FUN11(VAR8->VAR10, VAR34, VAR37, VAR8, NULL);
    }
    FUN12(VAR8);
    FUN13(VAR8, VAR38);
    FUN14(VAR8, VAR39);
    if (!VAR8->VAR6)
    {
        FUN15(VAR8);
    }
    if (VAR2->VAR40 > VAR2->VAR41)
    {
        FUN16(VAR8, &VAR2->VAR42, VAR43)
        {
            if (VAR8->VAR44 == VAR39)
            {
                FUN17(VAR8);
                return;
            }
        }
    }
}