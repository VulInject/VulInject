static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    IVIPicConfig VAR8;
    if (FUN2(&VAR2->VAR9, 18) != 0x3FFF8)
    {
        FUN3(VAR4, VAR10, "");
        return VAR11;
    }
    VAR2->VAR12 = VAR2->VAR13;
    VAR2->VAR13 = FUN2(&VAR2->VAR9, 3);
    if (VAR2->VAR13 == 7)
    {
        FUN3(VAR4, VAR10, "", VAR2->VAR13);
        return VAR11;
    }
    if (VAR2->VAR13 == VAR14)
        VAR2->VAR15 = 1;
    VAR2->VAR16 = FUN4(&VAR2->VAR9);
    if (FUN4(&VAR2->VAR9))
    {
        FUN3(VAR4, VAR10, "");
        return VAR11;
    }
    VAR2->VAR17 = FUN4(&VAR2->VAR9) ? FUN2(&VAR2->VAR9, 24) : 0;
    if (VAR2->VAR13 >= VAR18)
    {
        FUN5(VAR4, "");
        return 0;
    }
    if (FUN4(&VAR2->VAR9))
    {
        FUN6(&VAR2->VAR9, 32);
        FUN5(VAR4, "");
    }
    VAR5 = FUN2(&VAR2->VAR9, 3);
    if (VAR5 == VAR19)
    {
        VAR8.VAR20 = FUN2(&VAR2->VAR9, 16);
        VAR8.VAR21 = FUN2(&VAR2->VAR9, 16);
    }
    else
    {
        VAR8.VAR20 = VAR22[VAR5 * 2 + 1];
        VAR8.VAR21 = VAR22[VAR5 * 2];
    }
    VAR2->VAR23 = FUN4(&VAR2->VAR9);
    if (VAR2->VAR23)
    {
        VAR8.VAR24 = FUN7(VAR8.VAR20, FUN2(&VAR2->VAR9, 4));
        VAR8.VAR25 = FUN7(VAR8.VAR21, FUN2(&VAR2->VAR9, 4));
    }
    else
    {
        VAR8.VAR24 = VAR8.VAR20;
        VAR8.VAR25 = VAR8.VAR21;
    }
    if (FUN2(&VAR2->VAR9, 2))
    {
        FUN3(VAR4, VAR10, "");
        return VAR11;
    }
    VAR8.VAR26 = (VAR8.VAR20 + 3) >> 2;
    VAR8.VAR27 = (VAR8.VAR21 + 3) >> 2;
    VAR8.VAR28 = FUN8(&VAR2->VAR9);
    if (VAR8.VAR28)
        VAR8.VAR29 = FUN8(&VAR2->VAR9);
    VAR2->VAR30 = VAR8.VAR28 != 1 || VAR8.VAR29 != 1;
    if (VAR2->VAR30 && (VAR8.VAR28 != 4 || VAR8.VAR29 != 1))
    {
        FUN3(VAR4, VAR10, "", VAR8.VAR28, VAR8.VAR29);
        return VAR11;
    }
    if (FUN9(&VAR8, &VAR2->VAR8))
    {
        if (FUN10(VAR2->VAR31, &VAR8, 1))
        {
            FUN3(VAR4, VAR10, "");
            VAR2->VAR8.VAR28 = 0;
            return FUN11(VAR32);
        }
        VAR2->VAR8 = VAR8;
        for (VAR7 = 0; VAR7 <= 2; VAR7++)
        {
            for (VAR6 = 0; VAR6 < (!VAR7 ? VAR8.VAR28 : VAR8.VAR29); VAR6++)
            {
                VAR2->VAR31[VAR7].VAR33[VAR6].VAR34 = !VAR7 ? (!VAR2->VAR30 ? 16 : 8) : 4;
                VAR2->VAR31[VAR7].VAR33[VAR6].VAR35 = !VAR7 ? 8 : 4;
            }
        }
        if (FUN12(VAR2->VAR31, VAR2->VAR8.VAR25, VAR2->VAR8.VAR24))
        {
            FUN3(VAR4, VAR10, "");
            return FUN11(VAR32);
        }
    }
    VAR2->VAR36 = FUN4(&VAR2->VAR9) ? FUN2(&VAR2->VAR9, 20) : 0;
    if (FUN4(&VAR2->VAR9))
        FUN13(&VAR2->VAR9, 8);
    if (FUN14(&VAR2->VAR9, FUN4(&VAR2->VAR9), VAR37, &VAR2->VAR38, VAR4) || FUN14(&VAR2->VAR9, FUN4(&VAR2->VAR9), VAR39, &VAR2->VAR40, VAR4))
        return VAR11;
    VAR2->VAR41 = FUN4(&VAR2->VAR9) ? FUN2(&VAR2->VAR9, 3) : 8;
    VAR2->VAR42 = FUN4(&VAR2->VAR9);
    VAR2->VAR43 = FUN4(&VAR2->VAR9);
    VAR2->VAR44 = FUN2(&VAR2->VAR9, 5);
    VAR2->VAR45 = FUN4(&VAR2->VAR9) ? FUN2(&VAR2->VAR9, 3) : 0;
    VAR2->VAR46 = FUN4(&VAR2->VAR9) ? FUN2(&VAR2->VAR9, 16) : 0;
    while (FUN4(&VAR2->VAR9))
    {
        FUN5(VAR4, "");
        FUN13(&VAR2->VAR9, 8);
    }
    if (FUN4(&VAR2->VAR9))
    {
        FUN3(VAR4, VAR10, "");
    }
    FUN15(&VAR2->VAR9);
    return 0;
}