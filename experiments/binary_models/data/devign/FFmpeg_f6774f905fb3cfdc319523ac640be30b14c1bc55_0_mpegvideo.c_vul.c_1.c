void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (VAR2->VAR7->VAR8 || !VAR4 || !VAR4->VAR9)
        return;
    VAR6 = &VAR4->VAR10;
    if (VAR2->VAR7->VAR11 & (VAR12 | VAR13 | VAR14))
    {
        int VAR15, VAR16;
        FUN2(VAR2->VAR7, VAR17, "");
        switch (VAR6->VAR18)
        {
        case VAR19:
            FUN2(VAR2->VAR7, VAR17, "");
            break;
        case VAR20:
            FUN2(VAR2->VAR7, VAR17, "");
            break;
        case VAR21:
            FUN2(VAR2->VAR7, VAR17, "");
            break;
        case VAR22:
            FUN2(VAR2->VAR7, VAR17, "");
            break;
        case VAR23:
            FUN2(VAR2->VAR7, VAR17, "");
            break;
        case VAR24:
            FUN2(VAR2->VAR7, VAR17, "");
            break;
        }
        for (VAR16 = 0; VAR16 < VAR2->VAR25; VAR16++)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR26; VAR15++)
            {
                if (VAR2->VAR7->VAR11 & VAR12)
                {
                    int VAR27 = VAR2->VAR28[VAR15 + VAR16 * VAR2->VAR29];
                    if (VAR27 > 9)
                        VAR27 = 9;
                    FUN2(VAR2->VAR7, VAR17, "", VAR27);
                }
                if (VAR2->VAR7->VAR11 & VAR13)
                {
                    FUN2(VAR2->VAR7, VAR17, "", VAR4->VAR30[VAR15 + VAR16 * VAR2->VAR29]);
                }
                if (VAR2->VAR7->VAR11 & VAR14)
                {
                    int VAR9 = VAR4->VAR9[VAR15 + VAR16 * VAR2->VAR29];
                    if (FUN3(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN4(VAR9) && FUN5(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN6(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN7(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN8(VAR9) && FUN9(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN8(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN10(VAR9) && FUN9(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN10(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN9(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (!FUN11(VAR9, 1))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (!FUN11(VAR9, 0))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else
                    {
                        assert(FUN11(VAR9, 0) && FUN11(VAR9, 1));
                        FUN2(VAR2->VAR7, VAR17, "");
                    }
                    if (FUN12(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN13(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN14(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else if (FUN4(VAR9) || FUN15(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else
                        FUN2(VAR2->VAR7, VAR17, "");
                    if (FUN16(VAR9))
                        FUN2(VAR2->VAR7, VAR17, "");
                    else
                        FUN2(VAR2->VAR7, VAR17, "");
                }
            }
            FUN2(VAR2->VAR7, VAR17, "");
        }
    }
}