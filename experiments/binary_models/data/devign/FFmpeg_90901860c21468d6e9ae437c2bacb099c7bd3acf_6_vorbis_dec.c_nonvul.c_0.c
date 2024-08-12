static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint_fast8_t VAR5, VAR6;
    VAR2->VAR7 = FUN2(VAR4, 6) + 1;
    VAR2->VAR8 = FUN3(VAR2->VAR7 * sizeof(VAR9));
    FUN4("", VAR2->VAR7);
    for (VAR5 = 0; VAR5 < VAR2->VAR7; ++VAR5)
    {
        VAR9 *VAR10 = &VAR2->VAR8[VAR5];
        if (FUN2(VAR4, 16))
        {
            FUN5(VAR2->VAR11, VAR12, "");
            return 1;
        }
        if (FUN6(VAR4))
        {
            VAR10->VAR13 = FUN2(VAR4, 4) + 1;
        }
        else
        {
            VAR10->VAR13 = 1;
        }
        if (FUN6(VAR4))
        {
            VAR10->VAR14 = FUN2(VAR4, 8) + 1;
            VAR10->VAR15 = FUN3(VAR10->VAR14 * sizeof(VAR16));
            VAR10->VAR17 = FUN3(VAR10->VAR14 * sizeof(VAR16));
            for (VAR6 = 0; VAR6 < VAR10->VAR14; ++VAR6)
            {
                VAR10->VAR15[VAR6] = FUN2(VAR4, FUN7(VAR2->VAR18 - 1));
                VAR10->VAR17[VAR6] = FUN2(VAR4, FUN7(VAR2->VAR18 - 1));
            }
        }
        else
        {
            VAR10->VAR14 = 0;
        }
        FUN4("", VAR5, VAR10->VAR14);
        if (FUN2(VAR4, 2))
        {
            FUN5(VAR2->VAR11, VAR12, "", VAR5);
            return 1;
        }
        if (VAR10->VAR13 > 1)
        {
            VAR10->VAR19 = FUN3(VAR2->VAR18 * sizeof(VAR16));
            for (VAR6 = 0; VAR6 < VAR2->VAR18; ++VAR6)
            {
                VAR10->VAR19[VAR6] = FUN2(VAR4, 4);
            }
        }
        for (VAR6 = 0; VAR6 < VAR10->VAR13; ++VAR6)
        {
            FUN8(VAR4, 8);
            VAR10->VAR20[VAR6] = FUN2(VAR4, 8);
            VAR10->VAR21[VAR6] = FUN2(VAR4, 8);
            FUN4("", VAR5, VAR6, VAR10->VAR20[VAR6], VAR10->VAR21[VAR6]);
        }
    }
    return 0;
}