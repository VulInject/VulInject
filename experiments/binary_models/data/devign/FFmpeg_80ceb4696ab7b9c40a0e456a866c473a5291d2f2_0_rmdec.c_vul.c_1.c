static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4, VAR5, VAR6, VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    uint8_t VAR14[256], VAR15[256];
    VAR16 *VAR17 = VAR2->VAR17;
    VAR18 *VAR19;
    int64_t VAR20, VAR21, VAR22;
    VAR20 = FUN2(VAR17);
    VAR3 = FUN3(VAR17);
    if (VAR3 == FUN4('', '', '', ''))
    {
        if (FUN5(VAR17) != 1)
            return VAR23;
        if (FUN6(VAR17) != 1)
            return VAR23;
        VAR5 = FUN7(VAR17);
        FUN8(VAR17, VAR5);
        FUN8(VAR17, 5);
        VAR22 = FUN9(VAR17);
        while (!FUN10(VAR17) && VAR22)
        {
            VAR21 = VAR22;
            VAR22 = FUN9(VAR17);
        }
        FUN8(VAR17, VAR21 - FUN2(VAR17));
        if (FUN6(VAR17) != 1)
            return VAR23;
        VAR5 = FUN7(VAR17);
        FUN8(VAR17, VAR5);
        if (FUN6(VAR17) != 2)
            return VAR23;
        FUN8(VAR17, 16);
        VAR20 = FUN2(VAR17);
        VAR3 = FUN3(VAR17);
    }
    if (VAR3 != FUN4('', '', '', ''))
        return VAR23;
    if (FUN6(VAR17) != 0)
        return VAR23;
    VAR11 = FUN7(VAR17);
    for (VAR8 = 0; VAR8 < VAR11; VAR8++)
    {
        if (FUN10(VAR17))
            return VAR23;
        VAR4 = FUN6(VAR17);
        VAR6 = FUN7(VAR17);
        FUN11(VAR17, VAR6, VAR14, sizeof(VAR14));
        VAR5 = FUN7(VAR17);
        if (VAR4 == 5)
        {
            FUN11(VAR17, VAR5, VAR15, sizeof(VAR15));
            FUN12(VAR2, VAR24, "", VAR14, VAR15);
        }
        else if (VAR4 == 4)
        {
            FUN12(VAR2, VAR24, "", VAR14);
            for (VAR9 = 0; VAR9 < VAR5; VAR9++)
                FUN12(VAR2, VAR24, "", FUN6(VAR17));
            FUN12(VAR2, VAR24, "");
        }
        else if (VAR5 == 4 && VAR4 == 3 && !FUN13(VAR14, "", VAR6))
        {
            VAR12 = VAR7 = FUN7(VAR17);
        }
        else if (VAR5 == 4 && VAR4 == 3)
        {
            VAR7 = FUN7(VAR17);
            FUN12(VAR2, VAR24, "", VAR14, VAR7);
        }
        else
        {
            FUN12(VAR2, VAR24, "", VAR14);
            FUN8(VAR17, VAR5);
        }
    }
    for (VAR10 = 0; VAR10 < VAR12; VAR10++)
    {
        VAR19 = FUN14(VAR2, NULL);
        if (!VAR19)
            return FUN15(VAR25);
        VAR19->VAR26 = FUN16();
        if (!VAR19->VAR26)
            return FUN15(VAR25);
        if (FUN6(VAR17) != 1)
            return VAR23;
        VAR11 = FUN7(VAR17);
        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
        {
            if (FUN10(VAR17))
                return VAR23;
            VAR4 = FUN6(VAR17);
            VAR6 = FUN7(VAR17);
            FUN11(VAR17, VAR6, VAR14, sizeof(VAR14));
            VAR5 = FUN7(VAR17);
            if (VAR4 == 5)
            {
                FUN11(VAR17, VAR5, VAR15, sizeof(VAR15));
                FUN12(VAR2, VAR24, "", VAR14, VAR15);
            }
            else if (VAR4 == 4 && !FUN13(VAR14, "", VAR6))
            {
                VAR13 = FUN17(VAR17, 4);
                if (VAR13 < 0)
                    return VAR13;
                if (FUN7(VAR17) == FUN18('', '', '', ''))
                {
                    VAR13 = FUN19(VAR2, VAR17, VAR19, NULL);
                }
                else
                {
                    FUN20(VAR17, -4, VAR27);
                    VAR13 = FUN21(VAR2, VAR17, VAR19, VAR19->VAR26, VAR5, NULL);
                }
                if (VAR13 < 0)
                    return VAR13;
            }
            else if (VAR4 == 4)
            {
                int VAR9;
                FUN12(VAR2, VAR24, "", VAR14);
                for (VAR9 = 0; VAR9 < VAR5; VAR9++)
                    FUN12(VAR2, VAR24, "", FUN6(VAR17));
                FUN12(VAR2, VAR24, "");
            }
            else if (VAR5 == 4 && VAR4 == 3 && !FUN13(VAR14, "", VAR6))
            {
                VAR19->VAR28 = FUN7(VAR17);
            }
            else if (VAR5 == 4 && VAR4 == 3)
            {
                VAR7 = FUN7(VAR17);
                FUN12(VAR2, VAR24, "", VAR14, VAR7);
            }
            else
            {
                FUN12(VAR2, VAR24, "", VAR14);
                FUN8(VAR17, VAR5);
            }
        }
    }
    if (FUN6(VAR17) != 6)
        return VAR23;
    FUN8(VAR17, 12);
    FUN8(VAR17, FUN9(VAR17) + VAR20 - FUN2(VAR2->VAR17));
    if (FUN6(VAR17) != 8)
        return VAR23;
    FUN8(VAR17, 8);
    return 0;
}