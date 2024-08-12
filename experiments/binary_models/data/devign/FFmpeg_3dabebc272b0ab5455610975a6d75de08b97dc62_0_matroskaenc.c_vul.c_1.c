static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int64_t VAR8, VAR9;
    int VAR10;
    if (VAR4->VAR11.VAR12 > 0)
    {
        VAR10 = FUN2(VAR2, &VAR4->VAR11, 0);
        FUN3(&VAR4->VAR11);
        if (VAR10 < 0)
        {
            FUN4(VAR2, VAR13, "", VAR10);
            return VAR10;
        }
    }
    if (VAR4->VAR14)
    {
        FUN5(VAR4->VAR14, VAR4->VAR15);
        FUN6(VAR2);
    }
    else if (VAR4->VAR16 != -1)
    {
        FUN5(VAR7, VAR4->VAR15);
    }
    if (VAR4->VAR17 != VAR18)
    {
        VAR10 = FUN7(VAR2);
        if (VAR10 < 0)
            return VAR10;
    }
    if (VAR7->VAR19)
    {
        if (VAR4->VAR20->VAR21)
        {
            if (VAR4->VAR22)
            {
                int64_t VAR23;
                VAR8 = FUN8(VAR7);
                FUN9(VAR7, VAR4->VAR24, VAR25);
                VAR9 = FUN10(VAR2, VAR4->VAR20, VAR4->VAR26, VAR2->VAR27);
                VAR23 = FUN8(VAR7);
                if (VAR23 > VAR9 + VAR4->VAR22)
                {
                    FUN4(VAR2, VAR13, ""
                                            "" VAR28 "",
                           VAR4->VAR22, VAR23 - VAR9);
                    return FUN11(VAR29);
                }
                if (VAR23 < VAR9 + VAR4->VAR22)
                    FUN12(VAR7, VAR4->VAR22 - (VAR23 - VAR9));
                FUN9(VAR7, VAR8, VAR25);
            }
            else
            {
                VAR9 = FUN10(VAR2, VAR4->VAR20, VAR4->VAR26, VAR2->VAR27);
            }
            VAR10 = FUN13(VAR4->VAR30, VAR31, VAR9);
            if (VAR10 < 0)
                return VAR10;
        }
        FUN14(VAR7, VAR4->VAR30);
        FUN4(VAR2, VAR32, "" VAR33 "", VAR4->VAR34);
        VAR8 = FUN8(VAR7);
        FUN9(VAR7, VAR4->VAR35, VAR25);
        FUN15(VAR7, VAR36, VAR4->VAR34);
        if (VAR4->VAR37)
        {
            int VAR38;
            for (VAR38 = 0; VAR38 < VAR2->VAR27; ++VAR38)
            {
                VAR39 *VAR40 = VAR2->VAR41[VAR38];
                double VAR42 = VAR4->VAR37[VAR38] * FUN16(VAR40->VAR43);
                char VAR44[20] = "";
                FUN4(VAR2, VAR32, "" VAR33 "", VAR38, VAR4->VAR37[VAR38]);
                if (!VAR4->VAR45 && VAR4->VAR46[VAR38] > 0)
                {
                    FUN9(VAR7, VAR4->VAR46[VAR38], VAR25);
                    snprintf(VAR44, 20, "", (int)VAR42 / 3600, ((int)VAR42 / 60) % 60, FUN17(VAR42, 60));
                    FUN18(VAR7, VAR47, VAR44, 20);
                }
            }
        }
        FUN9(VAR7, VAR8, VAR25);
    }
    if (!VAR4->VAR45)
    {
        FUN5(VAR7, VAR4->VAR48);
    }
    FUN19(&VAR4->VAR26);
    FUN19(&VAR4->VAR20->VAR49);
    FUN19(&VAR4->VAR20);
    FUN19(&VAR4->VAR37);
    FUN19(&VAR4->VAR46);
    return 0;
}